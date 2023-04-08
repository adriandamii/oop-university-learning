#pragma once
#include <iostream>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private: System::Windows::Forms::Button^ digit1;
	protected:
	private: System::Windows::Forms::Button^ digit2;
	private: System::Windows::Forms::Button^ digit3;
	private: System::Windows::Forms::Button^ digit4;
	private: System::Windows::Forms::Button^ digit5;
	private: System::Windows::Forms::Button^ digit6;
	private: System::Windows::Forms::Button^ digit7;
	private: System::Windows::Forms::Button^ digit8;
	private: System::Windows::Forms::Button^ digit9;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ clearButton;

	private: System::Windows::Forms::Button^ digit0;
	private: System::Windows::Forms::Button^ dot;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ divide;

	private: System::Windows::Forms::RichTextBox^ textbox;




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
			this->digit1 = (gcnew System::Windows::Forms::Button());
			this->digit2 = (gcnew System::Windows::Forms::Button());
			this->digit3 = (gcnew System::Windows::Forms::Button());
			this->digit4 = (gcnew System::Windows::Forms::Button());
			this->digit5 = (gcnew System::Windows::Forms::Button());
			this->digit6 = (gcnew System::Windows::Forms::Button());
			this->digit7 = (gcnew System::Windows::Forms::Button());
			this->digit8 = (gcnew System::Windows::Forms::Button());
			this->digit9 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->digit0 = (gcnew System::Windows::Forms::Button());
			this->dot = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->textbox = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// digit1
			// 
			this->digit1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit1->Location = System::Drawing::Point(28, 105);
			this->digit1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit1->Name = L"digit1";
			this->digit1->Size = System::Drawing::Size(92, 60);
			this->digit1->TabIndex = 0;
			this->digit1->Text = L"1";
			this->digit1->UseVisualStyleBackColor = false;
			this->digit1->Click += gcnew System::EventHandler(this, &Form1::digit1_Click);
			// 
			// digit2
			// 
			this->digit2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit2->Location = System::Drawing::Point(152, 105);
			this->digit2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit2->Name = L"digit2";
			this->digit2->Size = System::Drawing::Size(91, 60);
			this->digit2->TabIndex = 1;
			this->digit2->Text = L"2";
			this->digit2->UseVisualStyleBackColor = false;
			this->digit2->Click += gcnew System::EventHandler(this, &Form1::digit2_Click);
			// 
			// digit3
			// 
			this->digit3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit3->Location = System::Drawing::Point(285, 105);
			this->digit3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit3->Name = L"digit3";
			this->digit3->Size = System::Drawing::Size(91, 60);
			this->digit3->TabIndex = 2;
			this->digit3->Text = L"3";
			this->digit3->UseVisualStyleBackColor = false;
			this->digit3->Click += gcnew System::EventHandler(this, &Form1::digit3_Click);
			// 
			// digit4
			// 
			this->digit4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit4->Location = System::Drawing::Point(28, 185);
			this->digit4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit4->Name = L"digit4";
			this->digit4->Size = System::Drawing::Size(92, 62);
			this->digit4->TabIndex = 3;
			this->digit4->Text = L"4";
			this->digit4->UseVisualStyleBackColor = false;
			this->digit4->Click += gcnew System::EventHandler(this, &Form1::digit4_Click);
			// 
			// digit5
			// 
			this->digit5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->digit5->Location = System::Drawing::Point(152, 185);
			this->digit5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit5->Name = L"digit5";
			this->digit5->Size = System::Drawing::Size(91, 62);
			this->digit5->TabIndex = 4;
			this->digit5->Text = L"5";
			this->digit5->UseVisualStyleBackColor = false;
			this->digit5->Click += gcnew System::EventHandler(this, &Form1::digit5_Click);
			// 
			// digit6
			// 
			this->digit6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit6->Location = System::Drawing::Point(285, 185);
			this->digit6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit6->Name = L"digit6";
			this->digit6->Size = System::Drawing::Size(91, 62);
			this->digit6->TabIndex = 5;
			this->digit6->Text = L"6";
			this->digit6->UseVisualStyleBackColor = false;
			this->digit6->Click += gcnew System::EventHandler(this, &Form1::digit6_Click);
			// 
			// digit7
			// 
			this->digit7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit7->Location = System::Drawing::Point(28, 274);
			this->digit7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit7->Name = L"digit7";
			this->digit7->Size = System::Drawing::Size(92, 65);
			this->digit7->TabIndex = 6;
			this->digit7->Text = L"7";
			this->digit7->UseVisualStyleBackColor = false;
			this->digit7->Click += gcnew System::EventHandler(this, &Form1::digit7_Click);
			// 
			// digit8
			// 
			this->digit8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit8->Location = System::Drawing::Point(152, 274);
			this->digit8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit8->Name = L"digit8";
			this->digit8->Size = System::Drawing::Size(91, 65);
			this->digit8->TabIndex = 7;
			this->digit8->Text = L"8";
			this->digit8->UseVisualStyleBackColor = false;
			this->digit8->Click += gcnew System::EventHandler(this, &Form1::digit8_Click);
			// 
			// digit9
			// 
			this->digit9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit9->Location = System::Drawing::Point(285, 274);
			this->digit9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit9->Name = L"digit9";
			this->digit9->Size = System::Drawing::Size(91, 65);
			this->digit9->TabIndex = 8;
			this->digit9->Text = L"9";
			this->digit9->UseVisualStyleBackColor = false;
			this->digit9->Click += gcnew System::EventHandler(this, &Form1::digit9_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->plus->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plus->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->plus->Location = System::Drawing::Point(409, 105);
			this->plus->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(95, 60);
			this->plus->TabIndex = 9;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->minus->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minus->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->minus->Location = System::Drawing::Point(409, 185);
			this->minus->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(95, 62);
			this->minus->TabIndex = 10;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->multiply->Location = System::Drawing::Point(409, 274);
			this->multiply->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(95, 65);
			this->multiply->TabIndex = 11;
			this->multiply->Text = L"x";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &Form1::multiply_Click);
			// 
			// clearButton
			// 
			this->clearButton->BackColor = System::Drawing::Color::Salmon;
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->clearButton->Location = System::Drawing::Point(28, 451);
			this->clearButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(476, 60);
			this->clearButton->TabIndex = 12;
			this->clearButton->Text = L"Clear";
			this->clearButton->UseVisualStyleBackColor = false;
			this->clearButton->Click += gcnew System::EventHandler(this, &Form1::clearButton_Click);
			// 
			// digit0
			// 
			this->digit0->BackColor = System::Drawing::SystemColors::ControlDark;
			this->digit0->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit0->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->digit0->Location = System::Drawing::Point(28, 361);
			this->digit0->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->digit0->Name = L"digit0";
			this->digit0->Size = System::Drawing::Size(92, 62);
			this->digit0->TabIndex = 14;
			this->digit0->Text = L"0";
			this->digit0->UseVisualStyleBackColor = false;
			this->digit0->Click += gcnew System::EventHandler(this, &Form1::digit0_Click);
			// 
			// dot
			// 
			this->dot->BackColor = System::Drawing::SystemColors::ControlDark;
			this->dot->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dot->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dot->Location = System::Drawing::Point(152, 361);
			this->dot->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dot->Name = L"dot";
			this->dot->Size = System::Drawing::Size(92, 62);
			this->dot->TabIndex = 15;
			this->dot->Text = L".";
			this->dot->UseVisualStyleBackColor = false;
			this->dot->Click += gcnew System::EventHandler(this, &Form1::dot_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->equal->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->equal->Location = System::Drawing::Point(285, 361);
			this->equal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(91, 62);
			this->equal->TabIndex = 16;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &Form1::equal_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->divide->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->divide->Location = System::Drawing::Point(409, 359);
			this->divide->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(95, 65);
			this->divide->TabIndex = 17;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &Form1::divide_Click);
			// 
			// textbox
			// 
			this->textbox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22, System::Drawing::FontStyle::Bold));
			this->textbox->Location = System::Drawing::Point(28, 16);
			this->textbox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textbox->Name = L"textbox";
			this->textbox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textbox->Size = System::Drawing::Size(475, 65);
			this->textbox->TabIndex = 19;
			this->textbox->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(532, 590);
			this->Controls->Add(this->textbox);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->dot);
			this->Controls->Add(this->digit0);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->digit9);
			this->Controls->Add(this->digit8);
			this->Controls->Add(this->digit7);
			this->Controls->Add(this->digit6);
			this->Controls->Add(this->digit5);
			this->Controls->Add(this->digit4);
			this->Controls->Add(this->digit3);
			this->Controls->Add(this->digit2);
			this->Controls->Add(this->digit1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
		private: double firstNum = 0;
		private: double secondNum = 0;
		private: String^ operation = "";
public: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox->Text != "") {
		secondNum = Double::Parse(textbox->Text);

		if (operation == "+") {
			textbox->Text = (firstNum + secondNum).ToString();
		}
		else if (operation == "-") {
			textbox->Text = (firstNum - secondNum).ToString();
		}
		else if (operation == "x") {
			textbox->Text = (firstNum * secondNum).ToString();
		}
		else if (operation == "/") {
			if (secondNum != 0) {
				textbox->Text = (firstNum / secondNum).ToString();
			}
			else {
				textbox->Text = "Error: Can not divide by zero";
			}
		}
	}
}
public: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox->Text != "") {
		firstNum = Double::Parse(textbox->Text);
		textbox->Text = "";
		operation = "+";
		textbox->Text = "";
	}
}
public: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox->Text != "") {
		firstNum = Double::Parse(textbox->Text);
		textbox->Text = "";
		operation = "-";
		textbox->Text = "";
	}
}
public: System::Void multiply_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox->Text != "") {
		firstNum = Double::Parse(textbox->Text);
		textbox->Text = "";
		operation = "x";
		textbox->Text = "";
	}
}
public: System::Void divide_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textbox->Text != "") {
		firstNum = Double::Parse(textbox->Text);
		textbox->Text = "";
		operation = "/";
		textbox->Text = "";
	}
}

public: System::Void digit1_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "1";
}
public: System::Void digit2_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "2";
}
public: System::Void digit3_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "3";
}
public: System::Void digit4_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "4";
}
public: System::Void digit5_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "5";
}
public: System::Void digit6_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "6";
}
public: System::Void digit7_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "7";
}
public: System::Void digit8_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "8";
}
public: System::Void digit9_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "9";
}
public: System::Void digit0_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += "0";
}
public: System::Void dot_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Text += ".";
}
public: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox->Clear();
}
};
}
