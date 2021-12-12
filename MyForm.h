#pragma once
#include <random>
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
	private: System::Windows::Forms::Label^ symbolLabel;
	private: System::Windows::Forms::ListBox^ gameSelect;
	private: System::Windows::Forms::ListBox^ symbolSelector;
	private: System::Windows::Forms::Label^ numPlayersLabel;
	private: System::Windows::Forms::Button^ C3;

	private: System::Windows::Forms::Button^ A4;
	private: System::Windows::Forms::Button^ B4;
	private: System::Windows::Forms::Button^ B3;
	private: System::Windows::Forms::Button^ B5;
	private: System::Windows::Forms::Button^ C5;
	private: System::Windows::Forms::Button^ D5;
	private: System::Windows::Forms::Button^ D4;
	private: System::Windows::Forms::Button^ E5;
	private: System::Windows::Forms::Button^ E4;
	private: System::Windows::Forms::ListBox^ numPlayersSelect;
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
	internal: System::Windows::Forms::TextBox^ recordBox;
	
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->GMlabel = (gcnew System::Windows::Forms::Label());
			this->symbolLabel = (gcnew System::Windows::Forms::Label());
			this->gameSelect = (gcnew System::Windows::Forms::ListBox());
			this->symbolSelector = (gcnew System::Windows::Forms::ListBox());
			this->numPlayersLabel = (gcnew System::Windows::Forms::Label());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->A4 = (gcnew System::Windows::Forms::Button());
			this->B4 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->B5 = (gcnew System::Windows::Forms::Button());
			this->C5 = (gcnew System::Windows::Forms::Button());
			this->D5 = (gcnew System::Windows::Forms::Button());
			this->D4 = (gcnew System::Windows::Forms::Button());
			this->E5 = (gcnew System::Windows::Forms::Button());
			this->E4 = (gcnew System::Windows::Forms::Button());
			this->numPlayersSelect = (gcnew System::Windows::Forms::ListBox());
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
			this->recordBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// GMlabel
			// 
			this->GMlabel->AutoSize = true;
			this->GMlabel->Location = System::Drawing::Point(48, 21);
			this->GMlabel->Name = L"GMlabel";
			this->GMlabel->Size = System::Drawing::Size(97, 20);
			this->GMlabel->TabIndex = 2;
			this->GMlabel->Text = L"Game Mode";
			// 
			// symbolLabel
			// 
			this->symbolLabel->AutoSize = true;
			this->symbolLabel->Location = System::Drawing::Point(36, 157);
			this->symbolLabel->Name = L"symbolLabel";
			this->symbolLabel->Size = System::Drawing::Size(103, 20);
			this->symbolLabel->TabIndex = 9;
			this->symbolLabel->Text = L"Select S or O";
			// 
			// gameSelect
			// 
			this->gameSelect->FormattingEnabled = true;
			this->gameSelect->ItemHeight = 20;
			this->gameSelect->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Simple", L"General" });
			this->gameSelect->Location = System::Drawing::Point(89, 44);
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
			this->symbolSelector->Location = System::Drawing::Point(61, 180);
			this->symbolSelector->Name = L"symbolSelector";
			this->symbolSelector->Size = System::Drawing::Size(56, 44);
			this->symbolSelector->TabIndex = 43;
			this->symbolSelector->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::symbolSelected);
			// 
			// numPlayersLabel
			// 
			this->numPlayersLabel->AutoSize = true;
			this->numPlayersLabel->Location = System::Drawing::Point(441, 21);
			this->numPlayersLabel->Name = L"numPlayersLabel";
			this->numPlayersLabel->Size = System::Drawing::Size(138, 20);
			this->numPlayersLabel->TabIndex = 3;
			this->numPlayersLabel->Text = L"Number of Players";
			// 
			// C3
			// 
			this->C3->Location = System::Drawing::Point(296, 200);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(49, 44);
			this->C3->TabIndex = 25;
			this->C3->UseVisualStyleBackColor = true;
			this->C3->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// A4
			// 
			this->A4->Enabled = false;
			this->A4->Location = System::Drawing::Point(351, 100);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(49, 44);
			this->A4->TabIndex = 37;
			this->A4->UseVisualStyleBackColor = true;
			this->A4->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// B4
			// 
			this->B4->Location = System::Drawing::Point(353, 150);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(49, 44);
			this->B4->TabIndex = 35;
			this->B4->UseVisualStyleBackColor = true;
			this->B4->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// B3
			// 
			this->B3->Location = System::Drawing::Point(296, 150);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(49, 44);
			this->B3->TabIndex = 48;
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// B5
			// 
			this->B5->Location = System::Drawing::Point(406, 150);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(49, 44);
			this->B5->TabIndex = 49;
			this->B5->UseVisualStyleBackColor = true;
			this->B5->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// C5
			// 
			this->C5->Location = System::Drawing::Point(406, 200);
			this->C5->Name = L"C5";
			this->C5->Size = System::Drawing::Size(49, 44);
			this->C5->TabIndex = 20;
			this->C5->UseVisualStyleBackColor = true;
			this->C5->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// D5
			// 
			this->D5->Location = System::Drawing::Point(406, 250);
			this->D5->Name = L"D5";
			this->D5->Size = System::Drawing::Size(49, 44);
			this->D5->TabIndex = 24;
			this->D5->UseVisualStyleBackColor = true;
			this->D5->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// D4
			// 
			this->D4->Location = System::Drawing::Point(351, 250);
			this->D4->Name = L"D4";
			this->D4->Size = System::Drawing::Size(49, 44);
			this->D4->TabIndex = 33;
			this->D4->UseVisualStyleBackColor = true;
			this->D4->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// E5
			// 
			this->E5->Location = System::Drawing::Point(406, 300);
			this->E5->Name = L"E5";
			this->E5->Size = System::Drawing::Size(49, 44);
			this->E5->TabIndex = 23;
			this->E5->UseVisualStyleBackColor = true;
			this->E5->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// E4
			// 
			this->E4->Location = System::Drawing::Point(351, 300);
			this->E4->Name = L"E4";
			this->E4->Size = System::Drawing::Size(49, 44);
			this->E4->TabIndex = 32;
			this->E4->UseVisualStyleBackColor = true;
			this->E4->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// numPlayersSelect
			// 
			this->numPlayersSelect->FormattingEnabled = true;
			this->numPlayersSelect->ItemHeight = 20;
			this->numPlayersSelect->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Single Player", L"Two Players", L"Computer Only" });
			this->numPlayersSelect->Location = System::Drawing::Point(499, 44);
			this->numPlayersSelect->Name = L"numPlayersSelect";
			this->numPlayersSelect->Size = System::Drawing::Size(129, 64);
			this->numPlayersSelect->TabIndex = 55;
			this->numPlayersSelect->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::getNumPlayers);
			// 
			// D3
			// 
			this->D3->Location = System::Drawing::Point(296, 250);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(49, 44);
			this->D3->TabIndex = 26;
			this->D3->UseVisualStyleBackColor = true;
			this->D3->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// E3
			// 
			this->E3->Location = System::Drawing::Point(296, 300);
			this->E3->Name = L"E3";
			this->E3->Size = System::Drawing::Size(49, 44);
			this->E3->TabIndex = 27;
			this->E3->UseVisualStyleBackColor = true;
			this->E3->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// E2
			// 
			this->E2->Location = System::Drawing::Point(241, 300);
			this->E2->Name = L"E2";
			this->E2->Size = System::Drawing::Size(49, 44);
			this->E2->TabIndex = 28;
			this->E2->UseVisualStyleBackColor = true;
			this->E2->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// D2
			// 
			this->D2->Location = System::Drawing::Point(241, 250);
			this->D2->Name = L"D2";
			this->D2->Size = System::Drawing::Size(49, 44);
			this->D2->TabIndex = 29;
			this->D2->UseVisualStyleBackColor = true;
			this->D2->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// C2
			// 
			this->C2->Location = System::Drawing::Point(241, 200);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(49, 44);
			this->C2->TabIndex = 30;
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// B2
			// 
			this->B2->Location = System::Drawing::Point(241, 150);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(49, 44);
			this->B2->TabIndex = 34;
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// C4
			// 
			this->C4->Location = System::Drawing::Point(353, 200);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(49, 44);
			this->C4->TabIndex = 40;
			this->C4->UseVisualStyleBackColor = true;
			this->C4->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// A5
			// 
			this->A5->Location = System::Drawing::Point(406, 100);
			this->A5->Name = L"A5";
			this->A5->Size = System::Drawing::Size(49, 44);
			this->A5->TabIndex = 36;
			this->A5->UseVisualStyleBackColor = true;
			this->A5->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// A3
			// 
			this->A3->Location = System::Drawing::Point(296, 100);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(49, 44);
			this->A3->TabIndex = 38;
			this->A3->UseVisualStyleBackColor = true;
			this->A3->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// A2
			// 
			this->A2->Location = System::Drawing::Point(241, 100);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(49, 44);
			this->A2->TabIndex = 39;
			this->A2->UseVisualStyleBackColor = true;
			this->A2->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(553, 405);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(75, 44);
			this->exitButton->TabIndex = 44;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &MyForm::exitClick);
			// 
			// restartButton
			// 
			this->restartButton->Location = System::Drawing::Point(553, 359);
			this->restartButton->Name = L"restartButton";
			this->restartButton->Size = System::Drawing::Size(74, 46);
			this->restartButton->TabIndex = 42;
			this->restartButton->Text = L"Restart";
			this->restartButton->UseVisualStyleBackColor = true;
			this->restartButton->Click += gcnew System::EventHandler(this, &MyForm::resetButton);
			// 
			// C1
			// 
			this->C1->Location = System::Drawing::Point(186, 200);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(49, 44);
			this->C1->TabIndex = 50;
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// B1
			// 
			this->B1->Location = System::Drawing::Point(186, 150);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(49, 44);
			this->B1->TabIndex = 51;
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// A1
			// 
			this->A1->Location = System::Drawing::Point(186, 100);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(49, 44);
			this->A1->TabIndex = 52;
			this->A1->UseVisualStyleBackColor = true;
			this->A1->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// D1
			// 
			this->D1->Location = System::Drawing::Point(186, 250);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(49, 44);
			this->D1->TabIndex = 53;
			this->D1->UseVisualStyleBackColor = true;
			this->D1->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// E1
			// 
			this->E1->Location = System::Drawing::Point(186, 300);
			this->E1->Name = L"E1";
			this->E1->Size = System::Drawing::Size(49, 44);
			this->E1->TabIndex = 54;
			this->E1->UseVisualStyleBackColor = true;
			this->E1->Click += gcnew System::EventHandler(this, &MyForm::buttonClick);
			// 
			// recordBox
			// 
			this->recordBox->Location = System::Drawing::Point(158, 350);
			this->recordBox->Multiline = true;
			this->recordBox->Name = L"recordBox";
			this->recordBox->ReadOnly = true;
			this->recordBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->recordBox->Size = System::Drawing::Size(334, 104);
			this->recordBox->TabIndex = 57;
			this->recordBox->Text = L"Records \r\n";
			this->recordBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(654, 466);
			this->Controls->Add(this->recordBox);
			this->Controls->Add(this->numPlayersSelect);
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
			this->Controls->Add(this->symbolSelector);
			this->Controls->Add(this->gameSelect);
			this->Controls->Add(this->symbolLabel);
			this->Controls->Add(this->numPlayersLabel);
			this->Controls->Add(this->GMlabel);
			this->Name = L"MyForm";
			this->Text = L"SOS game";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool winner;
		bool gameType;
		bool turn = true;
		String^ symbol;
		int numPlayers;
		String^ record;
		Button^ b;
		String^ simpGen;
		String^ num;
		unsigned int S, m;

