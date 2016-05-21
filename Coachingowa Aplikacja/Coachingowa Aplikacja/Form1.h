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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  Etykieta_tekst;
	private: System::Windows::Forms::Label^  Etykieta_checkbox;
	private: Form^ tytul;
	private:		 Timer^ timer1;
	private: System::Windows::Forms::Label^  label_div_question;
	private: System::Windows::Forms::ListBox^  listBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Etykieta_tekst = (gcnew System::Windows::Forms::Label());
			this->Etykieta_checkbox = (gcnew System::Windows::Forms::Label());
			this->label_div_question = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(588, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Otwórz okno";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Etykieta_tekst
			// 
			this->Etykieta_tekst->AutoSize = true;
			this->Etykieta_tekst->Location = System::Drawing::Point(588, 95);
			this->Etykieta_tekst->Name = L"Etykieta_tekst";
			this->Etykieta_tekst->Size = System::Drawing::Size(140, 13);
			this->Etykieta_tekst->TabIndex = 1;
			this->Etykieta_tekst->Text = L"Tu mo¿e byæ cokolwiek heh";
			// 
			// Etykieta_checkbox
			// 
			this->Etykieta_checkbox->AutoSize = true;
			this->Etykieta_checkbox->Location = System::Drawing::Point(591, 186);
			this->Etykieta_checkbox->Name = L"Etykieta_checkbox";
			this->Etykieta_checkbox->Size = System::Drawing::Size(43, 13);
			this->Etykieta_checkbox->TabIndex = 2;
			this->Etykieta_checkbox->Text = L"Tekst 2";
			// 
			// label_div_question
			// 
			this->label_div_question->AutoSize = true;
			this->label_div_question->Location = System::Drawing::Point(12, 37);
			this->label_div_question->Name = L"label_div_question";
			this->label_div_question->Size = System::Drawing::Size(116, 13);
			this->label_div_question->TabIndex = 3;
			this->label_div_question->Text = L"W której dywizji jesteœ\?";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(15, 54);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(821, 483);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label_div_question);
			this->Controls->Add(this->Etykieta_checkbox);
			this->Controls->Add(this->Etykieta_tekst);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form^ okno = gcnew Form();
				 okno->Text = "wow wow";
				 okno->Width = 500;
				 Rectangle ekran = System::Windows::Forms::Screen::GetBounds(okno);
				 okno->Top = (ekran.Height / 2) - (okno->Height / 2);

				 TextBox^ Pole_okienka = gcnew TextBox();
				 Pole_okienka->Location = Point(100, 100);
				 Pole_okienka->Width = 200;
				 okno->Controls->Add(Pole_okienka);

				 CheckBox^ Do_okienka = gcnew CheckBox();
				 Do_okienka->Location = Point(100, 150);
				 Do_okienka->Text = "wow wow jesteœ wow?";
				 Do_okienka->Width = 200;
				 okno->Controls->Add(Do_okienka);

				 Button^ Przycisk_okienkowy = gcnew Button();
				 Przycisk_okienkowy->Location = Point(200, 200);
				 Przycisk_okienkowy->Text = "jestem wspania³ym przyciskiem";
				 Przycisk_okienkowy->Width = 200;
				 okno->Controls->Add(Przycisk_okienkowy);
				 Przycisk_okienkowy->DialogResult = System::Windows::Forms::DialogResult::OK;
				 okno->ShowDialog();
				 //te 2 polecenia dzia³aja tylko z poziomu okna dialogowego
				 Etykieta_tekst->Text = Pole_okienka->Text;
				 Etykieta_checkbox->Text = Do_okienka->Checked.ToString();
				 //okno->ShowDialog();   // trzeba wykonaæ akcjê ¿eby wróciæ do okna g³ównego 
	}
			 System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e){
				 tytul = gcnew Form;
				 tytul->Height = 100;
				 Label^ napis = gcnew Label;
				 napis->Text = "Super program wow";
				 tytul->Controls->Add(napis);
				 tytul->TopMost = true;
				 tytul->Show();
				 timer1 = gcnew Timer;
				 //timer1->Tick(100);
				 timer1->Start();
			 }
			 /*
			 System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e){
				 timer1->Stop();
				 tytul->Close();

			 }*/
	};
}