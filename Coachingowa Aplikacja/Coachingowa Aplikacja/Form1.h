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
	private: System::Windows::Forms::Label^  EtykietaPoleKoncowe;

	private: System::Windows::Forms::Label^  Etykieta_checkbox;
	private: Form^ tytul;
	private:		 Timer^ timer1;
	private: System::Windows::Forms::Label^  label_div_question;
	private: System::Windows::Forms::GroupBox^  groupDywizja;
	private: System::Windows::Forms::RadioButton^  radioSilver;
	private: System::Windows::Forms::RadioButton^  radioGold;
	private: System::Windows::Forms::RadioButton^  radioPlat;
	private: System::Windows::Forms::GroupBox^  groupOcena;
	private: System::Windows::Forms::RadioButton^  radioDecent;
	private: System::Windows::Forms::RadioButton^  radioFeed;
	private: System::Windows::Forms::RadioButton^  radioCarry;
	private: System::Windows::Forms::Label^  labelOcena;

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
			this->EtykietaPoleKoncowe = (gcnew System::Windows::Forms::Label());
			this->Etykieta_checkbox = (gcnew System::Windows::Forms::Label());
			this->label_div_question = (gcnew System::Windows::Forms::Label());
			this->groupDywizja = (gcnew System::Windows::Forms::GroupBox());
			this->radioSilver = (gcnew System::Windows::Forms::RadioButton());
			this->radioGold = (gcnew System::Windows::Forms::RadioButton());
			this->radioPlat = (gcnew System::Windows::Forms::RadioButton());
			this->groupOcena = (gcnew System::Windows::Forms::GroupBox());
			this->radioDecent = (gcnew System::Windows::Forms::RadioButton());
			this->radioFeed = (gcnew System::Windows::Forms::RadioButton());
			this->radioCarry = (gcnew System::Windows::Forms::RadioButton());
			this->labelOcena = (gcnew System::Windows::Forms::Label());
			this->groupDywizja->SuspendLayout();
			this->groupOcena->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Otwórz okno";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// EtykietaPoleKoncowe
			// 
			this->EtykietaPoleKoncowe->AutoSize = true;
			this->EtykietaPoleKoncowe->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->EtykietaPoleKoncowe->Location = System::Drawing::Point(294, 307);
			this->EtykietaPoleKoncowe->MinimumSize = System::Drawing::Size(300, 70);
			this->EtykietaPoleKoncowe->Name = L"EtykietaPoleKoncowe";
			this->EtykietaPoleKoncowe->Size = System::Drawing::Size(300, 70);
			this->EtykietaPoleKoncowe->TabIndex = 1;
			// 
			// Etykieta_checkbox
			// 
			this->Etykieta_checkbox->AutoSize = true;
			this->Etykieta_checkbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Etykieta_checkbox->Location = System::Drawing::Point(294, 66);
			this->Etykieta_checkbox->MinimumSize = System::Drawing::Size(300, 200);
			this->Etykieta_checkbox->Name = L"Etykieta_checkbox";
			this->Etykieta_checkbox->Size = System::Drawing::Size(300, 200);
			this->Etykieta_checkbox->TabIndex = 2;
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
			// groupDywizja
			// 
			this->groupDywizja->Controls->Add(this->radioSilver);
			this->groupDywizja->Controls->Add(this->radioGold);
			this->groupDywizja->Controls->Add(this->radioPlat);
			this->groupDywizja->Location = System::Drawing::Point(22, 66);
			this->groupDywizja->Name = L"groupDywizja";
			this->groupDywizja->Size = System::Drawing::Size(125, 103);
			this->groupDywizja->TabIndex = 4;
			this->groupDywizja->TabStop = false;
			this->groupDywizja->Text = L"Dywizja";
			// 
			// radioSilver
			// 
			this->radioSilver->AutoSize = true;
			this->radioSilver->Location = System::Drawing::Point(7, 68);
			this->radioSilver->Name = L"radioSilver";
			this->radioSilver->Size = System::Drawing::Size(56, 17);
			this->radioSilver->TabIndex = 2;
			this->radioSilver->TabStop = true;
			this->radioSilver->Text = L"Srebro";
			this->radioSilver->UseVisualStyleBackColor = true;
			// 
			// radioGold
			// 
			this->radioGold->AutoSize = true;
			this->radioGold->Location = System::Drawing::Point(7, 44);
			this->radioGold->Name = L"radioGold";
			this->radioGold->Size = System::Drawing::Size(47, 17);
			this->radioGold->TabIndex = 1;
			this->radioGold->TabStop = true;
			this->radioGold->Text = L"Gold";
			this->radioGold->UseVisualStyleBackColor = true;
			// 
			// radioPlat
			// 
			this->radioPlat->AutoSize = true;
			this->radioPlat->Location = System::Drawing::Point(7, 20);
			this->radioPlat->Name = L"radioPlat";
			this->radioPlat->Size = System::Drawing::Size(60, 17);
			this->radioPlat->TabIndex = 0;
			this->radioPlat->TabStop = true;
			this->radioPlat->Text = L"Platyna";
			this->radioPlat->UseVisualStyleBackColor = true;
			// 
			// groupOcena
			// 
			this->groupOcena->Controls->Add(this->radioDecent);
			this->groupOcena->Controls->Add(this->radioFeed);
			this->groupOcena->Controls->Add(this->radioCarry);
			this->groupOcena->Location = System::Drawing::Point(22, 216);
			this->groupOcena->Name = L"groupOcena";
			this->groupOcena->Size = System::Drawing::Size(125, 95);
			this->groupOcena->TabIndex = 5;
			this->groupOcena->TabStop = false;
			this->groupOcena->Text = L"Ocena";
			// 
			// radioDecent
			// 
			this->radioDecent->AutoSize = true;
			this->radioDecent->Location = System::Drawing::Point(7, 44);
			this->radioDecent->Name = L"radioDecent";
			this->radioDecent->Size = System::Drawing::Size(110, 17);
			this->radioDecent->TabIndex = 2;
			this->radioDecent->TabStop = true;
			this->radioDecent->Text = L"Posz³o mi znoœnie";
			this->radioDecent->UseVisualStyleBackColor = true;
			// 
			// radioFeed
			// 
			this->radioFeed->AutoSize = true;
			this->radioFeed->Location = System::Drawing::Point(7, 67);
			this->radioFeed->Name = L"radioFeed";
			this->radioFeed->Size = System::Drawing::Size(87, 17);
			this->radioFeed->TabIndex = 1;
			this->radioFeed->TabStop = true;
			this->radioFeed->Text = L"Feedowa³em";
			this->radioFeed->UseVisualStyleBackColor = true;
			// 
			// radioCarry
			// 
			this->radioCarry->AutoSize = true;
			this->radioCarry->Location = System::Drawing::Point(7, 20);
			this->radioCarry->Name = L"radioCarry";
			this->radioCarry->Size = System::Drawing::Size(82, 17);
			this->radioCarry->TabIndex = 0;
			this->radioCarry->TabStop = true;
			this->radioCarry->Text = L"Carrowa³em";
			this->radioCarry->UseVisualStyleBackColor = true;
			// 
			// labelOcena
			// 
			this->labelOcena->AutoSize = true;
			this->labelOcena->Location = System::Drawing::Point(22, 185);
			this->labelOcena->Name = L"labelOcena";
			this->labelOcena->Size = System::Drawing::Size(121, 13);
			this->labelOcena->TabIndex = 6;
			this->labelOcena->Text = L"Jak oceniasz ten mecz\?";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 400);
			this->Controls->Add(this->labelOcena);
			this->Controls->Add(this->groupOcena);
			this->Controls->Add(this->groupDywizja);
			this->Controls->Add(this->label_div_question);
			this->Controls->Add(this->Etykieta_checkbox);
			this->Controls->Add(this->EtykietaPoleKoncowe);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupDywizja->ResumeLayout(false);
			this->groupDywizja->PerformLayout();
			this->groupOcena->ResumeLayout(false);
			this->groupOcena->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form^ okno = gcnew Form();
				 okno->Text = "Formularz";
				 okno->Width = 500;
				 Rectangle ekran = System::Windows::Forms::Screen::GetBounds(okno);
				 okno->Top = (ekran.Height / 2) - (okno->Height / 2);
				 //cs
				 Label^ Etykieta_cs = gcnew Label();
				 Etykieta_cs->Location = Point(10, 10);
				 Etykieta_cs->Width = 200;
				 Etykieta_cs->Text = "Ilosæ zabitych minionków";
				 okno->Controls->Add(Etykieta_cs);

				 TextBox^ Pole_cs = gcnew TextBox();
				 Pole_cs->Location = Point(10, 30);
				 Pole_cs->Width = 200;
				 okno->Controls->Add(Pole_cs);
				 
				 //Statystyki
				 Label^ Etykieta_staty = gcnew Label();
				 Etykieta_staty->Location = Point(10, 50);
				 Etykieta_staty->Width = 200;
				 Etykieta_staty->Text = "Statystyki podczas rozgrywki";
				 okno->Controls->Add(Etykieta_staty);

				 MaskedTextBox^ Pole_staty = gcnew MaskedTextBox();
				 Pole_staty->Location = Point(10, 70);
				 Pole_staty->Width = 200;
				 Pole_staty->Mask = "00/00/00";
				 okno->Controls->Add(Pole_staty);



				 CheckBox^ Do_okienka = gcnew CheckBox();
				 Do_okienka->Location = Point(10, 90);
				 Do_okienka->Text = "Dosta³eœ Pierwsz¹ krew?";
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
				 //Etykieta_tekst->Text = Pole_okienka->Text;
				 //Etykieta_checkbox->Text = Do_okienka->Checked.ToString();
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