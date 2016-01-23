#pragma once

#include "MyCar.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			// Initial state, added by Zhang
			Duplicates = gcnew ArrayList();
			Originals = gcnew ArrayList();
			array<Color>^ colors = {Color::Red, Color::Green, Color::Blue, Color::Magenta, Color::Cyan, Color::Yellow};
			int count=colors->Length;
			int dx=30;
			int dy=40;
			int gap=80;
			int sep = 80 + (80/3);
			int length=(ClientSize.Height-2*dy-(count-1)*gap)/count;
			for (int i=0; i<count; i++) { 
				Originals->Add(gcnew CMyShape(dx, dy+i*sep, 80, 40, 2*(80/3), colors[i]));
			}
			ShapeToBeMoved=nullptr; // no shape selected

			// create the back buffer
			backBuffer = gcnew Bitmap(ClientSize.Width, ClientSize.Height);
			gBackBuffer = Graphics::FromImage(backBuffer);
			this->SetStyle(ControlStyles::Opaque, true);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		// state representation, added by Zhang
		ArrayList ^Originals;
		ArrayList ^Duplicates;

		CMyShape^ ShapeToBeMoved;
		int m_nOffsetX;	// difference between cursor and top-left corner
		int m_nOffsetY;

		// double buffering
		Bitmap^ backBuffer;
		Graphics^ gBackBuffer;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 600);
			this->Name = L"Form1";
			this->Text = L"Building Blocks";
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseUp);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseClick);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				// State Presentation, using double buffers
				// First, clear the back buffer
				gBackBuffer->Clear(Color::White);
				// draw the originals to back buffer
				for (int i=0; i<Originals->Count; i++) {
					CMyShape^ p=(CMyShape^)Originals[i];
					p->draw(gBackBuffer);
				}
				// draw the duplicates to back buffer
				for (int i=0; i<Duplicates->Count; i++) {
					CMyShape^ p=(CMyShape^)Duplicates[i];
					p->draw(gBackBuffer);
				}
				// copy from back buffer to front
				e->Graphics->DrawImageUnscaled(backBuffer, 0, 0);
			 }
	private: System::Void Form1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				if (e->Button == System::Windows::Forms::MouseButtons::Left) {
					// First, check the originals, from top down (i.e. back to front)
					for (int i=Duplicates->Count-1; i>=0; i--) {
						CMyShape^ p=(CMyShape^)Duplicates[i];
						if (p->containPoint(e->X, e->Y)) {
							Duplicates->RemoveAt(i);
							Duplicates->Add(p);	// move to the end, i.e. the top
							ShapeToBeMoved=p;
							m_nOffsetX=e->X-ShapeToBeMoved->getX();
							m_nOffsetY=e->Y-ShapeToBeMoved->getY();
							Invalidate();
							return;
						}
					}
					// Second, check the orginals 
					for (int i=Originals->Count-1; i>=0; i--) {
						CMyShape^ p=(CMyShape^)Originals[i];
						if (p->containPoint(e->X, e->Y)) {
							CMyShape^ p2=gcnew CMyShape(p); // make a copy of p
							Duplicates->Add(p2);	// add to the end
							ShapeToBeMoved=p2;	// p2 is selected, to be moved
							m_nOffsetX=e->X-ShapeToBeMoved->getX();
							m_nOffsetY=e->Y-ShapeToBeMoved->getY();
							Invalidate();
							return;
						}
					}
				}
			 }
	private: System::Void Form1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				if (e->Button == System::Windows::Forms::MouseButtons::Left) {
					if (ShapeToBeMoved!=nullptr) {
						ShapeToBeMoved->setX(e->X-m_nOffsetX);
						ShapeToBeMoved->setY(e->Y-m_nOffsetY);
						Invalidate();
					}
				}
			 }
	private: System::Void Form1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				ShapeToBeMoved=nullptr; // no shape selected
			 }
	private: System::Void Form1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				if (e->Button == System::Windows::Forms::MouseButtons::Right) {
					for (int i=Duplicates->Count-1; i>=0; i--) {
						CMyShape^ p=(CMyShape^)Duplicates[i];
						if (p->containPoint(e->X, e->Y)) {
							Duplicates->RemoveAt(i);
							Invalidate();
							break;
						}
					}
				}
			 }
	};
}