#pragma once
#include<random>

namespace UI {

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
	private: System::Windows::Forms::Label^ GMlabel;
	private: System::Windows::Forms::Label^ numPlayersLabel;
	private: System::Windows::Forms::Label^ numSpotsLabel;
	protected:






	private: System::Windows::Forms::Label^ symbolLabel;
	private: System::Windows::Forms::ListBox^ gameSelect;
	private: System::Windows::Forms::ListBox^ symbolSelector;







	private: System::Windows::Forms::NumericUpDown^ numSpotsSelect;


	private: System::Windows::Forms::ComboBox^ numPlayersSelect;


	private: System::Windows::Forms::Button^ A4;
	private: System::Windows::Forms::Button^ B4;
	private: System::Windows::Forms::Button^ B3;
	private: System::Windows::Forms::Button^ B5;
	private: System::Windows::Forms::Button^ C5;
	private: System::Windows::Forms::Button^ D5;

	private: System::Windows::Forms::Button^ D4;
	private: System::Windows::Forms::Button^ E5;

	private: System::Windows::Forms::Button^ E4;

	private: System::Windows::Forms::Button^ C3;
	private: System::Windows::Forms::Button^ D3;
	private: System::Windows::Forms::Button^ E3;

	private: System::Windows::Forms::Button^ E2;
	private: System::Windows::Forms::Button^ D2;
	private: System::Windows::Forms::Button^ C2;
	private: System::Windows::Forms::Button^ B2;
	private: System::Windows::Forms::Button^ C4;
	private: System::Windows::Forms::Button^ A5;
	private: System::Windows::Forms::Button^ A3;
	private: System::Windows::Forms::Button^ A2;
	private: System::Windows::Forms::Button^ exitButton;
	private: System::Windows::Forms::Button^ restartButton;
	private: System::Windows::Forms::Button^ C1;


	private: System::Windows::Forms::Button^ B1;