//occurs when a button is clicked and places a players spot done
private: System::Void buttonClick(System::Object^ sender, System::EventArgs^ e) {
		b = safe_cast <Button^> (sender);
		b->Text = symbol;
		if (turn == true) {
			b->BackColor = Color::FromArgb(255, 58, 54);
			recordBox->AppendText(System::Environment::NewLine + " Player 1 placed an " + symbol + " on " + b->Name);

		}
		else {
			b->BackColor = Color::FromArgb(41, 106, 225);
			recordBox->AppendText(System::Environment::NewLine + " Player 2 placed an " + symbol + " on " + b->Name);
		}
		turn = !turn;
		b->Enabled = false;

		if (gameType == true) {
			checkForSimpleWinner();
		}
		else if (gameType == false) {
			if (!A1->Enabled && !A2->Enabled && !A3->Enabled && !A4->Enabled && !A5->Enabled &&
				!B1->Enabled && !B2->Enabled && !B3->Enabled && !B4->Enabled && !B5->Enabled &&
				!C1->Enabled && !C2->Enabled && !C3->Enabled && !C4->Enabled && !C5->Enabled &&
				!D1->Enabled && !D2->Enabled && !D3->Enabled && !D4->Enabled && !D5->Enabled &&
				!E1->Enabled && !E2->Enabled && !E3->Enabled && !E4->Enabled && !E5->Enabled) {
				checkForGeneralWinner();
			}
		}
		if (numPlayers == 3) {
			compMove();
		}
		if (numPlayers == 1){
			if(turn == false) {
				compMove();

			}
			
		}

}
//checks for a simple done
public: System::Void checkForSimpleWinner() {
		   //horizontal
		   //Row A
		    bool winner = false;
		   if ((A1->Text == "S") && (A2->Text == "O") && (A3->Text == "S") && (A1->BackColor == A2->BackColor) && (A2->BackColor == A3->BackColor) && (!A1->Enabled) && (!A2->Enabled) && (!A3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((A2->Text == "S") && (A3->Text == "O") && (A4->Text == "S") && (A2->BackColor == A3->BackColor) && (A3->BackColor == A4->BackColor) && (!A2->Enabled) && (!A3->Enabled) && (!A4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((A3->Text == "S") && (A4->Text == "O") && (A5->Text == "S") && (A3->BackColor == A4->BackColor) && (A4->BackColor == A5->BackColor) && (!A5->Enabled) && (!A3->Enabled) && (!A4->Enabled))
		   {
			   winner = true;
		   }
		   //Row B
		   else if ((B1->Text == "S") && (B2->Text == "O") && (B3->Text == "S") && (B1->BackColor == B2->BackColor) && (B2->BackColor == B3->BackColor) && (!B1->Enabled) && (!B2->Enabled) && (!B3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B2->Text == "S") && (B3->Text == "O") && (B4->Text == "S") && (B2->BackColor == B3->BackColor) && (B3->BackColor == B4->BackColor) && (!B2->Enabled) && (!B3->Enabled) && (!B4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B3->Text == "S") && (B4->Text == "O") && (B5->Text == "S") && (B3->BackColor == B4->BackColor) && (B4->BackColor == B5->BackColor) && (!B5->Enabled) && (!B3->Enabled) && (!B4->Enabled))
		   {
			   winner = true;
		   }
		   //Row C
		   else if ((C1->Text == "S") && (C2->Text == "O") && (C3->Text == "S") && (C1->BackColor == C2->BackColor) && (C2->BackColor == C3->BackColor) && (!C1->Enabled) && (!C2->Enabled) && (!C3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C2->Text == "S") && (C3->Text == "O") && (C4->Text == "S") && (C2->BackColor == C3->BackColor) && (C3->BackColor == C4->BackColor) && (!C2->Enabled) && (!C3->Enabled) && (!C4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C3->Text == "S") && (C4->Text == "O") && (C5->Text == "S") && (C3->BackColor == C4->BackColor) && (C4->BackColor == C5->BackColor) && (!C5->Enabled) && (!C3->Enabled) && (!C4->Enabled))
		   {
			   winner = true;
		   }
		   //Row D
		   else if ((D1->Text == "S") && (D2->Text == "O") && (D3->Text == "S") && (D1->BackColor == D2->BackColor) && (D2->BackColor == D3->BackColor) && (!D1->Enabled) && (!D2->Enabled) && (!D3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((D2->Text == "S") && (D3->Text == "O") && (D4->Text == "S") && (D2->BackColor == D3->BackColor) && (D3->BackColor == D4->BackColor) && (!D2->Enabled) && (!D3->Enabled) && (!D4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((D3->Text == "S") && (D4->Text == "O") && (D5->Text == "S") && (D3->BackColor == D4->BackColor) && (D4->BackColor == D5->BackColor) && (!D5->Enabled) && (!D3->Enabled) && (!D4->Enabled))
		   {
			   winner = true;
		   }
		   //Row E
		   else if ((E1->Text == "S") && (E2->Text == "O") && (E3->Text == "S") && (E1->BackColor == E2->BackColor) && (E2->BackColor == E3->BackColor) && (!E1->Enabled) && (!E2->Enabled) && (!E3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((E2->Text == "S") && (E3->Text == "O") && (E4->Text == "S") && (E2->BackColor == E3->BackColor) && (E3->BackColor == E4->BackColor) && (!E2->Enabled) && (!E3->Enabled) && (!E4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((E4->Text == "S") && (E2->Text == "O") && (E3->Text == "S") && (E3->BackColor == E4->BackColor) && (E4->BackColor == E5->BackColor) && (!E3->Enabled) && (!E4->Enabled) && (!E5->Enabled))
		   {
			   winner = true;
		   }
		   //vertical
		   //Colum 1
		   else if ((A1->Text == "S") && (B1->Text == "O") && (C1->Text == "S") && (A1->BackColor == B1->BackColor) && (B1->BackColor == C1->BackColor) && (!A1->Enabled) && (!B1->Enabled) && (!C1->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B1->Text == "S") && (C1->Text == "O") && (D1->Text == "S") && (B1->BackColor == C1->BackColor) && (C1->BackColor == D1->BackColor) && (!B1->Enabled) && (!C1->Enabled) && (!D1->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C1->Text == "S") && (D1->Text == "O") && (E1->Text == "S") && (C1->BackColor == D1->BackColor) && (D1->BackColor == E1->BackColor) && (!C1->Enabled) && (!D1->Enabled) && (!E1->Enabled))
		   {
			   winner = true;
		   }
		   //Colum 2
		   else if ((A2->Text == "S") && (B2->Text == "O") && (C2->Text == "S") && (A2->BackColor == B2->BackColor) && (B2->BackColor == C2->BackColor) && (!A2->Enabled) && (!B2->Enabled) && (!C2->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B2->Text == "S") && (C2->Text == "O") && (D2->Text == "S") && (B2->BackColor == C2->BackColor) && (C2->BackColor == D2->BackColor) && (!B2->Enabled) && (!C2->Enabled) && (!D2->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C2->Text == "S") && (D2->Text == "O") && (E2->Text == "S") && (C2->BackColor == D2->BackColor) && (D2->BackColor == E2->BackColor) && (!C2->Enabled) && (!D2->Enabled) && (!E2->Enabled))
		   {
			   winner = true;
		   }
		   //Colum 3
		   else if ((A3->Text == "S") && (B3->Text == "O") && (C3->Text == "S") && (A3->BackColor == B3->BackColor) && (B3->BackColor == C3->BackColor) && (!A3->Enabled) && (!B3->Enabled) && (!C3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B3->Text == "S") && (C3->Text == "O") && (D3->Text == "S") && (B3->BackColor == C3->BackColor) && (C3->BackColor == D3->BackColor) && (!B3->Enabled) && (!C3->Enabled) && (!D3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C3->Text == "S") && (D3->Text == "O") && (E3->Text == "S") && (C3->BackColor == D3->BackColor) && (D3->BackColor == E3->BackColor) && (!C3->Enabled) && (!D3->Enabled) && (!E3->Enabled))
		   {
			   winner = true;
		   }
		   //Colum 4
		   else if ((A4->Text == "S") && (B4->Text == "O") && (C4->Text == "S") && (A4->BackColor == B4->BackColor) && (B4->BackColor == C4->BackColor) && (!A4->Enabled) && (!B4->Enabled) && (!C4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B4->Text == "S") && (C4->Text == "O") && (D4->Text == "S") && (B4->BackColor == C4->BackColor) && (C4->BackColor == D4->BackColor) && (!B4->Enabled) && (!C4->Enabled) && (!D4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C4->Text == "S") && (D4->Text == "O") && (E4->Text == "S") && (C4->BackColor == D4->BackColor) && (D4->BackColor == E4->BackColor) && (!C4->Enabled) && (!D4->Enabled) && (!E4->Enabled))
		   {
			   winner = true;
		   }
		   //Colum 5
		   else if ((A5->Text == "S") && (B5->Text == "O") && (C5->Text == "S") && (A5->BackColor == B5->BackColor) && (B5->BackColor == C5->BackColor) && (!A5->Enabled) && (!B5->Enabled) && (!C5->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B5->Text == "S") && (C5->Text == "O") && (D5->Text == "S") && (B5->BackColor == C5->BackColor) && (C5->BackColor == D5->BackColor) && (!B5->Enabled) && (!C5->Enabled) && (!D5->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C5->Text == "S") && (D5->Text == "O") && (E5->Text == "S") && (C5->BackColor == D5->BackColor) && (D5->BackColor == E5->BackColor) && (!C5->Enabled) && (!D5->Enabled) && (!E5->Enabled))
		   {
			   winner = true;
		   }
		   //Diagnal
		   else if ((A1->Text == "S") && (B2->Text == "O") && (C3->Text == "S") && (A1->BackColor == B2->BackColor) && (B2->BackColor == C3->BackColor) && (!A1->Enabled) && (!B2->Enabled) && (!C3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B2->Text == "S") && (C3->Text == "O") && (D4->Text == "S") && (B2->BackColor == C3->BackColor) && (C3->BackColor == D4->BackColor) && (!B2->Enabled) && (!C3->Enabled) && (!D4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C3->Text == "S") && (D4->Text == "O") && (E5->Text == "S") && (C3->BackColor == D4->BackColor) && (D4->BackColor == E5->BackColor) && (!C3->Enabled) && (!D4->Enabled) && (!E5->Enabled))
		   {
			   winner = true;
		   }
		   else if ((A2->Text == "S") && (B3->Text == "O") && (C4->Text == "S") && (A2->BackColor == B3->BackColor) && (B3->BackColor == C4->BackColor) && (!A2->Enabled) && (!B3->Enabled) && (!C4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B3->Text == "S") && (C4->Text == "O") && (D5->Text == "S") && (B3->BackColor == C4->BackColor) && (C4->BackColor == D5->BackColor) && (!B3->Enabled) && (!C4->Enabled) && (!D5->Enabled))
		   {
			   winner = true;
		   }
		   else if ((A3->Text == "S") && (B4->Text == "O") && (C5->Text == "S") && (A3->BackColor == B4->BackColor) && (B4->BackColor == C5->BackColor) && (!A3->Enabled) && (!B4->Enabled) && (!C5->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B1->Text == "S") && (C2->Text == "O") && (D3->Text == "S") && (B1->BackColor == C2->BackColor) && (C2->BackColor == D3->BackColor) && (!B1->Enabled) && (!C2->Enabled) && (!D3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C2->Text == "S") && (D3->Text == "O") && (E4->Text == "S") && (C2->BackColor == D3->BackColor) && (D3->BackColor == E4->BackColor) && (!C2->Enabled) && (!D3->Enabled) && (!E4->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C1->Text == "S") && (D2->Text == "O") && (E3->Text == "S") && (C1->BackColor == D2->BackColor) && (D2->BackColor == E3->BackColor) && (!C1->Enabled) && (!D2->Enabled) && (!E3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((A3->Text == "S") && (B2->Text == "O") && (C1->Text == "S") && (A3->BackColor == B2->BackColor) && (B2->BackColor == C1->BackColor) && (!A3->Enabled) && (!B2->Enabled) && (!C1->Enabled))
		   {
			   winner = true;
		   }
		   else if ((A4->Text == "S") && (B3->Text == "O") && (C2->Text == "S") && (A4->BackColor == B3->BackColor) && (B3->BackColor == C2->BackColor) && (!A4->Enabled) && (!B3->Enabled) && (!C2->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B3->Text == "S") && (C2->Text == "O") && (D1->Text == "S") && (B3->BackColor == C2->BackColor) && (C2->BackColor == D1->BackColor) && (!B3->Enabled) && (!C2->Enabled) && (!D1->Enabled))
		   {
			   winner = true;
		   }
		   else if ((A5->Text == "S") && (B4->Text == "O") && (C3->Text == "S") && (A5->BackColor == B4->BackColor) && (B4->BackColor == C3->BackColor) && (!A5->Enabled) && (!B4->Enabled) && (!C3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B4->Text == "S") && (C3->Text == "O") && (D2->Text == "S") && (B4->BackColor == C3->BackColor) && (C3->BackColor == D2->BackColor) && (!B4->Enabled) && (!C3->Enabled) && (!D2->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C3->Text == "S") && (D2->Text == "O") && (E1->Text == "S") && (C3->BackColor == D2->BackColor) && (D2->BackColor == E1->BackColor) && (!C3->Enabled) && (!D2->Enabled) && (!E1->Enabled))
		   {
			   winner = true;
		   }
		   else if ((B5->Text == "S") && (C4->Text == "O") && (D3->Text == "S") && (B5->BackColor == C4->BackColor) && (C4->BackColor == D3->BackColor) && (!B5->Enabled) && (!C4->Enabled) && (!D3->Enabled))
		   {
			   winner = true;
		   }
		   else if ((C4->Text == "S") && (D3->Text == "O") && (E2->Text == "S") && (C4->BackColor == D3->BackColor) && (D3->BackColor == E2->BackColor) && (!C4->Enabled) && (!D3->Enabled) && (!E2->Enabled))
		   {
		   winner = true;
			   }
		   
		   else if ((C5->Text == "S") && (D4->Text == "O") && (E3->Text == "S") && (C5->BackColor == D4->BackColor) && (D4->BackColor == E3->BackColor) && (!C5->Enabled) && (!D4->Enabled) && (!E3->Enabled))
		   {
			   winner = true;

		   }
		   else
			{
		   winner = false;
			}
			
			if (!A1->Enabled && !A2->Enabled && !A3->Enabled && !A4->Enabled && !A5->Enabled &&
				!B1->Enabled && !B2->Enabled && !B3->Enabled && !B4->Enabled && !B5->Enabled &&
				!C1->Enabled && !C2->Enabled && !C3->Enabled && !C4->Enabled && !C5->Enabled &&
				!D1->Enabled && !D2->Enabled && !D3->Enabled && !D4->Enabled && !D5->Enabled &&
				!E1->Enabled && !E2->Enabled && !E3->Enabled && !E4->Enabled && !E5->Enabled && 
				winner == false) {
				MessageBox::Show("Draw Restart or exit");
			}

		   if (winner == true) {
			   A1->Enabled = false;
			   A2->Enabled = false;
			   A3->Enabled = false;
			   A4->Enabled = false;
			   A5->Enabled = false;

			   B1->Enabled = false;
			   B2->Enabled = false;
			   B3->Enabled = false;
			   B4->Enabled = false;
			   B5->Enabled = false;

			   C1->Enabled = false;
			   C2->Enabled = false;
			   C3->Enabled = false;
			   C5->Enabled = false;

			   D1->Enabled = false;
			   D2->Enabled = false;
			   D3->Enabled = false;
			   D4->Enabled = false;
			   D5->Enabled = false;

			   E1->Enabled = false;
			   E2->Enabled = false;
			   E3->Enabled = false;
			   E4->Enabled = false;
			   E5->Enabled = false;
			   if (turn) {
				   MessageBox::Show("Blue wins\nRestart or exit");
			   }
			   else {
				   MessageBox::Show("Red wins\nRestart or exit");
			   }
			   
		   }
	}//end check simple winner
//checks for a general winner done
public: System::Void checkForGeneralWinner() {
	int P1 = 0;
	int P2 = 0;
	if ((A1->Text == "S") && (A2->Text == "O") && (A3->Text == "S") && (A1->BackColor == A2->BackColor) && (A2->BackColor == A3->BackColor) && (!A1->Enabled) && (!A2->Enabled) && (!A3->Enabled))
	{
		if (A3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (A3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((A2->Text == "S") && (A3->Text == "O") && (A4->Text == "S") && (A2->BackColor == A3->BackColor) && (A3->BackColor == A4->BackColor) && (!A2->Enabled) && (!A3->Enabled) && (!A4->Enabled))
	{
		if (A3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (A3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((A3->Text == "S") && (A4->Text == "O") && (A5->Text == "S") && (A3->BackColor == A4->BackColor) && (A4->BackColor == A5->BackColor) && (!A5->Enabled) && (!A3->Enabled) && (!A4->Enabled))
	{
		if (A3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (A3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	//Row B
	if ((B1->Text == "S") && (B2->Text == "O") && (B3->Text == "S") && (B1->BackColor == B2->BackColor) && (B2->BackColor == B3->BackColor) && (!B1->Enabled) && (!B2->Enabled) && (!B3->Enabled))
	{
		if (B3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (B3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((B2->Text == "S") && (B3->Text == "O") && (B4->Text == "S") && (B2->BackColor == B3->BackColor) && (B3->BackColor == B4->BackColor) && (!B2->Enabled) && (!B3->Enabled) && (!B4->Enabled))
	{
		if (B3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (B3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((B3->Text == "S") && (B4->Text == "O") && (B5->Text == "S") && (B3->BackColor == B4->BackColor) && (B4->BackColor == B5->BackColor) && (!B5->Enabled) && (!B3->Enabled) && (!B4->Enabled))
	{
		if (B3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (B3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	//Row C
	if ((C1->Text == "S") && (C2->Text == "O") && (C3->Text == "S") && (C1->BackColor == C2->BackColor) && (C2->BackColor == C3->BackColor) && (!C1->Enabled) && (!C2->Enabled) && (!C3->Enabled))
	{
		if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((C2->Text == "S") && (C3->Text == "O") && (C4->Text == "S") && (C2->BackColor == C3->BackColor) && (C3->BackColor == C4->BackColor) && (!C2->Enabled) && (!C3->Enabled) && (!C4->Enabled))
	{
		if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((C3->Text == "S") && (C4->Text == "O") && (C5->Text == "S") && (C3->BackColor == C4->BackColor) && (C4->BackColor == C5->BackColor) && (!C5->Enabled) && (!C3->Enabled) && (!C4->Enabled))
	{
		if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	//Row D
	if ((D1->Text == "S") && (D2->Text == "O") && (D3->Text == "S") && (D1->BackColor == D2->BackColor) && (D2->BackColor == D3->BackColor) && (!D1->Enabled) && (!D2->Enabled) && (!D3->Enabled))
	{
		if (D3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (D3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((D2->Text == "S") && (D3->Text == "O") && (D4->Text == "S") && (D2->BackColor == D3->BackColor) && (D3->BackColor == D4->BackColor) && (!D2->Enabled) && (!D3->Enabled) && (!D4->Enabled))
	{
		if (D3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (D3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((D3->Text == "S") && (D4->Text == "O") && (D5->Text == "S") && (D3->BackColor == D4->BackColor) && (D4->BackColor == D5->BackColor) && (!D5->Enabled) && (!D3->Enabled) && (!D4->Enabled))
	{
		if (D3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (D3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	//Row E
	if ((E1->Text == "S") && (E2->Text == "O") && (E3->Text == "S") && (E1->BackColor == E2->BackColor) && (E2->BackColor == E3->BackColor) && (!E1->Enabled) && (!E2->Enabled) && (!E3->Enabled))
	{
		if (E3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (E3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((E2->Text == "S") && (E3->Text == "O") && (E4->Text == "S") && (E2->BackColor == E3->BackColor) && (E3->BackColor == E4->BackColor) && (!E2->Enabled) && (!E3->Enabled) && (!E4->Enabled))
	{
		if (E3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (E3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((E4->Text == "S") && (E2->Text == "O") && (E3->Text == "S") && (E3->BackColor == E4->BackColor) && (E4->BackColor == E5->BackColor) && (!E3->Enabled) && (!E4->Enabled) && (!E5->Enabled))
	{
		if (E3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (E3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	//vertical
	//Colum 1
	if ((A1->Text == "S") && (B1->Text == "O") && (C1->Text == "S") && (A1->BackColor == B1->BackColor) && (B1->BackColor == C1->BackColor) && (!A1->Enabled) && (!B1->Enabled) && (!C1->Enabled))
	{
		if (C1->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C1->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((B1->Text == "S") && (C1->Text == "O") && (D1->Text == "S") && (B1->BackColor == C1->BackColor) && (C1->BackColor == D1->BackColor) && (!B1->Enabled) && (!C1->Enabled) && (!D1->Enabled))
	{
		if (C1->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C1->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((C1->Text == "S") && (D1->Text == "O") && (E1->Text == "S") && (C1->BackColor == D1->BackColor) && (D1->BackColor == E1->BackColor) && (!C1->Enabled) && (!D1->Enabled) && (!E1->Enabled))
	{
		if (C1->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C1->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	//Colum 2
	if ((A2->Text == "S") && (B2->Text == "O") && (C2->Text == "S") && (A2->BackColor == B2->BackColor) && (B2->BackColor == C2->BackColor) && (!A2->Enabled) && (!B2->Enabled) && (!C2->Enabled))
	{
		if (C2->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C2->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((B2->Text == "S") && (C2->Text == "O") && (D2->Text == "S") && (B2->BackColor == C2->BackColor) && (C2->BackColor == D2->BackColor) && (!B2->Enabled) && (!C2->Enabled) && (!D2->Enabled))
	{
		if (C2->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C2->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((C2->Text == "S") && (D2->Text == "O") && (E2->Text == "S") && (C2->BackColor == D2->BackColor) && (D2->BackColor == E2->BackColor) && (!C2->Enabled) && (!D2->Enabled) && (!E2->Enabled))
	{
		if (C2->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C2->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	//Colum 3
	if ((A3->Text == "S") && (B3->Text == "O") && (C3->Text == "S") && (A3->BackColor == B3->BackColor) && (B3->BackColor == C3->BackColor) && (!A3->Enabled) && (!B3->Enabled) && (!C3->Enabled))
	{
		if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((B3->Text == "S") && (C3->Text == "O") && (D3->Text == "S") && (B3->BackColor == C3->BackColor) && (C3->BackColor == D3->BackColor) && (!B3->Enabled) && (!C3->Enabled) && (!D3->Enabled))
	{
		if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
	if ((C3->Text == "S") && (D3->Text == "O") && (E3->Text == "S") && (C3->BackColor == D3->BackColor) && (D3->BackColor == E3->BackColor) && (!C3->Enabled) && (!D3->Enabled) && (!E3->Enabled))
	{
	if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	//Colum 4
	if ((A4->Text == "S") && (B4->Text == "O") && (C4->Text == "S") && (A4->BackColor == B4->BackColor) && (B4->BackColor == C4->BackColor) && (!A4->Enabled) && (!B4->Enabled) && (!C4->Enabled))
	{
	if (C4->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C4->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((B4->Text == "S") && (C4->Text == "O") && (D4->Text == "S") && (B4->BackColor == C4->BackColor) && (C4->BackColor == D4->BackColor) && (!B4->Enabled) && (!C4->Enabled) && (!D4->Enabled))
	{
	if (C4->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C4->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((C4->Text == "S") && (D4->Text == "O") && (E4->Text == "S") && (C4->BackColor == D4->BackColor) && (D4->BackColor == E4->BackColor) && (!C4->Enabled) && (!D4->Enabled) && (!E4->Enabled))
	{
	if (C4->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C4->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	//Colum 5
	if ((A5->Text == "S") && (B5->Text == "O") && (C5->Text == "S") && (A5->BackColor == B5->BackColor) && (B5->BackColor == C5->BackColor) && (!A5->Enabled) && (!B5->Enabled) && (!C5->Enabled))
	{
	if (C5->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C5->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((B5->Text == "S") && (C5->Text == "O") && (D5->Text == "S") && (B5->BackColor == C5->BackColor) && (C5->BackColor == D5->BackColor) && (!B5->Enabled) && (!C5->Enabled) && (!D5->Enabled))
	{
	if (C5->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C5->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((C5->Text == "S") && (D5->Text == "O") && (E5->Text == "S") && (C5->BackColor == D5->BackColor) && (D5->BackColor == E5->BackColor) && (!C5->Enabled) && (!D5->Enabled) && (!E5->Enabled))
	{
	if (C5->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C5->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	//Diagnal
	if ((A1->Text == "S") && (B2->Text == "O") && (C3->Text == "S") && (A1->BackColor == B2->BackColor) && (B2->BackColor == C3->BackColor) && (!A1->Enabled) && (!B2->Enabled) && (!C3->Enabled))
	{
	if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((B2->Text == "S") && (C3->Text == "O") && (D4->Text == "S") && (B2->BackColor == C3->BackColor) && (C3->BackColor == D4->BackColor) && (!B2->Enabled) && (!C3->Enabled) && (!D4->Enabled))
	{
	if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((C3->Text == "S") && (D4->Text == "O") && (E5->Text == "S") && (C3->BackColor == D4->BackColor) && (D4->BackColor == E5->BackColor) && (!C3->Enabled) && (!D4->Enabled) && (!E5->Enabled))
	{
	if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((A2->Text == "S") && (B3->Text == "O") && (C4->Text == "S") && (A2->BackColor == B3->BackColor) && (B3->BackColor == C4->BackColor) && (!A2->Enabled) && (!B3->Enabled) && (!C4->Enabled))
	{
	if (B3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (B3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((B3->Text == "S") && (C4->Text == "O") && (D5->Text == "S") && (B3->BackColor == C4->BackColor) && (C4->BackColor == D5->BackColor) && (!B3->Enabled) && (!C4->Enabled) && (!D5->Enabled))
	{
	if (B3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (B3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((A3->Text == "S") && (B4->Text == "O") && (C5->Text == "S") && (A3->BackColor == B4->BackColor) && (B4->BackColor == C5->BackColor) && (!A3->Enabled) && (!B4->Enabled) && (!C5->Enabled))
	{
	if (A3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (A3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((B1->Text == "S") && (C2->Text == "O") && (D3->Text == "S") && (B1->BackColor == C2->BackColor) && (C2->BackColor == D3->BackColor) && (!B1->Enabled) && (!C2->Enabled) && (!D3->Enabled))
	{
	if (D3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (D3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((C2->Text == "S") && (D3->Text == "O") && (E4->Text == "S") && (C2->BackColor == D3->BackColor) && (D3->BackColor == E4->BackColor) && (!C2->Enabled) && (!D3->Enabled) && (!E4->Enabled))
	{
	if (D3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (D3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((C1->Text == "S") && (D2->Text == "O") && (E3->Text == "S") && (C1->BackColor == D2->BackColor) && (D2->BackColor == E3->BackColor) && (!C1->Enabled) && (!D2->Enabled) && (!E3->Enabled))
	{
	if (D2->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (D2->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((A3->Text == "S") && (B2->Text == "O") && (C1->Text == "S") && (A3->BackColor == B2->BackColor) && (B2->BackColor == C1->BackColor) && (!A3->Enabled) && (!B2->Enabled) && (!C1->Enabled))
	{
	if (A3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (A3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((A4->Text == "S") && (B3->Text == "O") && (C2->Text == "S") && (A4->BackColor == B3->BackColor) && (B3->BackColor == C2->BackColor) && (!A4->Enabled) && (!B3->Enabled) && (!C2->Enabled))
	{
	if (B3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (B3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((B3->Text == "S") && (C2->Text == "O") && (D1->Text == "S") && (B3->BackColor == C2->BackColor) && (C2->BackColor == D1->BackColor) && (!B3->Enabled) && (!C2->Enabled) && (!D1->Enabled))
	{
	if (D1->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (D1->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((A5->Text == "S") && (B4->Text == "O") && (C3->Text == "S") && (A5->BackColor == B4->BackColor) && (B4->BackColor == C3->BackColor) && (!A5->Enabled) && (!B4->Enabled) && (!C3->Enabled))
	{
	if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((B4->Text == "S") && (C3->Text == "O") && (D2->Text == "S") && (B4->BackColor == C3->BackColor) && (C3->BackColor == D2->BackColor) && (!B4->Enabled) && (!C3->Enabled) && (!D2->Enabled))
	{
	if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((C3->Text == "S") && (D2->Text == "O") && (E1->Text == "S") && (C3->BackColor == D2->BackColor) && (D2->BackColor == E1->BackColor) && (!C3->Enabled) && (!D2->Enabled) && (!E1->Enabled))
	{
	if (C3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (C3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((B5->Text == "S") && (C4->Text == "O") && (D3->Text == "S") && (B5->BackColor == C4->BackColor) && (C4->BackColor == D3->BackColor) && (!B5->Enabled) && (!C4->Enabled) && (!D3->Enabled))
	{
	if (D3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (D3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}
	if ((C4->Text == "S") && (D3->Text == "O") && (E2->Text == "S") && (C4->BackColor == D3->BackColor) && (D3->BackColor == E2->BackColor) && (!C4->Enabled) && (!D3->Enabled) && (!E2->Enabled))
	{
	if (D3->BackColor == Color::FromArgb(255, 58, 54)) {
		P1++;
	}
	if (D3->BackColor == Color::FromArgb(41, 106, 225)) {
		P2++;
	}
	}

	if ((C5->Text == "S") && (D4->Text == "O") && (E3->Text == "S") && (C5->BackColor == D4->BackColor) && (D4->BackColor == E3->BackColor) && (!C5->Enabled) && (!D4->Enabled) && (!E3->Enabled))
	{
		if (E3->BackColor == Color::FromArgb(255, 58, 54)) {
			P1++;
		}
		if (E3->BackColor == Color::FromArgb(41, 106, 225)) {
			P2++;
		}
	}
		  if (P1 == P2) {
			  MessageBox::Show("Player 1:  " + P1 + "\nPlayer 2:  " + P2 + "\nDraw, No one wins");
		  }
		  else if (P2 > P1) {
			  MessageBox::Show("Player 1:  " + P1 + "\nPlayer 2:  " + P2 + "\nBlue wins");
		   }
		  else if (P1 > P2) {
			  MessageBox::Show("Player 1:  " + P1 + "\nPlayer 2:  " + P2 + "\nRed wins");
		  }

	  }//end check general winner
//exits the application done
private: System::Void exitClick(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to exit?", "Exit",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
//resets the baord for the the next game done
private: System::Void resetButton(System::Object^ sender, System::EventArgs^ e) {
	//Dis able all buttons and reset score
	
	turn = true;

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

	recordBox->ResetText();
	recordBox->AppendText("Records");
}
//gets the symbol from the user done
private: System::Void symbolSelected(System::Object^ sender, System::EventArgs^ e) {
	symbol = symbolSelector->SelectedItem->ToString();
}
//gets the game type done
private: System::Void gameTypeSelector(System::Object^ sender, System::EventArgs^ e) {
	simpGen = gameSelect->SelectedItem->ToString();

	if (simpGen == "Simple") {
		gameType = true;
	}
	else if (simpGen == "General") {
		gameType = false;
	}

}
//num payers Done
private: System::Void getNumPlayers(System::Object^ sender, System::EventArgs^ e) {
		num = numPlayersSelect->SelectedItem->ToString();
		
		if (num == "Single Player") {
			numPlayers = 1;
			MessageBox::Show("Player 1 (Red) will start then Computer (Blue), press OK to continue");
			restartButton->PerformClick();
			//every other click needs to be compMove()
		}
		else if (num == "Two Players") {
			numPlayers = 2;
			MessageBox::Show("Player 1 (Red) will start then Player 2 (Blue), press OK to continue");
			restartButton->PerformClick();
			//button click like normal 
		}
		else if (num == "Computer Only") {
			numPlayers = 3;
			MessageBox::Show("Computer 1 (Red) will start then Computer 2 (Blue), press OK to continue");
			restartButton->PerformClick();
			compMove();
			//every click needs to be compMove()
	}

}
//implement creating and playing comp
private: System::Void compMove() {
	if (numPlayers == 3) {
		findOS();
		findSS();
		findSquare();
	}
	 if (numPlayers == 1 && turn == false) {
		 findSquare();
				
	}
}
//implement pressing the button for the comp player
private: System::Void findSquare() {
	S = (rand() % 25) + 1;
	m = (rand() % 2) + 1;

	if (m == 1) {
		symbol = "S";
	}
	else {
		symbol = "O";
	}

	switch (S) {
	case 1:
		if (A1->Enabled) {
			A1->PerformClick();

		}
		else {
			findSquare();
		}
		break;

	case 2:
		if (A2->Enabled) {
			A2->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 3:
		if (A3->Enabled) {
			A3->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 4:
		if (A4->Enabled) {
			A4->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 5:
		if (A5->Enabled) {
			A5->PerformClick();
		}
		else {
			findSquare();
		}
		break;


	case 6:
		if (B1->Enabled) {
			B1->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 7:
		if (B2->Enabled) {
			B2->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 8:
		if (B3->Enabled) {
			B3->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 9:
		if (B4->Enabled) {
			B4->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 10:
		if (B5->Enabled) {
			B5->PerformClick();
		}
		else {
			findSquare();
		}
		break;


	case 11:
		if (C1->Enabled) {
			C1->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 12:
		if (C2->Enabled) {
			C2->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 13:
		if (C3->Enabled) {
			C3->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 14:
		if (C4->Enabled) {
			C4->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 15:
		if (C5->Enabled) {
			C5->PerformClick();
		}
		else {
			findSquare();
		}
		break;


	case 16:
		if (D1->Enabled) {
			D1->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 17:
		if (D2->Enabled) {
			D2->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 18:
		if (D3->Enabled) {
			D3->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 19:
		if (D4->Enabled) {
			D4->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 20:
		if (D5->Enabled) {
			D5->PerformClick();
		}
		else {
			findSquare();
		}
		break;


	case 21:
		if (E1->Enabled) {
			E1->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 22:
		if (E2->Enabled) {
			E2->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 23:
		if (E3->Enabled) {
			E3->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 24:
		if (E4->Enabled) {
			E4->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	case 25:
		if (E5->Enabled) {
			E5->PerformClick();
		}
		else {
			findSquare();
		}
		break;

	default:
		if ((numPlayers == 1 && turn == false) || (numPlayers == 3)) {
			compMove();
		}
	}
}
private: System::Void findOS() {

	if ((A2->Text == "O") && (A3->Text == "S"))
	{
		symbol = "S";
		A1->PerformClick();
	}
	else if ((A3->Text == "O") && (A4->Text == "S"))
	{
		symbol = "S";
		A2->PerformClick();
	}
	else if ((A4->Text == "O") && (A5->Text == "S"))
	{
		symbol = "S";
		A3->PerformClick();
	}
	//Row B
	else if ((B2->Text == "O") && (B3->Text == "S"))
	{
		symbol = "S";
		B1->PerformClick();
	}
	else if ((B3->Text == "O") && (B4->Text == "S"))
	{
		symbol = "S";
		B2->PerformClick();
	}
	else if ((B4->Text == "O") && (B5->Text == "S"))
	{
		symbol = "S";
		B3->PerformClick();
	}
	//Row C
	else if ((C2->Text == "O") && (C3->Text == "S"))
	{
		symbol = "S";
		C1->PerformClick();
	}
	else if ((C3->Text == "O") && (C4->Text == "S"))
	{
		symbol = "S";
		C2->PerformClick();
	}
	else if ((C4->Text == "O") && (C5->Text == "S"))
	{
		symbol = "S";
		C3->PerformClick();
	}
	//Row D
	else if ((D2->Text == "O") && (D3->Text == "S"))
	{
		symbol = "S";
		D1->PerformClick();
	}
	else if ((D3->Text == "O") && (D4->Text == "S"))
	{
		symbol = "S";
		D2->PerformClick();
	}
	else if ((D4->Text == "O") && (D5->Text == "S"))
	{
		symbol = "S";
		D3->PerformClick();
	}
	//Row E
	else if ((E2->Text == "O") && (E3->Text == "S"))
	{
		symbol = "S";
		E1->PerformClick();
	}
	else if ((E3->Text == "O") && (E4->Text == "S"))
	{
		symbol = "S";
		E2->PerformClick();
	}
	else if ((E4->Text == "O") && (E5->Text == "S"))
	{
		symbol = "S";
		E3->PerformClick();
	}
	//vertical
	//Colum 1
	else if ((B1->Text == "O") && (C1->Text == "S"))
	{
		symbol = "S";
		A1->PerformClick();
	}
	else if ((C1->Text == "O") && (D1->Text == "S"))
	{
		symbol = "S";
		B1->PerformClick();
	}
	else if ((D1->Text == "O") && (E1->Text == "S"))
	{
		symbol = "S";
		C1->PerformClick();
	}
	//Colum 2
	else if ((B2->Text == "O") && (C2->Text == "S"))
	{
		symbol = "S";
		A2->PerformClick();
	}
	else if ((C2->Text == "O") && (D2->Text == "S"))
	{
		symbol = "S";
		B2->PerformClick();
	}
	else if ((D2->Text == "O") && (E2->Text == "S"))
	{
		symbol = "S";
		C2->PerformClick();
	}
	//Colum 3
	else if ((B3->Text == "O") && (C3->Text == "S"))
	{
		symbol = "S";
		A3->PerformClick();
	}
	else if ((C3->Text == "O") && (D3->Text == "S"))
	{
		symbol = "S";
		B3->PerformClick();
	}
	else if ((D3->Text == "O") && (E3->Text == "S"))
	{
		symbol = "S";
		C3->PerformClick();
	}
	//Colum 4
	else if ((B4->Text == "O") && (C4->Text == "S"))
	{
		symbol = "S";
		A4->PerformClick();
	}
	else if ((C4->Text == "O") && (D4->Text == "S"))
	{
		symbol = "S";
		B4->PerformClick();
	}
	else if ((D4->Text == "O") && (E4->Text == "S"))
	{
		symbol = "S";
		C1->PerformClick();
	}
	//Colum 5
	else if ((B5->Text == "O") && (C5->Text == "S"))
	{
		symbol = "S";
		A5->PerformClick();
	}
	else if ((C5->Text == "O") && (E5->Text == "S"))
	{
		symbol = "S";
		B5->PerformClick();
	}
	else if ((D5->Text == "O") && (E5->Text == "S"))
	{
		symbol = "S";
		C5->PerformClick();
	}
	//Diagnal
	else if ((B2->Text == "O") && (C3->Text == "S"))
	{
		symbol = "S";
		A1->PerformClick();
	}
	else if ((C3->Text == "O") && (D4->Text == "S"))
	{
		symbol = "S";
		B2->PerformClick();
	}
	else if ((D4->Text == "O") && (E5->Text == "S"))
	{
		symbol = "S";
		C3->PerformClick();
	}
	else if ((B3->Text == "O") && (C4->Text == "S"))
	{
		symbol = "S";
		A2->PerformClick();
	}
	else if ((C4->Text == "O") && (D5->Text == "S"))
	{
		symbol = "S";
		B3->PerformClick();
	}
	else if ((B4->Text == "O") && (C5->Text == "S"))
	{
		symbol = "S";
		A5->PerformClick();
	}
	else if ((C2->Text == "O") && (D3->Text == "S"))
	{
		symbol = "S";
		B1->PerformClick();
	}
	else if ((D3->Text == "O") && (E4->Text == "S"))
	{
		symbol = "S";
		C2->PerformClick();
	}
	else if ((D2->Text == "O") && (E3->Text == "S"))
	{
		symbol = "S";
		C1->PerformClick();
	}
	else if ((B2->Text == "O") && (C1->Text == "S"))
	{
		symbol = "S";
		A3->PerformClick();
	}
	else if ((B3->Text == "O") && (C2->Text == "S"))
	{
		symbol = "S";
		A4->PerformClick();
	}
	else if ((C2->Text == "O") && (D1->Text == "S")) 
	{
		symbol = "S";
		B3->PerformClick();
	}
	else if ((B4->Text == "O") && (C3->Text == "S"))
	{
		symbol = "S";
		A5->PerformClick();
	}
	else if ((C3->Text == "O") && (D2->Text == "S"))
	{
		symbol = "S";
		E1->PerformClick();
	}
	else if ((D4->Text == "O") && (E5->Text == "S"))
	{
		symbol = "S";
		C3->PerformClick();
	}
	else if ((C4->Text == "O") && (D3->Text == "S"))
	{
		symbol = "S";
		B5->PerformClick();
	}
	else if ((D3->Text == "O") && (E2->Text == "S"))
	{
		symbol = "S";
		C4->PerformClick();
	}

	else if ((D4->Text == "O") && (E3->Text == "S"))
	{
		symbol = "S";
		C5->PerformClick();
	}
}
private: System::Void findSS() {
	if ((A1->Text == "S") && (A3->Text == "S"))
	{
		symbol = "O";
		A2->PerformClick();
	}
	else if ((A2->Text == "S") && (A4->Text == "S"))
	{
		symbol = "O";
		A3->PerformClick();
	}
	else if ((A3->Text == "S") && (A5->Text == "S"))
	{
		symbol = "O";
		A4->PerformClick();
	}
	//Row B
	else if ((B1->Text == "S") && (B3->Text == "S"))
	{
		symbol = "O";
		B2->PerformClick();
	}
	else if ((B2->Text == "S") && (B4->Text == "S"))
	{
		symbol = "O";
		B3->PerformClick();
	}
	else if ((B3->Text == "S") && (B5->Text == "S"))
	{
		symbol = "O";
		B4->PerformClick();
	}
	//Row C
	else if ((C1->Text == "S") && (C3->Text == "S"))
	{
		symbol = "O";
		C2->PerformClick();
	}
	else if ((C2->Text == "S") && (C4->Text == "S"))
	{
		symbol = "O";
		C3->PerformClick();
	}
	else if ((C3->Text == "S") && (C5->Text == "S"))
	{
		symbol = "O";
		C4->PerformClick();
	}
	//Row D
	else if ((D1->Text == "S") && (D3->Text == "S"))
	{
		symbol = "O";
		D2->PerformClick();
	}
	else if ((D2->Text == "S") && (D4->Text == "S"))
	{
		symbol = "O";
		D3->PerformClick();
	}
	else if ((D3->Text == "S") && (D5->Text == "S"))
	{
		symbol = "O";
		D4->PerformClick();
	}
	//Row E
	else if ((E1->Text == "S") && (E3->Text == "S"))
	{
		symbol = "O";
		E2->PerformClick();
	}
	else if ((E2->Text == "S") && (E4->Text == "S"))
	{
		symbol = "O";
		E3->PerformClick();
	}
	else if ((E3->Text == "S") && (E5->Text == "S"))
	{
		symbol = "O";
		E4->PerformClick();
	}
	//Colum 1
	else if ((A1->Text == "S") && (C1->Text == "S"))
	{
		symbol = "O";
		B1->PerformClick();
	}
	else if ((B1->Text == "S") && (D1->Text == "S"))
	{
		symbol = "O";
		C1->PerformClick();
	}
	else if ((C1->Text == "S") && (E1->Text == "S"))
	{
		symbol = "O";
		D1->PerformClick();
	}
	//Colum 2
	else if ((A2->Text == "S") && (C2->Text == "S"))
	{
		symbol = "O";
		B2->PerformClick();
	}
	else if ((B2->Text == "S") && (D2->Text == "S"))
	{
		symbol = "O";
		C2->PerformClick();
	}
	else if ((C2->Text == "S") && (E2->Text == "S"))
	{
		symbol = "O";
		D2->PerformClick();
	}
	//Colum 3
	else if ((A3->Text == "S") && (C3->Text == "S"))
	{
		symbol = "O";
		B3->PerformClick();
	}
	else if ((B3->Text == "S") && (D3->Text == "S"))
	{
		symbol = "O";
		C3->PerformClick();
	}
	else if ((C3->Text == "S") && (E3->Text == "S"))
	{
		symbol = "O";
		D3->PerformClick();
	}
	//Colum 4
	else if ((A4->Text == "S") && (C4->Text == "S"))
	{
		symbol = "O";
		B4->PerformClick();
	}
	else if ((B4->Text == "S") && (D4->Text == "S"))
	{
		symbol = "O";
		C4->PerformClick();
	}
	else if ((C4->Text == "S") && (E4->Text == "S"))
	{
		symbol = "O";
		D4->PerformClick();
	}
	//Colum 5
	else if ((A5->Text == "S") && (C5->Text == "S"))
	{
		symbol = "O";
		B5->PerformClick();
	}
	else if ((B5->Text == "S") && (D5->Text == "S"))
	{
		symbol = "O";
		C5->PerformClick();
	}
	else if ((C5->Text == "S") && (E5->Text == "S"))
	{
		symbol = "O";
		D5->PerformClick();
	}
	//Diagnal
	else if ((A1->Text == "S") && (C3->Text == "S"))
	{
		symbol = "O";
		B2->PerformClick();
	}
	else if ((B2->Text == "S") && (D4->Text == "S"))
	{
		symbol = "O";
		C3->PerformClick();
	}
	else if ((C3->Text == "S") && (E5->Text == "S"))
	{
		symbol = "O";
		D4->PerformClick();
	}
	else if ((A2->Text == "S") && (C4->Text == "S"))
	{
		symbol = "O";
		B3->PerformClick();
	}
	else if ((B3->Text == "S") && (D5->Text == "S"))
	{
		symbol = "O";
		C4->PerformClick();
	}
	else if ((A5->Text == "S") && (C5->Text == "S"))
	{
		symbol = "O";
		B4->PerformClick();
	}
	else if ((B1->Text == "S") && (D3->Text == "S"))
	{
		symbol = "O";
		C2->PerformClick();
	}
	else if ((C2->Text == "S") && (E4->Text == "S"))
	{
		symbol = "O";
		B3->PerformClick();
	}
	else if ((D2->Text == "S") && (E3->Text == "S"))
	{
		symbol = "O";
		D2->PerformClick();
	}
	else if ((A3->Text == "S") && (C1->Text == "S"))
	{
		symbol = "O";
		B2->PerformClick();
	}
	else if ((A4->Text == "S") && (C2->Text == "S"))
	{
		symbol = "O";
		B3->PerformClick();
	}
	else if ((B3->Text == "S") && (D1->Text == "S"))
	{
		symbol = "O";
		C2->PerformClick();
	}
	else if ((A5->Text == "S") && (C3->Text == "S"))
	{
		symbol = "O";
		B4->PerformClick();
	}
	else if ((E1->Text == "S") && (D2->Text == "S"))
	{
		symbol = "O";
		C3->PerformClick();
	}
	else if ((C3->Text == "S") && (E5->Text == "S"))
	{
		symbol = "O";
		D4->PerformClick();
	}
	else if ((B5->Text == "S") && (D3->Text == "S"))
	{
		symbol = "O";
		C4->PerformClick();
	}
	else if ((C4->Text == "S") && (E2->Text == "S"))
	{
		symbol = "O";
		D3->PerformClick();
	}

	else if ((C5->Text == "S") && (E3->Text == "S")) {
		symbol = "O";
		D4->PerformClick();
	}
}
};
}


