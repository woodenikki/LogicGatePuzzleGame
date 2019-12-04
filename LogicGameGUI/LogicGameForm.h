#pragma once
#include "Gate.h"
#include "Input.h"
#include "Output.h"
#include "Wire.h"
#include "GameModel.h"

extern Puzzle myPuzzle;

namespace LogicGameGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogicGameForm
	/// </summary>
	public ref class LogicGameForm : public System::Windows::Forms::Form
	{
	public:
		LogicGameForm(void)
		{
			InitializeComponent();
			//TODO: Add the constructor code here


		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LogicGameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ inputA;
	private: System::Windows::Forms::PictureBox^ wire1;
	private: System::Windows::Forms::PictureBox^ wire2;
	private: System::Windows::Forms::PictureBox^ notGate1;
	private: System::Windows::Forms::PictureBox^ outputA;

	protected:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogicGameForm::typeid));
			this->inputA = (gcnew System::Windows::Forms::Button());
			this->wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->notGate1 = (gcnew System::Windows::Forms::PictureBox());
			this->outputA = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notGate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputA))->BeginInit();
			this->SuspendLayout();
			// 
			// inputA
			// 
			this->inputA->BackColor = System::Drawing::SystemColors::Menu;
			this->inputA->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"inputA.BackgroundImage")));
			this->inputA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->inputA->Cursor = System::Windows::Forms::Cursors::Hand;
			this->inputA->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"inputA.Image")));
			this->inputA->Location = System::Drawing::Point(22, 75);
			this->inputA->Name = L"inputA";
			this->inputA->Size = System::Drawing::Size(100, 100);
			this->inputA->TabIndex = 0;
			this->inputA->Text = L"A";
			this->inputA->UseVisualStyleBackColor = false;
			this->inputA->Click += gcnew System::EventHandler(this, &LogicGameForm::inputA_Click);
			// 
			// wire1
			// 
			this->wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wire1.Image")));
			this->wire1->Location = System::Drawing::Point(101, 104);
			this->wire1->Name = L"wire1";
			this->wire1->Size = System::Drawing::Size(100, 50);
			this->wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->wire1->TabIndex = 1;
			this->wire1->TabStop = false;
			// 
			// wire2
			// 
			this->wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wire2.Image")));
			this->wire2->Location = System::Drawing::Point(272, 104);
			this->wire2->Name = L"wire2";
			this->wire2->Size = System::Drawing::Size(100, 50);
			this->wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->wire2->TabIndex = 2;
			this->wire2->TabStop = false;
			// 
			// notGate1
			// 
			this->notGate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"notGate1.Image")));
			this->notGate1->Location = System::Drawing::Point(188, 75);
			this->notGate1->Name = L"notGate1";
			this->notGate1->Size = System::Drawing::Size(100, 100);
			this->notGate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->notGate1->TabIndex = 3;
			this->notGate1->TabStop = false;
			// 
			// outputA
			// 
			this->outputA->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"outputA.Image")));
			this->outputA->Location = System::Drawing::Point(355, 75);
			this->outputA->Name = L"outputA";
			this->outputA->Size = System::Drawing::Size(100, 100);
			this->outputA->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->outputA->TabIndex = 4;
			this->outputA->TabStop = false;
			// 
			// LogicGameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 365);
			this->Controls->Add(this->wire2);
			this->Controls->Add(this->wire1);
			this->Controls->Add(this->inputA);
			this->Controls->Add(this->notGate1);
			this->Controls->Add(this->outputA);
			this->Name = L"LogicGameForm";
			this->Text = L"LogicGameForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->notGate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputA))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void inputA_Click(System::Object^ sender, System::EventArgs^ e) {
		myPuzzle.iA.toggle();
		updatePuzzle();
		
	}


private: 
	System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {}

	void refreshGraphics() {
		if (myPuzzle.iA.getStatus() == true) {
			
		}
	}

};


}