	private: System::Windows::Forms::Button^ A1;
	private: System::Windows::Forms::Button^ D1;
	private: System::Windows::Forms::Button^ E1;






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
			this->GMlabel = (gcnew System::Windows::Forms::Label());
			this->numPlayersLabel = (gcnew System::Windows::Forms::Label());
			this->numSpotsLabel = (gcnew System::Windows::Forms::Label());
			this->symbolLabel = (gcnew System::Windows::Forms::Label());
			this->gameSelect = (gcnew System::Windows::Forms::ListBox());
			this->symbolSelector = (gcnew System::Windows::Forms::ListBox());
			this->numSpotsSelect = (gcnew System::Windows::Forms::NumericUpDown());
			this->numPlayersSelect = (gcnew System::Windows::Forms::ComboBox());
			this->A4 = (gcnew System::Windows::Forms::Button());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->B5 = (gcnew System::Windows::Forms::Button());
			this->C5 = (gcnew System::Windows::Forms::Button());
			this->D5 = (gcnew System::Windows::Forms::Button());
			this->D4 = (gcnew System::Windows::Forms::Button());
			this->E5 = (gcnew System::Windows::Forms::Button());
			this->E4 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->D3 = (gcnew System::Windows::Forms::Button());
			this->E3 = (gcnew System::Windows::Forms::Button());
			this->E2 = (gcnew System::Windows::Forms::Button());
			this->D2 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->C4 = (gcnew System::Windows::Forms::Button());
			this->A5 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->restartButton = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->D1 = (gcnew System::Windows::Forms::Button());
			this->E1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSpotsSelect))->BeginInit();
			this->SuspendLayout();
			// 
			// GMlabel
			// 
			this->GMlabel->AutoSize = true;
			this->GMlabel->Location = System::Drawing::Point(24, 22);
			this->GMlabel->Name = L"GMlabel";
			this->GMlabel->Size = System::Drawing::Size(97, 20);
			this->GMlabel->TabIndex = 2;
			this->GMlabel->Text = L"Game Mode";
			this->GMlabel->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// numPlayersLabel
			// 
			this->numPlayersLabel->AutoSize = true;
			this->numPlayersLabel->Location = System::Drawing::Point(432, 22);
			this->numPlayersLabel->Name = L"numPlayersLabel";
			this->numPlayersLabel->Size = System::Drawing::Size(138, 20);
			this->numPlayersLabel->TabIndex = 3;
			this->numPlayersLabel->Text = L"Number of Players";
			// 
			// numSpotsLabel
			// 
			this->numSpotsLabel->AutoSize = true;
			this->numSpotsLabel->Location = System::Drawing::Point(12, 92);
			this->numSpotsLabel->Name = L"numSpotsLabel";
			this->numSpotsLabel->Size = System::Drawing::Size(263, 20);
			this->numSpotsLabel->TabIndex = 5;
			this->numSpotsLabel->Text = L"Select number of squares from 3-10";
			this->numSpotsLabel->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// symbolLabel
			// 
			this->symbolLabel->AutoSize = true;
			this->symbolLabel->Location = System::Drawing::Point(12, 158);
			this->symbolLabel->Name = L"symbolLabel";
			this->symbolLabel->Size = System::Drawing::Size(103, 20);
			this->symbolLabel->TabIndex = 9;
			this->symbolLabel->Text = L"Select S or O";
			this->symbolLabel->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// gameSelect
			// 
			this->gameSelect->FormattingEnabled = true;
			this->gameSelect->ItemHeight = 20;
			this->gameSelect->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Simple", L"General" });
			this->gameSelect->Location = System::Drawing::Point(65, 45);
			this->gameSelect->Name = L"gameSelect";
			this->gameSelect->Size = System::Drawing::Size(99, 44);
			this->gameSelect->TabIndex = 42;
			this->gameSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::gameTypeSelector);
			// 
			// symbolSelector
			// 
			this->symbolSelector->FormattingEnabled = true;
			this->symbolSelector->ItemHeight = 20;
			this->symbolSelector->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"S", L"O" });
			this->symbolSelector->Location = System::Drawing::Point(37, 181);
			this->symbolSelector->Name = L"symbolSelector";
			this->symbolSelector->Size = System::Drawing::Size(56, 44);
			this->symbolSelector->TabIndex = 43;
			this->symbolSelector->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::symbolSelected);
			// 
			// numSpotsSelect
			// 
			this->numSpotsSelect->Location = System::Drawing::Point(287, 90);
			this->numSpotsSelect->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			this->numSpotsSelect->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numSpotsSelect->Name = L"numSpotsSelect";
			this->numSpotsSelect->Size = System::Drawing::Size(54, 26);
			this->numSpotsSelect->TabIndex = 44;
			this->numSpotsSelect->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// numPlayersSelect
			// 
			this->numPlayersSelect->FormattingEnabled = true;
			this->numPlayersSelect->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Single Player", L"Two Player", L"Computer Only" });
			this->numPlayersSelect->Location = System::Drawing::Point(477, 45);
			this->numPlayersSelect->Name = L"numPlayersSelect";
			this->numPlayersSelect->Size = System::Drawing::Size(121, 28);
			this->numPlayersSelect->TabIndex = 45;
			this->numPlayersSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::getNumPlayers);
			// 
			// A4
			// 
			this->A4->Enabled = false;
			this->A4->Location = System::Drawing::Point(342, 152);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(49, 44);
			this->A4->TabIndex = 37;
			this->A4->UseVisualStyleBackColor = true;
			this->A4->Click += gcnew System::EventHandler(this, &MyForm::button_ClickA4);
			// 
			// B4
			// 
			this->B4->Location = System::Drawing::Point(344, 202);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(49, 44);
			this->B4->TabIndex = 35;
			this->B4->UseVisualStyleBackColor = true;
			this->B4->Click += gcnew System::EventHandler(this, &MyForm::button_ClickB4);
			// 
			// B3
			// 
			this->B3->Location = System::Drawing::Point(287, 202);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(49, 44);
			this->B3->TabIndex = 48;
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::button_ClickB3);
			// 
			// B5
			// 
			this->B5->Location = System::Drawing::Point(397, 202);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(49, 44);
			this->B5->TabIndex = 49;
			this->B5->UseVisualStyleBackColor = true;
			this->B5->Click += gcnew System::EventHandler(this, &MyForm::button_ClickB5);
			// 
			// C5
			// 
			this->C5->Location = System::Drawing::Point(397, 252);
			this->C5->Name = L"C5";
			this->C5->Size = System::Drawing::Size(49, 44);
			this->C5->TabIndex = 20;
			this->C5->UseVisualStyleBackColor = true;
			this->C5->Click += gcnew System::EventHandler(this, &MyForm::button_ClickC5);
			// 
			// D5
			// 
			this->D5->Location = System::Drawing::Point(397, 302);
			this->D5->Name = L"D5";
			this->D5->Size = System::Drawing::Size(49, 44);
			this->D5->TabIndex = 24;
			this->D5->UseVisualStyleBackColor = true;
			this->D5->Click += gcnew System::EventHandler(this, &MyForm::button_ClickD5);
			// 
			// D4
			// 
			this->D4->Location = System::Drawing::Point(342, 302);
			this->D4->Name = L"D4";
			this->D4->Size = System::Drawing::Size(49, 44);
			this->D4->TabIndex = 33;
			this->D4->UseVisualStyleBackColor = true;
			this->D4->Click += gcnew System::EventHandler(this, &MyForm::button_ClickD4);
			// 
			// E5
			// 
			this->E5->Location = System::Drawing::Point(397, 352);
			this->E5->Name = L"E5";
			this->E5->Size = System::Drawing::Size(49, 44);
			this->E5->TabIndex = 23;
			this->E5->UseVisualStyleBackColor = true;
			this->E5->Click += gcnew System::EventHandler(this, &MyForm::button_ClickE5);
			// 
			// E4
			// 
			this->E4->Location = System::Drawing::Point(342, 352);
			this->E4->Name = L"E4";
			this->E4->Size = System::Drawing::Size(49, 44);
			this->E4->TabIndex = 32;
			this->E4->UseVisualStyleBackColor = true;
			this->E4->Click += gcnew System::EventHandler(this, &MyForm::button_ClickE4);
			// 
			// C3
			// 
			this->C3->Location = System::Drawing::Point(287, 252);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(49, 44);
			this->C3->TabIndex = 25;
			this->C3->UseVisualStyleBackColor = true;
			this->C3->Click += gcnew System::EventHandler(this, &MyForm::button_ClickC3);
			// 
			// D3
			// 
			this->D3->Location = System::Drawing::Point(287, 302);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(49, 44);
			this->D3->TabIndex = 26;
			this->D3->UseVisualStyleBackColor = true;
			this->D3->Click += gcnew System::EventHandler(this, &MyForm::button_ClickD3);
			// 
			// E3
			// 
			this->E3->Location = System::Drawing::Point(287, 352);
			this->E3->Name = L"E3";
			this->E3->Size = System::Drawing::Size(49, 44);
			this->E3->TabIndex = 27;
			this->E3->UseVisualStyleBackColor = true;
			this->E3->Click += gcnew System::EventHandler(this, &MyForm::button_ClickE3);
			// 
			// E2
			// 
			this->E2->Location = System::Drawing::Point(232, 352);
			this->E2->Name = L"E2";
			this->E2->Size = System::Drawing::Size(49, 44);
			this->E2->TabIndex = 28;
			this->E2->UseVisualStyleBackColor = true;
			this->E2->Click += gcnew System::EventHandler(this, &MyForm::button_ClickE2);
			// 
			// D2
			// 
			this->D2->Location = System::Drawing::Point(232, 302);
			this->D2->Name = L"D2";
			this->D2->Size = System::Drawing::Size(49, 44);
			this->D2->TabIndex = 29;
			this->D2->UseVisualStyleBackColor = true;
			this->D2->Click += gcnew System::EventHandler(this, &MyForm::button_ClickD2);
			// 
			// C2
			// 
			this->C2->Location = System::Drawing::Point(232, 252);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(49, 44);
			this->C2->TabIndex = 30;
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &MyForm::button_ClickC2);
			// 
			// B2
			// 
			this->B2->Location = System::Drawing::Point(232, 202);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(49, 44);
			this->B2->TabIndex = 34;
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::button_ClickB2);
			// 
			// C4
			// 
			this->C4->Location = System::Drawing::Point(344, 252);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(49, 44);
			this->C4->TabIndex = 40;
			this->C4->UseVisualStyleBackColor = true;
			this->C4->Click += gcnew System::EventHandler(this, &MyForm::button_ClickC4);
			// 
			// A5
			// 
			this->A5->Location = System::Drawing::Point(397, 152);
			this->A5->Name = L"A5";
			this->A5->Size = System::Drawing::Size(49, 44);
			this->A5->TabIndex = 36;
			this->A5->UseVisualStyleBackColor = true;
			this->A5->Click += gcnew System::EventHandler(this, &MyForm::button_ClickA5);
			// 
			// A3
			// 
			this->A3->Location = System::Drawing::Point(287, 152);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(49, 44);
			this->A3->TabIndex = 38;
			this->A3->UseVisualStyleBackColor = true;
			this->A3->Click += gcnew System::EventHandler(this, &MyForm::button_ClickA3);
			// 
			// A2
			// 
			this->A2->Location = System::Drawing::Point(232, 152);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(49, 44);
			this->A2->TabIndex = 39;
			this->A2->UseVisualStyleBackColor = true;
			this->A2->Click += gcnew System::EventHandler(this, &MyForm::button_ClickA2);
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(544, 406);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(75, 44);
			this->exitButton->TabIndex = 44;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &MyForm::exitClick);
			// 
			// restartButton
			// 
			this->restartButton->Location = System::Drawing::Point(544, 360);
			this->restartButton->Name = L"restartButton";
			this->restartButton->Size = System::Drawing::Size(74, 46);
			this->restartButton->TabIndex = 42;
			this->restartButton->Text = L"Restart";
			this->restartButton->UseVisualStyleBackColor = true;
			this->restartButton->Click += gcnew System::EventHandler(this, &MyForm::resetButton);
			// 
			// C1
			// 
			this->C1->Location = System::Drawing::Point(177, 252);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(49, 44);
			this->C1->TabIndex = 50;
			this->C1->UseVisualStyleBackColor = true;
			// 
			// B1
			// 
			this->B1->Location = System::Drawing::Point(177, 202);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(49, 44);
			this->B1->TabIndex = 51;
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::button_ClickB1);
			// 
			// A1
			// 
			this->A1->Location = System::Drawing::Point(177, 152);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(49, 44);
			this->A1->TabIndex = 52;
			this->A1->UseVisualStyleBackColor = true;
			this->A1->Click += gcnew System::EventHandler(this, &MyForm::button_ClickA1);
			// 
			// D1
			// 
			this->D1->Location = System::Drawing::Point(177, 302);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(49, 44);
			this->D1->TabIndex = 53;
			this->D1->UseVisualStyleBackColor = true;
			// 
			// E1
			// 
			this->E1->Location = System::Drawing::Point(177, 352);
			this->E1->Name = L"E1";
			this->E1->Size = System::Drawing::Size(49, 44);
			this->E1->TabIndex = 54;
			this->E1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 466);
			this->Controls->Add(this->E1);
			this->Controls->Add(this->D1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->restartButton);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A5);
			this->Controls->Add(this->C4);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->D2);
			this->Controls->Add(this->E2);
			this->Controls->Add(this->E3);
			this->Controls->Add(this->D3);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->E4);
			this->Controls->Add(this->E5);
			this->Controls->Add(this->D4);
			this->Controls->Add(this->D5);
			this->Controls->Add(this->C5);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->A4);
			this->Controls->Add(this->numPlayersSelect);
			this->Controls->Add(this->numSpotsSelect);
			this->Controls->Add(this->symbolSelector);
			this->Controls->Add(this->gameSelect);
			this->Controls->Add(this->symbolLabel);
			this->Controls->Add(this->numSpotsLabel);
			this->Controls->Add(this->numPlayersLabel);
			this->Controls->Add(this->GMlabel);
			this->Name = L"MyForm";
			this->Text = L"SOS game";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numSpotsSelect))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int winner = 0;
		bool gameType;
		bool turn = true;
		int turn_count = 0;
		int P1 = 0;
		int P2 = 0;
		String^ symbol;
		int numPlayers;


	private: System::Void checkedListBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tableLayoutPanel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void checkedListBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maskedTextBox4_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maskedTextBox4_MaskInputRejected_4(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
//ROW A CLICKS done
private: System::Void button_ClickA1(System::Object^ sender, System::EventArgs^ e) {
		A1->Text = symbol;
		if (turn == true){
			A1->BackColor = Color::FromArgb(255, 58, 54);
		}
		else {
				A1->BackColor = Color::FromArgb(84, 452, 225);
		}
		turn = !turn;
		A1->Enabled = false;
		
		if (gameType == true) {
			checkForSimpleWinner();
		}
		else {
			checkForGeneralWinner();
		}
}
private: System::Void button_ClickA2(System::Object^ sender, System::EventArgs^ e) {
	A2->Text = symbol;
	if (turn == true){
		A2->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		A2->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	A2->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickA3(System::Object^ sender, System::EventArgs^ e) {

	A3->Text = symbol;
	if (turn == true){
		A3->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		A3->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	A3->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickA4(System::Object^ sender, System::EventArgs^ e) {

	A4->Text = symbol;
	if (turn == true){
		A4->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		A4->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	A4->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickA5(System::Object^ sender, System::EventArgs^ e) {

	A5->Text = symbol;
	if (turn == true) {
		A5->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		A5->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	A5->Enabled = false;
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
//ROW B CLICKS dnoe
private: System::Void button_ClickB1(System::Object^ sender, System::EventArgs^ e) {

	B1->Text = symbol;
	if (turn == true){
		B1->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		B1->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	B1->Enabled = false;
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickB2(System::Object^ sender, System::EventArgs^ e) {

	B2->Text = symbol;
	if (turn == true){
		B2->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		B2->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	B2->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickB3(System::Object^ sender, System::EventArgs^ e) {

	B3->Text = symbol;
	if (turn == true){
		B3->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		B3->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	B3->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickB4(System::Object^ sender, System::EventArgs^ e) {

	B4->Text = symbol;
	if (turn == true){
		B4->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		B4->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	B4->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickB5(System::Object^ sender, System::EventArgs^ e) {

	B5->Text = symbol;
	if (turn == true){
		B5->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		B5->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	B5->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
//ROW C CLICK done
private: System::Void button_ClickC1(System::Object^ sender, System::EventArgs^ e) {

	C1->Text = symbol;
	if (turn == true){
		C4->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		C1->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	C1->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickC2(System::Object^ sender, System::EventArgs^ e) {

	C2->Text = symbol;
	if (turn == true){
		C2->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		C2->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	C2->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickC3(System::Object^ sender, System::EventArgs^ e) {

	C3->Text = symbol;
	if (turn == true){
		C3->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		C3->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	C3->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickC4(System::Object^ sender, System::EventArgs^ e) {
	C4->Text = symbol;
	if (turn == true){
		C4->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		C4->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	C4->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickC5(System::Object^ sender, System::EventArgs^ e) {
	C5->Text = symbol;
	if (turn == true){

		C5->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		C5->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	C5->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
//ROW D CLICK done
private: System::Void button_ClickD1(System::Object^ sender, System::EventArgs^ e) {
	D1->Text = symbol;
	if (turn == true){

		D1->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		D1->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	D1->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickD2(System::Object^ sender, System::EventArgs^ e) {

	D2->Text = symbol;
	if (turn == true){
		D2->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		D2->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	D2->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickD3(System::Object^ sender, System::EventArgs^ e) {

	D3->Text = symbol;
	if (turn == true){
		D3->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		D3->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	D3->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickD4(System::Object^ sender, System::EventArgs^ e) {
	D4->Text = symbol;
	if (turn == true){

		D4->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		D4->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	D4->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickD5(System::Object^ sender, System::EventArgs^ e) {
	D5->Text = symbol;
	if (turn == true){

		D5->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		D5->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	D5->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
//ROW E CLICK done
private: System::Void button_ClickE1(System::Object^ sender, System::EventArgs^ e) {
		   E1->Text = symbol;
		   if (turn == true){
			   E1->BackColor = Color::FromArgb(255, 58, 54);
		   }
		   else {
			   E1->BackColor = Color::FromArgb(84, 452, 225);
		   }
		   turn = !turn;
		  E1-> Enabled = false;
		   
		   if (gameType == true) {
			   checkForSimpleWinner();
		   }
		   else {
			   checkForGeneralWinner();
		   }
	   }
private: System::Void button_ClickE2(System::Object^ sender, System::EventArgs^ e) {
	E2->Text = symbol;
	if (turn == true){

		E2->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		E2->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	E2->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickE3(System::Object^ sender, System::EventArgs^ e) {
	E3->Text = symbol;
	if (turn == true){

		E3->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		E3->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	E3->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickE4(System::Object^ sender, System::EventArgs^ e) {
	E4->Text = symbol;
	if (turn == true){
		E4->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		E4->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	E4->Enabled = false;
	
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}
private: System::Void button_ClickE5(System::Object^ sender, System::EventArgs^ e) {
	E5->Text = symbol;
	if (turn == true){
		E5->BackColor = Color::FromArgb(255, 58, 54);
	}
	else {
		E5->BackColor = Color::FromArgb(84, 452, 225);
	}
	turn = !turn;
	E5->Enabled = false;
	if (gameType == true) {
		checkForSimpleWinner();
	}
	else {
		checkForGeneralWinner();
	}
}

	   // fixME
	   public: System::Void checkForSimpleWinner() {
		   //horizontal
		   //Row A
		   winner = 0;
		   if ((A1->Text == "S") && (A2->Text == "O") && (A3->Text == "S") && (A1->BackColor == A2->BackColor) && (A2->BackColor == A3->BackColor) && (!A1->Enabled) && (!A2->Enabled) && (!A3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((A2->Text == "S") && (A3->Text == "O") && (A4->Text == "S") && (A2->BackColor == A3->BackColor) && (A3->BackColor == A4->BackColor) && (!A2->Enabled) && (!A3->Enabled) && (!A4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((A3->Text == "S") && (A4->Text == "O") && (A5->Text == "S") && (A3->BackColor == A4->BackColor) && (A4->BackColor == A5->BackColor) && (!A5->Enabled) && (!A3->Enabled) && (!A4->Enabled))
		   {
			   winner = 1;
		   }
		   //Row B
		   else if ((B1->Text == "S") && (B2->Text == "O") && (B3->Text == "S") && (B1->BackColor == B2->BackColor) && (B2->BackColor == B3->BackColor) && (!B1->Enabled) && (!B2->Enabled) && (!B3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B2->Text == "S") && (B3->Text == "O") && (B4->Text == "S") && (B2->BackColor == B3->BackColor) && (B3->BackColor == B4->BackColor) && (!B2->Enabled) && (!B3->Enabled) && (!B4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B3->Text == "S") && (B4->Text == "O") && (B5->Text == "S") && (B3->BackColor == B4->BackColor) && (B4->BackColor == B5->BackColor) && (!B5->Enabled) && (!B3->Enabled) && (!B4->Enabled))
		   {
			   winner = 1;
		   }
		   //Row C
		   else if ((C1->Text == "S") && (C2->Text == "O") && (C3->Text == "S") && (C1->BackColor == C2->BackColor) && (C2->BackColor == C3->BackColor) && (!C1->Enabled) && (!C2->Enabled) && (!C3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C2->Text == "S") && (C3->Text == "O") && (C4->Text == "S") && (C2->BackColor == C3->BackColor) && (C3->BackColor == C4->BackColor) && (!C2->Enabled) && (!C3->Enabled) && (!C4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C3->Text == "S") && (C4->Text == "O") && (C5->Text == "S") && (C3->BackColor == C4->BackColor) && (C4->BackColor == C5->BackColor) && (!C5->Enabled) && (!C3->Enabled) && (!C4->Enabled))
		   {
			   winner = 1;
		   }
		   //Row D
		   else if ((D1->Text == "S") && (D2->Text == "O") && (D3->Text == "S") && (D1->BackColor == D2->BackColor) && (D2->BackColor == D3->BackColor) && (!D1->Enabled) && (!D2->Enabled) && (!D3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((D2->Text == "S") && (D3->Text == "O") && (D4->Text == "S") && (D2->BackColor == D3->BackColor) && (D3->BackColor == D4->BackColor) && (!D2->Enabled) && (!D3->Enabled) && (!D4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((D3->Text == "S") && (D4->Text == "O") && (D5->Text == "S") && (D3->BackColor == D4->BackColor) && (D4->BackColor == D5->BackColor) && (!D5->Enabled) && (!D3->Enabled) && (!D4->Enabled))
		   {
			   winner = 1;
		   }
		   //Row E
		   else if ((E1->Text == "S") && (E2->Text == "O") && (E3->Text == "S") && (E1->BackColor == E2->BackColor) && (E2->BackColor == E3->BackColor) && (!E1->Enabled) && (!E2->Enabled) && (!E3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((E2->Text == "S") && (E3->Text == "O") && (E4->Text == "S") && (E2->BackColor == E3->BackColor) && (E3->BackColor == E4->BackColor) && (!E2->Enabled) && (!E3->Enabled) && (!E4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((E4->Text == "S") && (E2->Text == "O") && (E3->Text == "S") && (E3->BackColor == E4->BackColor) && (E4->BackColor == E5->BackColor) && (!E3->Enabled) && (!E4->Enabled) && (!E5->Enabled))
		   {
			   winner = 1;
		   }
		   //vertical
		   //Colum 1
		   else if ((A1->Text == "S") && (B1->Text == "O") && (C1->Text == "S") && (A1->BackColor == B1->BackColor) && (B1->BackColor == C1->BackColor) && (!A1->Enabled) && (!B1->Enabled) && (!C1->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B1->Text == "S") && (C1->Text == "O") && (D1->Text == "S") && (B1->BackColor == C1->BackColor) && (C1->BackColor == D1->BackColor) && (!B1->Enabled) && (!C1->Enabled) && (!D1->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C1->Text == "S") && (D1->Text == "O") && (E1->Text == "S") && (C1->BackColor == D1->BackColor) && (D1->BackColor == E1->BackColor) && (!C1->Enabled) && (!D1->Enabled) && (!E1->Enabled))
		   {
			   winner = 1;
		   }
		   //Colum 2
		   else if ((A2->Text == "S") && (B2->Text == "O") && (C2->Text == "S") && (A2->BackColor == B2->BackColor) && (B2->BackColor == C2->BackColor) && (!A2->Enabled) && (!B2->Enabled) && (!C2->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B2->Text == "S") && (C2->Text == "O") && (D2->Text == "S") && (B2->BackColor == C2->BackColor) && (C2->BackColor == D2->BackColor) && (!B2->Enabled) && (!C2->Enabled) && (!D2->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C2->Text == "S") && (D2->Text == "O") && (E2->Text == "S") && (C2->BackColor == D2->BackColor) && (D2->BackColor == E2->BackColor) && (!C2->Enabled) && (!D2->Enabled) && (!E2->Enabled))
		   {
			   winner = 1;
		   }
		   //Colum 3
		   else if ((A3->Text == "S") && (B3->Text == "O") && (C3->Text == "S") && (A3->BackColor == B3->BackColor) && (B3->BackColor == C3->BackColor) && (!A3->Enabled) && (!B3->Enabled) && (!C3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B3->Text == "S") && (C3->Text == "O") && (D3->Text == "S") && (B3->BackColor == C3->BackColor) && (C3->BackColor == D3->BackColor) && (!B3->Enabled) && (!C3->Enabled) && (!D3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C3->Text == "S") && (D3->Text == "O") && (E3->Text == "S") && (C3->BackColor == D3->BackColor) && (D3->BackColor == E3->BackColor) && (!C3->Enabled) && (!D3->Enabled) && (!E3->Enabled))
		   {
			   winner = 1;
		   }
		   //Colum 4
		   else if ((A4->Text == "S") && (B4->Text == "O") && (C4->Text == "S") && (A4->BackColor == B4->BackColor) && (B4->BackColor == C4->BackColor) && (!A4->Enabled) && (!B4->Enabled) && (!C4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B4->Text == "S") && (C4->Text == "O") && (D4->Text == "S") && (B4->BackColor == C4->BackColor) && (C4->BackColor == D4->BackColor) && (!B4->Enabled) && (!C4->Enabled) && (!D4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C4->Text == "S") && (D4->Text == "O") && (E4->Text == "S") && (C4->BackColor == D4->BackColor) && (D4->BackColor == E4->BackColor) && (!C4->Enabled) && (!D4->Enabled) && (!E4->Enabled))
		   {
			   winner = 1;
		   }
		   //Colum 5
		   else if ((A5->Text == "S") && (B5->Text == "O") && (C5->Text == "S") && (A5->BackColor == B5->BackColor) && (B5->BackColor == C5->BackColor) && (!A5->Enabled) && (!B5->Enabled) && (!C5->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B5->Text == "S") && (C5->Text == "O") && (D5->Text == "S") && (B5->BackColor == C5->BackColor) && (C5->BackColor == D5->BackColor) && (!B5->Enabled) && (!C5->Enabled) && (!D5->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C5->Text == "S") && (D5->Text == "O") && (E5->Text == "S") && (C5->BackColor == D5->BackColor) && (D5->BackColor == E5->BackColor) && (!C5->Enabled) && (!D5->Enabled) && (!E5->Enabled))
		   {
			   winner = 1;
		   }
		   //Diagnal
		   else if ((A1->Text == "S") && (B2->Text == "O") && (C3->Text == "S") && (A1->BackColor == B2->BackColor) && (B2->BackColor == C3->BackColor) && (!A1->Enabled) && (!B2->Enabled) && (!C3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B2->Text == "S") && (C3->Text == "O") && (D4->Text == "S") && (B2->BackColor == C3->BackColor) && (C3->BackColor == D4->BackColor) && (!B2->Enabled) && (!C3->Enabled) && (!D4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C3->Text == "S") && (D4->Text == "O") && (E5->Text == "S") && (C3->BackColor == D4->BackColor) && (D4->BackColor == E5->BackColor) && (!C3->Enabled) && (!D4->Enabled) && (!E5->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((A2->Text == "S") && (B3->Text == "O") && (C4->Text == "S") && (A2->BackColor == B3->BackColor) && (B3->BackColor == C4->BackColor) && (!A2->Enabled) && (!B3->Enabled) && (!C4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B3->Text == "S") && (C4->Text == "O") && (D5->Text == "S") && (B3->BackColor == C4->BackColor) && (C4->BackColor == D5->BackColor) && (!B3->Enabled) && (!C4->Enabled) && (!D5->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((A3->Text == "S") && (B4->Text == "O") && (C5->Text == "S") && (A3->BackColor == B4->BackColor) && (B4->BackColor == C5->BackColor) && (!A3->Enabled) && (!B4->Enabled) && (!C5->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B1->Text == "S") && (C2->Text == "O") && (D3->Text == "S") && (B1->BackColor == C2->BackColor) && (C2->BackColor == D3->BackColor) && (!B1->Enabled) && (!C2->Enabled) && (!D3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C2->Text == "S") && (D3->Text == "O") && (E4->Text == "S") && (C2->BackColor == D3->BackColor) && (D3->BackColor == E4->BackColor) && (!C2->Enabled) && (!D3->Enabled) && (!E4->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C1->Text == "S") && (D2->Text == "O") && (E3->Text == "S") && (C1->BackColor == D2->BackColor) && (D2->BackColor == E3->BackColor) && (!C1->Enabled) && (!D2->Enabled) && (!E3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((A3->Text == "S") && (B2->Text == "O") && (C1->Text == "S") && (A3->BackColor == B2->BackColor) && (B2->BackColor == C1->BackColor) && (!A3->Enabled) && (!B2->Enabled) && (!C1->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((A4->Text == "S") && (B3->Text == "O") && (C2->Text == "S") && (A4->BackColor == B3->BackColor) && (B3->BackColor == C2->BackColor) && (!A4->Enabled) && (!B3->Enabled) && (!C2->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B3->Text == "S") && (C2->Text == "O") && (D1->Text == "S") && (B3->BackColor == C2->BackColor) && (C2->BackColor == D1->BackColor) && (!B3->Enabled) && (!C2->Enabled) && (!D1->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((A5->Text == "S") && (B4->Text == "O") && (C3->Text == "S") && (A5->BackColor == B4->BackColor) && (B4->BackColor == C3->BackColor) && (!A5->Enabled) && (!B4->Enabled) && (!C3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B4->Text == "S") && (C3->Text == "O") && (D2->Text == "S") && (B4->BackColor == C3->BackColor) && (C3->BackColor == D2->BackColor) && (!B4->Enabled) && (!C3->Enabled) && (!D2->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C3->Text == "S") && (D2->Text == "O") && (E1->Text == "S") && (C3->BackColor == D2->BackColor) && (D2->BackColor == E1->BackColor) && (!C3->Enabled) && (!D2->Enabled) && (!E1->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((B5->Text == "S") && (C4->Text == "O") && (D3->Text == "S") && (B5->BackColor == C4->BackColor) && (C4->BackColor == D3->BackColor) && (!B5->Enabled) && (!C4->Enabled) && (!D3->Enabled))
		   {
			   winner = 1;
		   }
		   else if ((C4->Text == "S") && (D3->Text == "O") && (E2->Text == "S") && (C4->BackColor == D3->BackColor) && (D3->BackColor == E2->BackColor) && (!C4->Enabled) && (!D3->Enabled) && (!E2->Enabled))
		   {
		   winner = 1;
			   }
		   
		   else if ((C5->Text == "S") && (D4->Text == "O") && (E3->Text == "S") && (C5->BackColor == D4->BackColor) && (D4->BackColor == E3->BackColor) && (!C5->Enabled) && (!D4->Enabled) && (!E3->Enabled))
		   {
			   winner = 1;

		   }
		   else
			{
		   winner = 0;
			}
		   if (winner == 1) {
			   if (turn) {
				   MessageBox::Show("Blue wins\nRestart or exit");
			   }
			   else {
				   MessageBox::Show("Red wins\nRestart or exit");
			   }
		   }
	}//end check simple winner
	//done
	   public: System::Void checkForGeneralWinner() {
		  int count = 0;
		  //horizontal
		  //Row A
		  if ((A1->Text == "S") && (A2->Text == "O") && (A3->Text == "S") && (A1->BackColor == A2->BackColor) && (A2->BackColor == A3->BackColor) && (!A1->Enabled) && (!A2->Enabled) && (!A3->Enabled))
		  {
			  count++;
		  }
		  else if ((A2->Text == "S") && (A3->Text == "O") && (A4->Text == "S") && (A2->BackColor == A3->BackColor) && (A3->BackColor == A4->BackColor) && (!A2->Enabled) && (!A3->Enabled) && (!A4->Enabled))
		  {
			  count++;
		  }
		  else if ((A3->Text == "S") && (A4->Text == "O") && (A5->Text == "S") && (A3->BackColor == A4->BackColor) && (A4->BackColor == A5->BackColor) && (!A5->Enabled) && (!A3->Enabled) && (!A4->Enabled))
		  {
			  count++;
		  }
		  //Row B
		  else if ((B1->Text == "S") && (B2->Text == "O") && (B3->Text == "S") && (B1->BackColor == B2->BackColor) && (B2->BackColor == B3->BackColor) && (!B1->Enabled) && (!B2->Enabled) && (!B3->Enabled))
		  {
			  count++;
		  }
		  else if ((B2->Text == "S") && (B3->Text == "O") && (B4->Text == "S") && (B2->BackColor == B3->BackColor) && (B3->BackColor == B4->BackColor) && (!B2->Enabled) && (!B3->Enabled) && (!B4->Enabled))
		  {
			  count++;
		  }
		  else if ((B3->Text == "S") && (B4->Text == "O") && (B5->Text == "S") && (B3->BackColor == B4->BackColor) && (B4->BackColor == B5->BackColor) && (!B5->Enabled) && (!B3->Enabled) && (!B4->Enabled))
		  {
			  count++;
		  }
		  //Row C
		  else if ((C1->Text == "S") && (C2->Text == "O") && (C3->Text == "S") && (C1->BackColor == C2->BackColor) && (C2->BackColor == C3->BackColor) && (!C1->Enabled) && (!C2->Enabled) && (!C3->Enabled))
		  {
			  count++;
		  }
		  else if ((C2->Text == "S") && (C3->Text == "O") && (C4->Text == "S") && (C2->BackColor == C3->BackColor) && (C3->BackColor == C4->BackColor) && (!C2->Enabled) && (!C3->Enabled) && (!C4->Enabled))
		  {
			  count++;
		  }
		  else if ((C3->Text == "S") && (C4->Text == "O") && (C5->Text == "S") && (C3->BackColor == C4->BackColor) && (C4->BackColor == C5->BackColor) && (!C5->Enabled) && (!C3->Enabled) && (!C4->Enabled))
		  {
			  count++;
		  }
		  //Row D
		  else if ((D1->Text == "S") && (D2->Text == "O") && (D3->Text == "S") && (D1->BackColor == D2->BackColor) && (D2->BackColor == D3->BackColor) && (!D1->Enabled) && (!D2->Enabled) && (!D3->Enabled))
		  {
			  count++;
		  }
		  else if ((D2->Text == "S") && (D3->Text == "O") && (D4->Text == "S") && (D2->BackColor == D3->BackColor) && (D3->BackColor == D4->BackColor) && (!D2->Enabled) && (!D3->Enabled) && (!D4->Enabled))
		  {
			  count++;
		  }
		  else if ((D3->Text == "S") && (D4->Text == "O") && (D5->Text == "S") && (D3->BackColor == D4->BackColor) && (D4->BackColor == D5->BackColor) && (!D5->Enabled) && (!D3->Enabled) && (!D4->Enabled))
		  {
			  count++;
		  }
		  //Row E
		  else if ((E1->Text == "S") && (E2 ->Text == "O") && (E3->Text == "S") && (E1->BackColor == E2->BackColor) && (E2->BackColor == E3->BackColor) && (!E1->Enabled) && (!E2->Enabled) && (!E3->Enabled))
		  {
			  count++;
		  }
		  else if ((E2->Text == "S") && (E3->Text == "O") && (E4->Text == "S") && (E2->BackColor == E3->BackColor) && (E3->BackColor == E4->BackColor) && (!E2->Enabled) && (!E3->Enabled) && (!E4->Enabled))
		  {
			  count++;
		  }
		  else if ((E4->Text == "S") && (E2->Text == "O") && (E3->Text == "S") &&  (E3->BackColor == E4->BackColor) && (E4->BackColor == E5->BackColor) && (!E3->Enabled) && (!E4->Enabled) && (!E5->Enabled))
		  {
			  count++;
		  }
		  //vertical
		  //Colum 1
		  else if ((A1->Text == "S") && (B1->Text == "O") && (C1->Text == "S") && (A1->BackColor == B1->BackColor) && (B1->BackColor == C1->BackColor) && (!A1->Enabled) && (!B1->Enabled) && (!C1->Enabled))
		  {
			  count++;
		  }
		  else if ((B1 -> Text == "S") && (C1->Text == "O") && (D1->Text == "S") && (B1->BackColor == C1->BackColor) && (C1->BackColor == D1->BackColor) && (!B1->Enabled) && (!C1->Enabled) && (!D1->Enabled))
		  {
			  count++;
		  }
		  else if ((C1->Text == "S") && (D1->Text == "O") && (E1->Text == "S") && (C1->BackColor == D1->BackColor) && (D1->BackColor == E1->BackColor) && (!C1->Enabled) && (!D1->Enabled) && (!E1->Enabled))
		  {
			  count++;
		  }
		  //Colum 2
		  else if ((A2->Text == "S") && (B2->Text == "O") && (C2->Text == "S") && (A2->BackColor == B2->BackColor) && (B2->BackColor == C2->BackColor) && (!A2->Enabled) && (!B2->Enabled) && (!C2->Enabled))
		  {
			  count++;
		  }
		  else if ((B2->Text == "S") && (C2->Text == "O") && (D2->Text == "S") && (B2->BackColor == C2->BackColor) && (C2->BackColor == D2->BackColor) && (!B2->Enabled) && (!C2->Enabled) && (!D2->Enabled))
		  {
			  count++;
		  }
		  else if ((C2->Text == "S") && (D2->Text == "O") && (E2->Text == "S") && (C2->BackColor == D2->BackColor) && (D2->BackColor == E2->BackColor) && (!C2->Enabled) && (!D2->Enabled) && (!E2->Enabled))
		  {
			  count++;
		  }
		  //Colum 3
		  else if ((A3->Text == "S") && (B3->Text == "O") && (C3->Text == "S") && (A3->BackColor == B3->BackColor) && (B3->BackColor == C3->BackColor) && (!A3->Enabled) && (!B3->Enabled) && (!C3->Enabled))
		  {
			  count++;
		  }
		  else if ((B3->Text == "S") && (C3->Text == "O") && (D3->Text == "S") && (B3->BackColor == C3->BackColor) && (C3->BackColor == D3->BackColor) && (!B3->Enabled) && (!C3->Enabled) && (!D3->Enabled))
		  {
			  count++;
		  }
		  else if ((C3->Text == "S") && (D3->Text == "O") && (E3->Text == "S") && (C3->BackColor == D3->BackColor) && (D3->BackColor == E3->BackColor) && (!C3->Enabled) && (!D3->Enabled) && (!E3->Enabled))
		  {
			  count++;
		  }
		  //Colum 4
		  else if ((A4->Text == "S") && (B4->Text == "O") && (C4->Text == "S") && (A4->BackColor == B4->BackColor) && (B4->BackColor == C4->BackColor) && (!A4->Enabled) && (!B4->Enabled) && (!C4->Enabled))
		  {
		  count++;
		  }
		  else if ((B4->Text == "S") && (C4->Text == "O") && (D4->Text == "S") && (B4->BackColor == C4->BackColor) && (C4->BackColor == D4->BackColor) && (!B4->Enabled) && (!C4->Enabled) && (!D4->Enabled))
		  {
		  count++;
		  }
		  else if ((C4->Text == "S") && (D4->Text == "O") && (E4->Text == "S") && (C4->BackColor == D4->BackColor) && (D4->BackColor == E4->BackColor) && (!C4->Enabled) && (!D4->Enabled) && (!E4->Enabled))
		  {
		  count++;
		  }
		  //Colum 5
		  else if ((A5->Text == "S") && (B5->Text == "O") && (C5->Text == "S") && (A5->BackColor == B5->BackColor) && (B5->BackColor == C5->BackColor) && (!A5->Enabled) && (!B5->Enabled) && (!C5->Enabled))
		  {
		  count++;
		  }
		  else if ((B5->Text == "S") && (C5->Text == "O") && (D5->Text == "S") && (B5->BackColor == C5->BackColor) && (C5->BackColor == D5->BackColor) && (!B5->Enabled) && (!C5->Enabled) && (!D5->Enabled))
		  {
		  count++;
		  }
		  else if ((C5->Text == "S") && (D5->Text == "O") && (E5->Text == "S") && (C5->BackColor == D5->BackColor) && (D5->BackColor == E5->BackColor) && (!C5->Enabled) && (!D5->Enabled) && (!E5->Enabled))
		  {
		  count++;
		  }
		  //Diagnal
		  else if ((A1->Text == "S") && (B2->Text == "O") && (C3->Text == "S") && (A1->BackColor == B2->BackColor) && (B2->BackColor == C3->BackColor) && (!A1->Enabled) && (!B2->Enabled) && (!C3->Enabled))
		  {
			  count++;
		  }
		  else if ((B2->Text == "S") && (C3->Text == "O") && (D4->Text == "S") && (B2->BackColor == C3->BackColor) && (C3->BackColor == D4->BackColor) && (!B2->Enabled) && (!C3->Enabled) && (!D4->Enabled))
		  {
			  count++;
		  }
		  else if ((C3->Text == "S") && (D4->Text == "O") && (E5->Text == "S") && (C3->BackColor == D4->BackColor) && (D4->BackColor == E5->BackColor) && (!C3->Enabled) && (!D4->Enabled) && (!E5->Enabled))
		  {
			  count++;
		  }
		  else if ((A2->Text == "S") && (B3->Text == "O") && (C4->Text == "S") && (A2->BackColor == B3->BackColor) && (B3->BackColor == C4->BackColor) && (!A2->Enabled) && (!B3->Enabled) && (!C4->Enabled))
		  {
			  count++;
		  }
		  else if ((B3->Text == "S") && (C4->Text == "O") && (D5->Text == "S") && (B3->BackColor == C4->BackColor) && (C4->BackColor == D5->BackColor) && (!B3->Enabled) && (!C4->Enabled) && (!D5->Enabled))
		  {
			  count++;
		  }
		  else if ((A3->Text == "S") && (B4->Text == "O") && (C5->Text == "S") && (A3->BackColor == B4->BackColor) && (B4->BackColor == C5->BackColor) && (!A3->Enabled) && (!B4->Enabled) && (!C5->Enabled))
		  {
			  count++;
		  }
		  else if ((B1->Text == "S") && (C2->Text == "O") && (D3->Text == "S") && (B1->BackColor == C2->BackColor) && (C2->BackColor == D3->BackColor) && (!B1->Enabled) && (!C2->Enabled) && (!D3->Enabled))
		  {
			  count++;
		  }
		  else if ((C2->Text == "S") && (D3->Text == "O") && (E4->Text == "S") && (C2->BackColor == D3->BackColor) && (D3->BackColor == E4->BackColor) && (!C2->Enabled) && (!D3->Enabled) && (!E4->Enabled))
		  {
			  count++;
		  }
		  else if ((C1->Text == "S") && (D2->Text == "O") && (E3->Text == "S") && (C1->BackColor == D2->BackColor) && (D2->BackColor == E3->BackColor) && (!C1->Enabled) && (!D2->Enabled) && (!E3->Enabled))
		  {
			  count++;
		  }
		  else if ((A3->Text == "S") && (B2->Text == "O") && (C1->Text == "S") && (A3->BackColor == B2->BackColor) && (B2->BackColor == C1->BackColor) && (!A3->Enabled) && (!B2->Enabled) && (!C1->Enabled))
		  {
			  count++;
		  }
		  else if ((A4->Text == "S") && (B3->Text == "O") && (C2->Text == "S") && (A4->BackColor == B3->BackColor) && (B3->BackColor == C2->BackColor) && (!A4->Enabled) && (!B3->Enabled) && (!C2->Enabled))
		  {
			  count++;
		  }
		  else if ((B3->Text == "S") && (C2->Text == "O") && (D1->Text == "S") && (B3->BackColor == C2->BackColor) && (C2->BackColor == D1->BackColor) && (!B3->Enabled) && (!C2->Enabled) && (!D1->Enabled))
		  {
			  count++;
		  }
		  else if ((A5->Text == "S") && (B4->Text == "O") && (C3->Text == "S") && (A5->BackColor == B4->BackColor) && (B4->BackColor == C3->BackColor) && (!A5->Enabled) && (!B4->Enabled) && (!C3->Enabled))
		  {
			  count++;
		  }
		  else if ((B4->Text == "S") && (C3->Text == "O") && (D2->Text == "S") && (B4->BackColor == C3->BackColor) && (C3->BackColor == D2->BackColor) && (!B4->Enabled) && (!C3->Enabled) && (!D2->Enabled))
		  {
			  count++;
		  }
		  else if ((C3->Text == "S") && (D2->Text == "O") && (E1->Text == "S") && (C3->BackColor == D2->BackColor) && (D2->BackColor == E1->BackColor) && (!C3->Enabled) && (!D2->Enabled) && (!E1->Enabled))
		  {
			  count++;
		  }
		  else if ((B5->Text == "S") && (C4->Text == "O") && (D3->Text == "S") && (B5->BackColor == C4->BackColor) && (C4->BackColor == D3->BackColor) && (!B5->Enabled) && (!C4->Enabled) && (!D3->Enabled))
		  {
			  count++;
		  }
		  else if ((C4->Text == "S") && (D3->Text == "O") && (E2->Text == "S") && (C4->BackColor == D3->BackColor) && (D3->BackColor == E2->BackColor) && (!C4->Enabled) && (!D3->Enabled) && (!E2->Enabled))
		  {
			  count++;
		  }
		  else if ((C5->Text == "S") && (D4->Text == "O") && (E3->Text == "S") && (C5->BackColor == D4->BackColor) && (D4->BackColor == E3->BackColor) && (!C5->Enabled) && (!D4->Enabled) && (!E3->Enabled))
		  {
			  count++;
		  }
		  if (turn) {
			  P1 += count;
		  }
		  else {
			  P2 += count;
		  }
		  if (!A1 -> Enabled && !A2-> Enabled && !A3->Enabled && !A4 ->Enabled && !A5->Enabled &&
			  !B1->Enabled && !B2->Enabled && !B3->Enabled  && !B4->Enabled && !B5->Enabled &&
			  !C1->Enabled && !C2->Enabled && !C3->Enabled && !C4->Enabled && !C5->Enabled &&
			  !D1->Enabled && !D2->Enabled && !D3->Enabled && !D4->Enabled && !D5->Enabled &&
			  !E1->Enabled && !E2->Enabled && !E3->Enabled && !E4->Enabled && !E5->Enabled){
		  if (P1 > P2) {
			  MessageBox::Show("Blue wins");
		  }
		  else if (P2 > P1) {
			  MessageBox::Show("Red wins");
		   }
		  else if (P1 == P2) {
			  MessageBox::Show("Draw, no one wins");
		  }
		  }
	  }//end check general winner

	  //done
private: System::Void exitClick(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit?", "Exit",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
	   //done
private: System::Void resetButton(System::Object^ sender, System::EventArgs^ e) {
	//Dis able all buttons and reset score
	
	turn = true;
	turn_count = 0;
	P1 = 0;
	P2 = 0;

	A1->Enabled = true;
	A1->ResetText();
	A1->ResetBackColor();
	A2->Enabled = true; 
	A2->ResetText();
	A2->ResetBackColor();
	A3->Enabled = true;
	A3->ResetText();
	A3->ResetBackColor();
	A4->Enabled = true;
	A4->ResetText();
	A4->ResetBackColor();
	A5->Enabled = true;
	A5->ResetText();
	A5->ResetBackColor();

	B1->Enabled = true;
	B1->ResetText();
	B1->ResetBackColor();
	B2->Enabled = true;
	B2->ResetText();
	B2->ResetBackColor();
	B3->Enabled = true;
	B3->ResetText();
	B3->ResetBackColor();
	B4->Enabled = true;
	B4->ResetText();
	B4->ResetBackColor();
	B5->Enabled = true;
	B5->ResetText();
	B5->ResetBackColor();

	C1->Enabled = true;
	C1->ResetText();
	C1->ResetBackColor();
	C2->Enabled = true;
	C2->ResetText();
	C2->ResetBackColor();
	C3->Enabled = true;
	C3->ResetText();
	C3->ResetBackColor();
	C4->Enabled = true;
	C4->ResetText();
	C4->ResetBackColor();
	C5->Enabled = true;
	C5->ResetText();
	C5->ResetBackColor();

	D1->Enabled = true;
	D1->ResetText();
	D1->ResetBackColor();
	D2->Enabled = true;
	D2->ResetText();
	D2->ResetBackColor();
	D3->Enabled = true;
	D3->ResetText();
	D3->ResetBackColor();
	D4->Enabled = true;
	D4->ResetText();
	D4->ResetBackColor();
	D5->Enabled = true;
	D5->ResetText();
	D5->ResetBackColor();

	E1->Enabled = true;
	E1->ResetText();
	E1->ResetBackColor();
	E2->Enabled = true;
	E2->ResetText();
	E2->ResetBackColor();
	E3->Enabled = true;
	E3->ResetText();
	E3->ResetBackColor();
	E4->Enabled = true;
	E4->ResetText();
	E4->ResetBackColor();
	E5->Enabled = true;
	E5->ResetText();
	E5->ResetBackColor();
}
	   //done
private: System::Void symbolSelected(System::Object^ sender, System::EventArgs^ e) {
	symbol = symbolSelector->SelectedItem->ToString();
}
	   //done
private: System::Void gameTypeSelector(System::Object^ sender, System::EventArgs^ e) {
	String^ simpGen = gameSelect->SelectedItem->ToString();

	if (simpGen == "Simple") {
		gameType = true;
	}
	else if (simpGen == "General") {
		gameType = false;
	}

}

	   //Computer move
private: System::Void compMove(System::Object^ sender, System::EventArgs^ e) {
	srand(0);
	int n = rand() % 25;
	bool temp = true;
	while (temp = true) {
		switch (n) {
		case 1:
			if (A1->Enabled) {
				A1->PerformClick();
				temp = !temp;
			}
		case 2:
			if (A2->Enabled) {
				A2->PerformClick();
				temp = !temp;
			}
		case 3:
			if (A3->Enabled) {
				A3->PerformClick();
				temp = !temp;
			}
		case 4:
			if (A4->Enabled) {
				A2->PerformClick();
				temp = !temp;
			}
		case 5:
			if (A5->Enabled) {
				A2->PerformClick();
				temp = !temp;
			}

		case 6:
			if (B1->Enabled) {
				B1->PerformClick();
				temp = !temp;
			}
		case 7:
			if (B2->Enabled) {
				B2->PerformClick();
				temp = !temp;
			}
		case 9:
			if (!B3->Enabled) {
				B3->PerformClick();
				temp = !temp;
			}
		case 10:
			if (!B4->Enabled) {
				B4->PerformClick();
				temp = !temp;
			}
		case 11:
			if (!B5->Enabled) {
				B5->PerformClick();
				temp = !temp;
			}

		case 12:
			if (!C1->Enabled) {
				C1->PerformClick();
				temp = !temp;
			}
		case 13:
			if (!C2->Enabled) {
				C2->PerformClick();
				temp = !temp;
			}
		case 14:
			if (!C3->Enabled) {
				C3->PerformClick();
				temp = !temp;
			}
		case 15:
			if (!C4->Enabled) {
				C4->PerformClick();
				temp = !temp;
			}
		case 16:
			if (!C5->Enabled) {
				C5->PerformClick();
				temp = !temp;
			}

		case 17:
			if (!D1->Enabled) {
				D1->PerformClick();
				temp = !temp;
			}
		case 18:
			if (!D2->Enabled) {
				D2->PerformClick();
				temp = !temp;
			}
		case 19:
			if (!D3->Enabled) {
				D3->PerformClick();
				temp = !temp;
			}
		case 20:
			if (!D4->Enabled) {
				D4->PerformClick();
				temp = !temp;
			}
		case 21:
			if (!D5->Enabled) {
				D5->PerformClick();
				temp = !temp;
			}

		case 22:
			if (!E1->Enabled) {
				E1->PerformClick();
				temp = !temp;
			}
		case 23:
			if (!E2->Enabled) {
				E2->PerformClick();
				temp = !temp;
			}
		case 24:
			if (!E3->Enabled) {
				E3->PerformClick();
				temp = !temp;
			}
		case 25:
			if (!E4->Enabled) {
				E4->PerformClick();
				temp = !temp;
			}
		case 26:
			if (!E5->Enabled) {
				E5->PerformClick();
				temp = !temp;
			}
		}
		srand(0);
		n = rand() % 25;
	}

}


private: System::Void getNumPlayers(System::Object^ sender, System::EventArgs^ e) {
	String^ num = gameSelect->SelectedItem->ToString();

	if (num == "Single Player") {
		numPlayers = 1;
	}
	else if (num == "Two Player") {
		numPlayers = 2;
	}
	else if (num == "Computer Only") {
		numPlayers = 3;
	}
}
};
}
