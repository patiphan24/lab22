#pragma once

#include <windows.h>




namespace Mycalculator {



	using namespace System;

	using namespace System::ComponentModel;

	using namespace System::Collections;

	using namespace System::Windows::Forms;

	using namespace System::Data;

	using namespace System::Drawing;



	/// <summary>

	/// Summary for MyForm

	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form

	{

	public:

		MyForm(void)

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

		~MyForm()

		{

			if (components)

			{

				delete components;

			}

		}

	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ btnplus;

	private: System::Windows::Forms::Button^ btndelete;

	private: System::Windows::Forms::Button^ btnmultiply;

	private: System::Windows::Forms::Button^ btndivide;

	private: System::Windows::Forms::TextBox^ textBox1;

	protected:



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

			this->textBox2 = (gcnew System::Windows::Forms::TextBox());

			this->btnplus = (gcnew System::Windows::Forms::Button());

			this->btndelete = (gcnew System::Windows::Forms::Button());

			this->btnmultiply = (gcnew System::Windows::Forms::Button());

			this->btndivide = (gcnew System::Windows::Forms::Button());

			this->textBox1 = (gcnew System::Windows::Forms::TextBox());

			this->SuspendLayout();

			// 

			// label1

			// 

			this->label1->AutoSize = true;

			this->label1->BackColor = System::Drawing::Color::White;

			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,

				static_cast<System::Byte>(0)));

			this->label1->Location = System::Drawing::Point(38, 21);

			this->label1->Name = L"label1";

			this->label1->Size = System::Drawing::Size(159, 16);

			this->label1->TabIndex = 0;

			this->label1->Text = L"Please input two numbers";

			// 

			// textBox2

			// 

			this->textBox2->Location = System::Drawing::Point(60, 81);

			this->textBox2->Multiline = true;

			this->textBox2->Name = L"textBox2";

			this->textBox2->Size = System::Drawing::Size(111, 25);

			this->textBox2->TabIndex = 1;

			// 

			// btnplus

			// 

			this->btnplus->Location = System::Drawing::Point(47, 119);

			this->btnplus->Name = L"btnplus";

			this->btnplus->Size = System::Drawing::Size(30, 30);

			this->btnplus->TabIndex = 2;

			this->btnplus->Text = L"+";

			this->btnplus->UseVisualStyleBackColor = true;

			this->btnplus->Click += gcnew System::EventHandler(this, &MyForm::btnplus_Click);

			// 

			// btndelete

			// 

			this->btndelete->Location = System::Drawing::Point(83, 119);

			this->btndelete->Name = L"btndelete";

			this->btndelete->Size = System::Drawing::Size(30, 30);

			this->btndelete->TabIndex = 2;

			this->btndelete->Text = L"-";

			this->btndelete->UseVisualStyleBackColor = true;

			this->btndelete->Click += gcnew System::EventHandler(this, &MyForm::btndelete_Click);

			// 

			// btnmultiply

			// 

			this->btnmultiply->Location = System::Drawing::Point(119, 119);

			this->btnmultiply->Name = L"btnmultiply";

			this->btnmultiply->Size = System::Drawing::Size(30, 30);

			this->btnmultiply->TabIndex = 2;

			this->btnmultiply->Text = L"*";

			this->btnmultiply->UseVisualStyleBackColor = true;

			this->btnmultiply->Click += gcnew System::EventHandler(this, &MyForm::btnmultiply_Click);

			// 

			// btndivide

			// 

			this->btndivide->Location = System::Drawing::Point(155, 119);

			this->btndivide->Name = L"btndivide";

			this->btndivide->Size = System::Drawing::Size(30, 30);

			this->btndivide->TabIndex = 2;

			this->btndivide->Text = L"/";

			this->btndivide->UseVisualStyleBackColor = true;

			this->btndivide->Click += gcnew System::EventHandler(this, &MyForm::btndivide_Click);

			// 

			// textBox1

			// 

			this->textBox1->Location = System::Drawing::Point(60, 50);

			this->textBox1->Multiline = true;

			this->textBox1->Name = L"textBox1";

			this->textBox1->Size = System::Drawing::Size(111, 25);

			this->textBox1->TabIndex = 1;

			// 

			// MyForm

			// 

			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);

			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;

			this->BackColor = System::Drawing::Color::Red;

			this->ClientSize = System::Drawing::Size(234, 161);

			this->Controls->Add(this->btndivide);

			this->Controls->Add(this->btnmultiply);

			this->Controls->Add(this->btndelete);

			this->Controls->Add(this->btnplus);

			this->Controls->Add(this->textBox1);

			this->Controls->Add(this->textBox2);

			this->Controls->Add(this->label1);

			this->MaximizeBox = false;

			this->MinimizeBox = false;

			this->Name = L"MyForm";

			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;

			this->Text = L"My Calculator";

			this->ResumeLayout(false);

			this->PerformLayout();



		}

#pragma endregion


private: System::Void btnplus_Click(System::Object^ sender, System::EventArgs^ e) {

	double num1 = Double::Parse(textBox1->Text);

	double num2 = Double::Parse(textBox2->Text);

	//บวก

	double result = num1 + num2;



	MessageBox::Show(L"" + result, L"Result");

}

private: System::Void btndelete_Click(System::Object^ sender, System::EventArgs^ e) {

	double num1 = Double::Parse(textBox1->Text);

	double num2 = Double::Parse(textBox2->Text);

	//ลบ

	double result = num1 - num2;



	MessageBox::Show(L"" + result, L"Result");

}

private: System::Void btnmultiply_Click(System::Object^ sender, System::EventArgs^ e) {

	double num1 = Double::Parse(textBox1->Text);

	double num2 = Double::Parse(textBox2->Text);

	//คูณ

	double result = num1 * num2;



	MessageBox::Show(L"" + result, L"Result");

}

private: System::Void btndivide_Click(System::Object^ sender, System::EventArgs^ e) {

	double num1 = Double::Parse(textBox1->Text);

	double num2 = Double::Parse(textBox2->Text);

	//หาร

	double result = num1 / num2;



	MessageBox::Show(L"" + result, L"Result");

}

};

}

