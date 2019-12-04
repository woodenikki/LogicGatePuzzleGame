#pragma once
#include "Gate.h"
#include "Input.h"
#include "Output.h"
#include "Wire.h"
#include "GameModel.h"

extern vector <Puzzle> puzzles;

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

			puzzles.resize(2);

			initializeLevel1(puzzles[0]);

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
	private: System::Windows::Forms::TabControl^ tabControl;
	private: System::Windows::Forms::TabPage^ tabLevel1;
	private: System::Windows::Forms::TabPage^ tabLevel2;
	protected:


	protected:

	protected:


	private: System::Windows::Forms::Button^ level1input0;
	private: System::Windows::Forms::PictureBox^ level1output;

	private: System::Windows::Forms::PictureBox^ level1wire0;
	private: System::Windows::Forms::PictureBox^ refIN_on;
	private: System::Windows::Forms::PictureBox^ refwireH_on;
	private: System::Windows::Forms::PictureBox^ refIN_off;

	private: System::Windows::Forms::PictureBox^ refOUT_on;
	private: System::Windows::Forms::PictureBox^ refwireH_off;
	private: System::Windows::Forms::PictureBox^ refOUT_off;
	private: System::Windows::Forms::PictureBox^ refAND000;
	private: System::Windows::Forms::PictureBox^ refOR000;




	private: System::Windows::Forms::PictureBox^ refNOT01;
	private: System::Windows::Forms::PictureBox^ refNOT10;
	private: System::Windows::Forms::PictureBox^ refNAND000;
	private: System::Windows::Forms::PictureBox^ refNOR000;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;














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
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabLevel1 = (gcnew System::Windows::Forms::TabPage());
			this->level1output = (gcnew System::Windows::Forms::PictureBox());
			this->level1wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level1input0 = (gcnew System::Windows::Forms::Button());
			this->tabLevel2 = (gcnew System::Windows::Forms::TabPage());
			this->refIN_on = (gcnew System::Windows::Forms::PictureBox());
			this->refwireH_on = (gcnew System::Windows::Forms::PictureBox());
			this->refIN_off = (gcnew System::Windows::Forms::PictureBox());
			this->refOUT_on = (gcnew System::Windows::Forms::PictureBox());
			this->refwireH_off = (gcnew System::Windows::Forms::PictureBox());
			this->refOUT_off = (gcnew System::Windows::Forms::PictureBox());
			this->refAND000 = (gcnew System::Windows::Forms::PictureBox());
			this->refOR000 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOT01 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOT10 = (gcnew System::Windows::Forms::PictureBox());
			this->refNAND000 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOR000 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl->SuspendLayout();
			this->tabLevel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level1output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level1wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIN_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireH_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIN_off))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOUT_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireH_off))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOUT_off))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND000))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR000))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOT01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOT10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND000))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR000))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabLevel1);
			this->tabControl->Controls->Add(this->tabLevel2);
			this->tabControl->Location = System::Drawing::Point(12, 12);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(804, 452);
			this->tabControl->TabIndex = 5;
			// 
			// tabLevel1
			// 
			this->tabLevel1->Controls->Add(this->level1output);
			this->tabLevel1->Controls->Add(this->level1wire0);
			this->tabLevel1->Controls->Add(this->level1input0);
			this->tabLevel1->Location = System::Drawing::Point(4, 22);
			this->tabLevel1->Name = L"tabLevel1";
			this->tabLevel1->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel1->Size = System::Drawing::Size(796, 426);
			this->tabLevel1->TabIndex = 0;
			this->tabLevel1->Text = L"Level 1";
			this->tabLevel1->UseVisualStyleBackColor = true;
			// 
			// level1output
			// 
			this->level1output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level1output.Image")));
			this->level1output->Location = System::Drawing::Point(100, 0);
			this->level1output->Name = L"level1output";
			this->level1output->Size = System::Drawing::Size(50, 50);
			this->level1output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level1output->TabIndex = 2;
			this->level1output->TabStop = false;
			// 
			// level1wire0
			// 
			this->level1wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level1wire0.Image")));
			this->level1wire0->Location = System::Drawing::Point(50, 0);
			this->level1wire0->Name = L"level1wire0";
			this->level1wire0->Size = System::Drawing::Size(50, 50);
			this->level1wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level1wire0->TabIndex = 1;
			this->level1wire0->TabStop = false;
			// 
			// level1input0
			// 
			this->level1input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level1input0.Image")));
			this->level1input0->Location = System::Drawing::Point(0, 0);
			this->level1input0->Margin = System::Windows::Forms::Padding(0);
			this->level1input0->Name = L"level1input0";
			this->level1input0->Size = System::Drawing::Size(50, 50);
			this->level1input0->TabIndex = 0;
			this->level1input0->Text = L"A";
			this->level1input0->UseVisualStyleBackColor = true;
			this->level1input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level1input0_Click);
			// 
			// tabLevel2
			// 
			this->tabLevel2->Location = System::Drawing::Point(4, 22);
			this->tabLevel2->Name = L"tabLevel2";
			this->tabLevel2->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel2->Size = System::Drawing::Size(796, 426);
			this->tabLevel2->TabIndex = 1;
			this->tabLevel2->Text = L"Level 2";
			this->tabLevel2->UseVisualStyleBackColor = true;
			// 
			// refIN_on
			// 
			this->refIN_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refIN_on.Image")));
			this->refIN_on->Location = System::Drawing::Point(12, 470);
			this->refIN_on->Name = L"refIN_on";
			this->refIN_on->Size = System::Drawing::Size(50, 50);
			this->refIN_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refIN_on->TabIndex = 6;
			this->refIN_on->TabStop = false;
			// 
			// refwireH_on
			// 
			this->refwireH_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireH_on.Image")));
			this->refwireH_on->Location = System::Drawing::Point(68, 470);
			this->refwireH_on->Name = L"refwireH_on";
			this->refwireH_on->Size = System::Drawing::Size(50, 50);
			this->refwireH_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireH_on->TabIndex = 7;
			this->refwireH_on->TabStop = false;
			// 
			// refIN_off
			// 
			this->refIN_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refIN_off.Image")));
			this->refIN_off->Location = System::Drawing::Point(12, 526);
			this->refIN_off->Name = L"refIN_off";
			this->refIN_off->Size = System::Drawing::Size(50, 50);
			this->refIN_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refIN_off->TabIndex = 8;
			this->refIN_off->TabStop = false;
			// 
			// refOUT_on
			// 
			this->refOUT_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOUT_on.Image")));
			this->refOUT_on->Location = System::Drawing::Point(124, 470);
			this->refOUT_on->Name = L"refOUT_on";
			this->refOUT_on->Size = System::Drawing::Size(50, 50);
			this->refOUT_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refOUT_on->TabIndex = 9;
			this->refOUT_on->TabStop = false;
			// 
			// refwireH_off
			// 
			this->refwireH_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireH_off.Image")));
			this->refwireH_off->Location = System::Drawing::Point(68, 526);
			this->refwireH_off->Name = L"refwireH_off";
			this->refwireH_off->Size = System::Drawing::Size(50, 50);
			this->refwireH_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireH_off->TabIndex = 10;
			this->refwireH_off->TabStop = false;
			// 
			// refOUT_off
			// 
			this->refOUT_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOUT_off.Image")));
			this->refOUT_off->Location = System::Drawing::Point(124, 526);
			this->refOUT_off->Name = L"refOUT_off";
			this->refOUT_off->Size = System::Drawing::Size(50, 50);
			this->refOUT_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refOUT_off->TabIndex = 11;
			this->refOUT_off->TabStop = false;
			// 
			// refAND000
			// 
			this->refAND000->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refAND000.Image")));
			this->refAND000->Location = System::Drawing::Point(822, 34);
			this->refAND000->Name = L"refAND000";
			this->refAND000->Size = System::Drawing::Size(150, 150);
			this->refAND000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refAND000->TabIndex = 12;
			this->refAND000->TabStop = false;
			// 
			// refOR000
			// 
			this->refOR000->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOR000.Image")));
			this->refOR000->Location = System::Drawing::Point(978, 34);
			this->refOR000->Name = L"refOR000";
			this->refOR000->Size = System::Drawing::Size(150, 150);
			this->refOR000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refOR000->TabIndex = 13;
			this->refOR000->TabStop = false;
			// 
			// refNOT01
			// 
			this->refNOT01->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOT01.Image")));
			this->refNOT01->Location = System::Drawing::Point(180, 526);
			this->refNOT01->Name = L"refNOT01";
			this->refNOT01->Size = System::Drawing::Size(100, 50);
			this->refNOT01->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refNOT01->TabIndex = 14;
			this->refNOT01->TabStop = false;
			// 
			// refNOT10
			// 
			this->refNOT10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOT10.Image")));
			this->refNOT10->Location = System::Drawing::Point(180, 470);
			this->refNOT10->Name = L"refNOT10";
			this->refNOT10->Size = System::Drawing::Size(100, 50);
			this->refNOT10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refNOT10->TabIndex = 15;
			this->refNOT10->TabStop = false;
			// 
			// refNAND000
			// 
			this->refNAND000->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNAND000.Image")));
			this->refNAND000->Location = System::Drawing::Point(1134, 34);
			this->refNAND000->Name = L"refNAND000";
			this->refNAND000->Size = System::Drawing::Size(150, 150);
			this->refNAND000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refNAND000->TabIndex = 16;
			this->refNAND000->TabStop = false;
			// 
			// refNOR000
			// 
			this->refNOR000->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR000.Image")));
			this->refNOR000->Location = System::Drawing::Point(1290, 34);
			this->refNOR000->Name = L"refNOR000";
			this->refNOR000->Size = System::Drawing::Size(150, 150);
			this->refNOR000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refNOR000->TabIndex = 17;
			this->refNOR000->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(822, 190);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(978, 190);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(150, 150);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1134, 190);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(150, 150);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1290, 190);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(150, 150);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(822, 346);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(150, 150);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 22;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(978, 346);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(150, 150);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 23;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1134, 346);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(150, 150);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 24;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1290, 346);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(150, 150);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 25;
			this->pictureBox8->TabStop = false;
			// 
			// LogicGameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 586);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->refNOR000);
			this->Controls->Add(this->refNAND000);
			this->Controls->Add(this->refNOT10);
			this->Controls->Add(this->refNOT01);
			this->Controls->Add(this->refOR000);
			this->Controls->Add(this->refAND000);
			this->Controls->Add(this->refOUT_off);
			this->Controls->Add(this->refwireH_off);
			this->Controls->Add(this->refOUT_on);
			this->Controls->Add(this->refIN_off);
			this->Controls->Add(this->refwireH_on);
			this->Controls->Add(this->refIN_on);
			this->Controls->Add(this->tabControl);
			this->Name = L"LogicGameForm";
			this->Text = L"LogicGameForm";
			this->tabControl->ResumeLayout(false);
			this->tabLevel1->ResumeLayout(false);
			this->tabLevel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level1output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level1wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIN_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireH_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIN_off))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOUT_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireH_off))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOUT_off))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND000))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR000))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOT01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOT10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND000))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR000))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void level1input0_Click(System::Object^ sender, System::EventArgs^ e) {
	//toggle backend input
	puzzles[0].inputs[0].toggle();
	//refresh status
	puzzles[0].inputs[0].refreshState();
	//update images
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogicGameForm::typeid));
	System::Windows::Forms::Button^ btn = safe_cast<System::Windows::Forms::Button ^>(sender);
	//level1wire0->Image
	Form^ myForm = btn->FindForm();
	auto controls = myForm->Controls->Find("level1wire0", true);
	System::Windows::Forms::PictureBox^ picBox = safe_cast<System::Windows::Forms::PictureBox^>(controls[0]);
	picBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireH_on.Image")));

	updateButtonGraphic(puzzles[0].inputs[0], btn, resources);
	//detect if output is on
	if (puzzles[0].out.getStatus() == true) {
		//win!
		//this->tabControl->SelectTab("tabLevel2");
	}

	//if so, WIN!.. automatically advance to next tab
}
};


}
