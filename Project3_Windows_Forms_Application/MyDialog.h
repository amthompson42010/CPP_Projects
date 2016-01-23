/*
Alexander Mark Thompson
CS 351-001
Description: This header file is in charge of creating the popup window when 'Add' or 'Edit' is clicked on the main page.
			 This file includes all the checkboxes, radiobuttons, and the text boxes for the data.
*/
#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyDialog
	/// </summary>
	public ref class MyDialog : public System::Windows::Forms::Form
	{
	public:
		MyDialog(String^ title, String^ initStr, String^ initStr2)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Text=title;
			this->myTextBox->Text = initStr;
			this->myTextBox2->Text = initStr2;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  bnSubmit;
	private: System::Windows::Forms::Button^  bnCancel;
	private: System::Windows::Forms::TextBox^  myTextBox;
	private: System::Windows::Forms::TextBox^  myTextBox2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::Label^  label7;


	public: property String^ answer;
	public: property String^ answer2;
	public: property String^ answer3;
	public: property String^ answer4;
	public: property int temp; 
	public: property String^ answer5;
	public: property String^ answer6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bnSubmit = (gcnew System::Windows::Forms::Button());
			this->bnCancel = (gcnew System::Windows::Forms::Button());
			this->myTextBox = (gcnew System::Windows::Forms::TextBox());
			this->myTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Customer No.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Customer Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(287, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"How many years have you been driving\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Do you have a Jeep\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 285);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(258, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Which Models are you interested in\?";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(30, 401);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Transmission:";
			// 
			// bnSubmit
			// 
			this->bnSubmit->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->bnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bnSubmit->Location = System::Drawing::Point(130, 581);
			this->bnSubmit->Name = L"bnSubmit";
			this->bnSubmit->Size = System::Drawing::Size(123, 57);
			this->bnSubmit->TabIndex = 6;
			this->bnSubmit->Text = L"Submit";
			this->bnSubmit->UseVisualStyleBackColor = true;
			this->bnSubmit->Click += gcnew System::EventHandler(this, &MyDialog::bnSubmit_Click);
			// 
			// bnCancel
			// 
			this->bnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->bnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bnCancel->Location = System::Drawing::Point(407, 581);
			this->bnCancel->Name = L"bnCancel";
			this->bnCancel->Size = System::Drawing::Size(123, 57);
			this->bnCancel->TabIndex = 7;
			this->bnCancel->Text = L"Cancel";
			this->bnCancel->UseVisualStyleBackColor = true;
			this->bnCancel->Click += gcnew System::EventHandler(this, &MyDialog::bnCancel_Click);
			// 
			// myTextBox
			// 
			this->myTextBox->Location = System::Drawing::Point(154, 65);
			this->myTextBox->Name = L"myTextBox";
			this->myTextBox->Size = System::Drawing::Size(427, 20);
			this->myTextBox->TabIndex = 1;
			// 
			// myTextBox2
			// 
			this->myTextBox2->Location = System::Drawing::Point(338, 126);
			this->myTextBox2->Name = L"myTextBox2";
			this->myTextBox2->Size = System::Drawing::Size(100, 20);
			this->myTextBox2->TabIndex = 8;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(63, 229);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(43, 17);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Yes";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyDialog::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(154, 229);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(39, 17);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"No";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyDialog::radioButton2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(51, 339);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(69, 17);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Compass";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(154, 339);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(104, 17);
			this->checkBox2->TabIndex = 12;
			this->checkBox2->Text = L"Grand Cherokee";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(291, 339);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(56, 17);
			this->checkBox3->TabIndex = 13;
			this->checkBox3->Text = L"Patriot";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(383, 339);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(76, 17);
			this->checkBox4->TabIndex = 14;
			this->checkBox4->Text = L"Renegade";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(488, 339);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(57, 17);
			this->checkBox5->TabIndex = 15;
			this->checkBox5->Text = L"Others";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(51, 455);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(103, 17);
			this->radioButton3->TabIndex = 16;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"5-Speed Manual";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(175, 455);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(103, 17);
			this->radioButton4->TabIndex = 17;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"6-Speed Manual";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(307, 455);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(175, 17);
			this->radioButton5->TabIndex = 18;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"8-Speed Paddle-Shift Automatic";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(506, 455);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(75, 17);
			this->radioButton6->TabIndex = 19;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Don\'t Care";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(154, 27);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 14);
			this->label7->TabIndex = 20;
			this->label7->Text = L"00000";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 684);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->myTextBox2);
			this->Controls->Add(this->myTextBox);
			this->Controls->Add(this->bnCancel);
			this->Controls->Add(this->bnSubmit);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyDialog";
			this->Text = L"MyDialog";
			this->Load += gcnew System::EventHandler(this, &MyDialog::MyDialog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bnCancel_Click(System::Object^ sender, System::EventArgs^ e){
			 }

	private: System::Void bnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
				 answer=myTextBox->Text;
				 answer2=myTextBox2->Text;
				 temp = System::Int32::Parse(label7->Text);
				 temp++;
				 label7->Text = temp.ToString();
				 answer5 = label7->Text;
				 answer4 = "";
				 if(checkBox1->Checked == true)
				 {
					 answer4 += "C";
				 }else{
					 answer4 += "-";
				 }
				 if(checkBox2->Checked == true)
				 {
					 answer4="G";
				 }else{
					 answer4 += "-";
				 }

				 if(checkBox3->Checked == true)
				 {
					 answer4 += "P";
				 }else{
					 answer4 += "-";
				 }

				 if(checkBox4->Checked == true)
				 {
					 answer4 += "R";
				 }else{
					 answer4 += "-";
				 }

				 if(checkBox4->Checked == true)
				 {
					 answer4 += "O";
				 }else{
					 answer4 += "-";
				 }

				 answer6 = "";
				 if(radioButton3->Checked == true){
					 answer6 += "5-Manual";
				 }

				 if(radioButton4->Checked == true){
					 answer6 += "6-Manual";
				 }

				 if(radioButton5->Checked == true){
					 answer6 += "8-Auto";
				 }

				 if(radioButton6->Checked == true){
					 answer6 += "Don't Care";
				 }
			 }

private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 answer3="Yes";
		 }

private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 answer3="No";
		 }

private: System::Void MyDialog_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
