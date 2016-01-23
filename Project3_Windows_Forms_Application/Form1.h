/*
Alexander Mark Thompson
CS 351-001
Description: This header file is in charge of creating the main window, and setting button clicks to pop the MyDialog window up, Remove the selected info,
			 or clear all of the data.
*/
#pragma once
#include "MyDialog.h"
#include "CDriver.h"

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
			nameArray = gcnew ArrayList();
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

		ArrayList^ nameArray;
	private: System::Windows::Forms::Button^  bnAdd;
	private: System::Windows::Forms::Button^  bnEdit;
	private: System::Windows::Forms::Button^  bnRemove;
	private: System::Windows::Forms::Button^  bnClear;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListBox^  svryInfo;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: property int ID_COUNTER;



	private: System::Windows::Forms::Label^  label6;

	



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bnAdd = (gcnew System::Windows::Forms::Button());
			this->bnEdit = (gcnew System::Windows::Forms::Button());
			this->bnRemove = (gcnew System::Windows::Forms::Button());
			this->bnClear = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->svryInfo = (gcnew System::Windows::Forms::ListBox());
			//this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bnAdd
			// 
			this->bnAdd->AccessibleName = L"bnAdd";
			this->bnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bnAdd->Location = System::Drawing::Point(52, 565);
			this->bnAdd->Name = L"bnAdd";
			this->bnAdd->Size = System::Drawing::Size(114, 50);
			this->bnAdd->TabIndex = 0;
			this->bnAdd->Text = L"Add";
			this->bnAdd->Click += gcnew System::EventHandler(this, &Form1::bnAdd_Click);
			// 
			// bnEdit
			// 
			this->bnEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bnEdit->Location = System::Drawing::Point(253, 565);
			this->bnEdit->Name = L"bnEdit";
			this->bnEdit->Size = System::Drawing::Size(114, 50);
			this->bnEdit->TabIndex = 1;
			this->bnEdit->Text = L"Edit";
			this->bnEdit->UseVisualStyleBackColor = true;
			this->bnEdit->Click += gcnew System::EventHandler(this, &Form1::bnEdit_Click);
			// 
			// bnRemove
			// 
			this->bnRemove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bnRemove->Location = System::Drawing::Point(468, 565);
			this->bnRemove->Name = L"bnRemove";
			this->bnRemove->Size = System::Drawing::Size(114, 50);
			this->bnRemove->TabIndex = 2;
			this->bnRemove->Text = L"Remove";
			this->bnRemove->UseVisualStyleBackColor = true;
			this->bnRemove->Click += gcnew System::EventHandler(this, &Form1::bnRemove_Click);
			// 
			// bnClear
			// 
			this->bnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bnClear->Location = System::Drawing::Point(669, 565);
			this->bnClear->Name = L"bnClear";
			this->bnClear->Size = System::Drawing::Size(114, 50);
			this->bnClear->TabIndex = 3;
			this->bnClear->Text = L"Clear";
			this->bnClear->UseVisualStyleBackColor = true;
			this->bnClear->Click += gcnew System::EventHandler(this, &Form1::bnClear_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 15);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Customer No.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(160, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Customer Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(322, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Driving Years";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(465, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Jeep Owner";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(606, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 15);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Models";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(719, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 15);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Transmission";
			// 
			// svryInfo
			// 
			this->svryInfo->FormattingEnabled = true;
			this->svryInfo->Location = System::Drawing::Point(13, 92);
			this->svryInfo->Name = L"svryInfo";
			this->svryInfo->Size = System::Drawing::Size(813, 459);
			this->svryInfo->TabIndex = 11;
			// 
			// saveFileDialog1
			// 
			//this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::saveFileDialog1_FileOk);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(253, 624);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 50);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::saveFileDialog1_FileOk);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(468, 624);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 50);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Open";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::openFileDialog1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(867, 686);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->svryInfo);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bnClear);
			this->Controls->Add(this->bnRemove);
			this->Controls->Add(this->bnEdit);
			this->Controls->Add(this->bnAdd);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void bnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
				 CDriver^ s = gcnew CDriver("", "", "", "", "-----", "");
				 MyDialog^ myDialog = gcnew MyDialog(L"Add a Test Driver", "", "");
				 if(myDialog->ShowDialog()==System::Windows::Forms::DialogResult::OK){
					s->setCustomerName(myDialog->answer);
					s->setCustomerNo(myDialog->answer5);
					s->setDrivingYears(myDialog->answer2);
					s->setOwner(myDialog->answer3);
					s->setModels(myDialog->answer4);
					s->setTransMission(myDialog->answer6);
					String^ t = s->toString();
					svryInfo->Items->Add(t);
					nameArray->Add(t);
				 }
				 
				 
			 }
	private: System::Void bnRemove_Click(System::Object^  sender, System::EventArgs^  e){
				 int index=svryInfo->SelectedIndex;
				 if(index>=0){
					 nameArray->RemoveAt(index);
					 svryInfo->Items->RemoveAt(index);
				 }
			 }

	private: System::Void bnClear_Click(System::Object^ sender, System::EventArgs^ e) {
				 nameArray->Clear();
				 svryInfo->Items->Clear();
			 }
	
	private: System::Void bnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
				 int index=svryInfo->SelectedIndex;
				 //int H = CDriver::getCustomerNo;
				 if(index>=0){
					 CDriver^ s = gcnew CDriver();
					 MyDialog^ myDialog = gcnew MyDialog(L"Edit Driver Information", (String^)nameArray[index], (String^)nameArray[index]);
					 if(myDialog->ShowDialog()==System::Windows::Forms::DialogResult::OK){
						 svryInfo->Items[1]=s->getCustomerName();
						 svryInfo->Items[2]=s->getDrivingYears();
						 svryInfo->Items[3]=s->getOwner();
						 svryInfo->Items[4]=s->getModels();
						 svryInfo->Items[5]=s->getTransMission();
						 nameArray[1]=s->getCustomerName();
						 nameArray[2]=s->getDrivingYears();
						 nameArray[3]=s->getOwner();
						 nameArray[4]=s->getModels();
						 nameArray[5]=s->getTransMission();
					 }
				 }
			 }
	private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::EventArgs^  e) {
			 
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
      
		saveFileDialog1->Title = L"Save Your File";
		saveFileDialog1->ShowDialog();


			 }

	private: System::Void openFileDialog1(System::Object^ sender, System::EventArgs^ e) {
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

				 openFileDialog1->Title = L"Open your file.";
				 openFileDialog1->ShowDialog();
			 }
			 };
}
