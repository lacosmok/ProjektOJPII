#pragma once

namespace WindowsFormApplication1 {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  InfoCS;
	private: System::Windows::Forms::Label^  InfoStaty;
	private: System::Windows::Forms::Label^  InfoGold;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->InfoCS = (gcnew System::Windows::Forms::Label());
			this->InfoStaty = (gcnew System::Windows::Forms::Label());
			this->InfoGold = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(545, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// InfoCS
			// 
			this->InfoCS->AutoSize = true;
			this->InfoCS->Location = System::Drawing::Point(415, 66);
			this->InfoCS->Name = L"InfoCS";
			this->InfoCS->Size = System::Drawing::Size(124, 13);
			this->InfoCS->TabIndex = 1;
			this->InfoCS->Text = L"Iloœæ zabitych minionków";
			// 
			// InfoStaty
			// 
			this->InfoStaty->AutoSize = true;
			this->InfoStaty->Location = System::Drawing::Point(415, 96);
			this->InfoStaty->Name = L"InfoStaty";
			this->InfoStaty->Size = System::Drawing::Size(99, 13);
			this->InfoStaty->TabIndex = 2;
			this->InfoStaty->Text = L"Statystyki rozgrywki";
			// 
			// InfoGold
			// 
			this->InfoGold->AutoSize = true;
			this->InfoGold->Location = System::Drawing::Point(418, 124);
			this->InfoGold->Name = L"InfoGold";
			this->InfoGold->Size = System::Drawing::Size(108, 13);
			this->InfoGold->TabIndex = 3;
			this->InfoGold->Text = L"Iloœæ zdobytego z³ota";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(545, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(545, 96);
			this->maskedTextBox1->Mask = L"00/00/00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(421, 211);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Ocena";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 447);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->InfoGold);
			this->Controls->Add(this->InfoStaty);
			this->Controls->Add(this->InfoCS);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

