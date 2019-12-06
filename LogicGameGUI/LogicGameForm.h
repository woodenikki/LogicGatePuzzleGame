#pragma once
#include "Gate.h"
#include "Input.h"
#include "Output.h"
#include "Wire.h"
#include "GameModel.h"
#include <string>

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

			puzzles.resize(6);

			initializeLevel1(puzzles[0]);
			initializeLevel2(puzzles[1]);
			initializeLevel3(puzzles[2]);
			initializeLevel4(puzzles[3]);
			initializeLevel5(puzzles[4]);
			initializeLevel6(puzzles[5]);


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





	private: System::Windows::Forms::PictureBox^ refNOT01;
	private: System::Windows::Forms::PictureBox^ refNOT10;
	private: System::Windows::Forms::PictureBox^ refNAND000;
	private: System::Windows::Forms::PictureBox^ refNOR000;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;


	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ level2output;
	private: System::Windows::Forms::PictureBox^ level2wire0;

	private: System::Windows::Forms::PictureBox^ level2wire1;


	private: System::Windows::Forms::PictureBox^ level2gate0;

	private: System::Windows::Forms::TabPage^ tabLevel3;
	private: System::Windows::Forms::PictureBox^ level3output;
	private: System::Windows::Forms::PictureBox^ level3wire0;
	private: System::Windows::Forms::PictureBox^ level3wire1;

	private: System::Windows::Forms::PictureBox^ level3wire2;







	private: System::Windows::Forms::PictureBox^ level3gate0;







	private: System::Windows::Forms::TabPage^ tabLevel4;
	private: System::Windows::Forms::PictureBox^ level4gate0;
	private: System::Windows::Forms::PictureBox^ level4output;
private: System::Windows::Forms::PictureBox^ level4wire0;

private: System::Windows::Forms::PictureBox^ level4wire1;





private: System::Windows::Forms::PictureBox^ level4wire2;







	private: System::Windows::Forms::TabPage^ tabLevel5;
private: System::Windows::Forms::PictureBox^ level5output;
private: System::Windows::Forms::PictureBox^ level5wire2;
private: System::Windows::Forms::PictureBox^ level5wire1;








private: System::Windows::Forms::PictureBox^ level5gate0;
private: System::Windows::Forms::PictureBox^ level5wire0;





	private: System::Windows::Forms::TabPage^ tabLevel6;
	private: System::Windows::Forms::TabPage^ tabLevel7;
	private: System::Windows::Forms::TabPage^ tabLevel8;
	private: System::Windows::Forms::TabPage^ tabLevel9;
	private: System::Windows::Forms::TabPage^ tabLevel10;
	private: System::Windows::Forms::TabPage^ tabLevel11;
	private: System::Windows::Forms::TabPage^ tabLevel12;
	private: System::Windows::Forms::TabPage^ tabLevel13;
	private: System::Windows::Forms::TabPage^ tabLevel14;
	private: System::Windows::Forms::TabPage^ tabLevel15;
private: System::Windows::Forms::PictureBox^ level6output;
private: System::Windows::Forms::PictureBox^ level6wire0;



private: System::Windows::Forms::PictureBox^ level6gate0;
private: System::Windows::Forms::PictureBox^ level6wire2;
private: System::Windows::Forms::PictureBox^ level6wire1;









private: System::Windows::Forms::Button^ level2input0;
private: System::Windows::Forms::Button^ level3input1;
private: System::Windows::Forms::Button^ level3input0;
private: System::Windows::Forms::PictureBox^ refAND001;
private: System::Windows::Forms::PictureBox^ refAND010;
private: System::Windows::Forms::PictureBox^ refAND111;
private: System::Windows::Forms::Button^ level4input1;

private: System::Windows::Forms::Button^ level4input0;
private: System::Windows::Forms::Button^ level5input1;


private: System::Windows::Forms::Button^ level5input0;
private: System::Windows::Forms::Button^ level6input1;


private: System::Windows::Forms::Button^ level6input0;
private: System::Windows::Forms::PictureBox^ refOR000;
private: System::Windows::Forms::PictureBox^ refOR101;
private: System::Windows::Forms::PictureBox^ refOR110;
private: System::Windows::Forms::PictureBox^ refOR111;
private: System::Windows::Forms::PictureBox^ refNAND011;
private: System::Windows::Forms::PictureBox^ refNOR100;








private: System::Windows::Forms::PictureBox^ refNAND100;
private: System::Windows::Forms::PictureBox^ refNOR001;


private: System::Windows::Forms::PictureBox^ refNAND101;
private: System::Windows::Forms::PictureBox^ refNOR010;


private: System::Windows::Forms::PictureBox^ refNAND110;
private: System::Windows::Forms::PictureBox^ refNOR011;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::PictureBox^ pictureBox32;
private: System::Windows::Forms::PictureBox^ pictureBox33;
private: System::Windows::Forms::PictureBox^ pictureBox31;
private: System::Windows::Forms::PictureBox^ pictureBox30;
private: System::Windows::Forms::PictureBox^ pictureBox29;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::PictureBox^ pictureBox26;
private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::PictureBox^ pictureBox24;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::PictureBox^ pictureBox22;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::PictureBox^ pictureBox38;
private: System::Windows::Forms::PictureBox^ pictureBox37;
private: System::Windows::Forms::PictureBox^ pictureBox36;
private: System::Windows::Forms::PictureBox^ pictureBox35;
private: System::Windows::Forms::PictureBox^ pictureBox34;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::PictureBox^ pictureBox42;
private: System::Windows::Forms::PictureBox^ pictureBox43;
private: System::Windows::Forms::PictureBox^ pictureBox41;
private: System::Windows::Forms::PictureBox^ pictureBox40;
private: System::Windows::Forms::PictureBox^ pictureBox39;





















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
			this->level2input0 = (gcnew System::Windows::Forms::Button());
			this->level2output = (gcnew System::Windows::Forms::PictureBox());
			this->level2wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level2wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level2gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->tabLevel3 = (gcnew System::Windows::Forms::TabPage());
			this->level3input1 = (gcnew System::Windows::Forms::Button());
			this->level3input0 = (gcnew System::Windows::Forms::Button());
			this->level3output = (gcnew System::Windows::Forms::PictureBox());
			this->level3wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level3wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level3wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level3gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->tabLevel4 = (gcnew System::Windows::Forms::TabPage());
			this->level4input1 = (gcnew System::Windows::Forms::Button());
			this->level4input0 = (gcnew System::Windows::Forms::Button());
			this->level4gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level4output = (gcnew System::Windows::Forms::PictureBox());
			this->level4wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level4wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level4wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabLevel5 = (gcnew System::Windows::Forms::TabPage());
			this->level5input1 = (gcnew System::Windows::Forms::Button());
			this->level5input0 = (gcnew System::Windows::Forms::Button());
			this->level5output = (gcnew System::Windows::Forms::PictureBox());
			this->level5wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level5wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level5gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level5wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->tabLevel6 = (gcnew System::Windows::Forms::TabPage());
			this->level6input1 = (gcnew System::Windows::Forms::Button());
			this->level6input0 = (gcnew System::Windows::Forms::Button());
			this->level6output = (gcnew System::Windows::Forms::PictureBox());
			this->level6wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level6gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level6wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level6wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabLevel7 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabLevel8 = (gcnew System::Windows::Forms::TabPage());
			this->tabLevel9 = (gcnew System::Windows::Forms::TabPage());
			this->tabLevel10 = (gcnew System::Windows::Forms::TabPage());
			this->tabLevel11 = (gcnew System::Windows::Forms::TabPage());
			this->tabLevel12 = (gcnew System::Windows::Forms::TabPage());
			this->tabLevel13 = (gcnew System::Windows::Forms::TabPage());
			this->tabLevel14 = (gcnew System::Windows::Forms::TabPage());
			this->tabLevel15 = (gcnew System::Windows::Forms::TabPage());
			this->refIN_on = (gcnew System::Windows::Forms::PictureBox());
			this->refwireH_on = (gcnew System::Windows::Forms::PictureBox());
			this->refIN_off = (gcnew System::Windows::Forms::PictureBox());
			this->refOUT_on = (gcnew System::Windows::Forms::PictureBox());
			this->refwireH_off = (gcnew System::Windows::Forms::PictureBox());
			this->refOUT_off = (gcnew System::Windows::Forms::PictureBox());
			this->refAND000 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOT01 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOT10 = (gcnew System::Windows::Forms::PictureBox());
			this->refNAND000 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOR000 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->refAND001 = (gcnew System::Windows::Forms::PictureBox());
			this->refAND010 = (gcnew System::Windows::Forms::PictureBox());
			this->refAND111 = (gcnew System::Windows::Forms::PictureBox());
			this->refOR000 = (gcnew System::Windows::Forms::PictureBox());
			this->refOR101 = (gcnew System::Windows::Forms::PictureBox());
			this->refOR110 = (gcnew System::Windows::Forms::PictureBox());
			this->refOR111 = (gcnew System::Windows::Forms::PictureBox());
			this->refNAND011 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOR100 = (gcnew System::Windows::Forms::PictureBox());
			this->refNAND100 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOR001 = (gcnew System::Windows::Forms::PictureBox());
			this->refNAND101 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOR010 = (gcnew System::Windows::Forms::PictureBox());
			this->refNAND110 = (gcnew System::Windows::Forms::PictureBox());
			this->refNOR011 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl->SuspendLayout();
			this->tabLevel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level1output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level1wire0))->BeginInit();
			this->tabLevel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level2output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level2wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level2wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level2gate0))->BeginInit();
			this->tabLevel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3gate0))->BeginInit();
			this->tabLevel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4wire2))->BeginInit();
			this->tabLevel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5wire0))->BeginInit();
			this->tabLevel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6wire1))->BeginInit();
			this->tabLevel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->tabLevel8->SuspendLayout();
			this->tabLevel9->SuspendLayout();
			this->tabLevel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIN_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireH_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIN_off))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOUT_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireH_off))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOUT_off))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND000))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOT01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOT10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND000))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR000))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND001))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND010))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND111))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR000))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR101))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR110))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR111))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND011))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR001))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND101))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR010))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND110))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR011))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->tabLevel1);
			this->tabControl->Controls->Add(this->tabLevel2);
			this->tabControl->Controls->Add(this->tabLevel3);
			this->tabControl->Controls->Add(this->tabLevel4);
			this->tabControl->Controls->Add(this->tabLevel5);
			this->tabControl->Controls->Add(this->tabLevel6);
			this->tabControl->Controls->Add(this->tabLevel7);
			this->tabControl->Controls->Add(this->tabLevel8);
			this->tabControl->Controls->Add(this->tabLevel9);
			this->tabControl->Controls->Add(this->tabLevel10);
			this->tabControl->Controls->Add(this->tabLevel11);
			this->tabControl->Controls->Add(this->tabLevel12);
			this->tabControl->Controls->Add(this->tabLevel13);
			this->tabControl->Controls->Add(this->tabLevel14);
			this->tabControl->Controls->Add(this->tabLevel15);
			this->tabControl->Location = System::Drawing::Point(12, 12);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(756, 391);
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
			this->tabLevel1->Size = System::Drawing::Size(748, 365);
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
			this->level1input0->UseVisualStyleBackColor = true;
			this->level1input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level1input0_Click);
			// 
			// tabLevel2
			// 
			this->tabLevel2->Controls->Add(this->level2input0);
			this->tabLevel2->Controls->Add(this->level2output);
			this->tabLevel2->Controls->Add(this->level2wire0);
			this->tabLevel2->Controls->Add(this->level2wire1);
			this->tabLevel2->Controls->Add(this->level2gate0);
			this->tabLevel2->Location = System::Drawing::Point(4, 22);
			this->tabLevel2->Name = L"tabLevel2";
			this->tabLevel2->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel2->Size = System::Drawing::Size(748, 365);
			this->tabLevel2->TabIndex = 1;
			this->tabLevel2->Text = L"Level 2";
			this->tabLevel2->UseVisualStyleBackColor = true;
			// 
			// level2input0
			// 
			this->level2input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level2input0.Image")));
			this->level2input0->Location = System::Drawing::Point(0, 0);
			this->level2input0->Margin = System::Windows::Forms::Padding(0);
			this->level2input0->Name = L"level2input0";
			this->level2input0->Size = System::Drawing::Size(50, 50);
			this->level2input0->TabIndex = 27;
			this->level2input0->UseVisualStyleBackColor = true;
			this->level2input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level2input0_Click_1);
			// 
			// level2output
			// 
			this->level2output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level2output.Image")));
			this->level2output->Location = System::Drawing::Point(250, 0);
			this->level2output->Name = L"level2output";
			this->level2output->Size = System::Drawing::Size(50, 50);
			this->level2output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level2output->TabIndex = 26;
			this->level2output->TabStop = false;
			// 
			// level2wire0
			// 
			this->level2wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level2wire0.Image")));
			this->level2wire0->Location = System::Drawing::Point(200, 0);
			this->level2wire0->Name = L"level2wire0";
			this->level2wire0->Size = System::Drawing::Size(50, 50);
			this->level2wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level2wire0->TabIndex = 26;
			this->level2wire0->TabStop = false;
			// 
			// level2wire1
			// 
			this->level2wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level2wire1.Image")));
			this->level2wire1->Location = System::Drawing::Point(50, 0);
			this->level2wire1->Name = L"level2wire1";
			this->level2wire1->Size = System::Drawing::Size(50, 50);
			this->level2wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level2wire1->TabIndex = 26;
			this->level2wire1->TabStop = false;
			// 
			// level2gate0
			// 
			this->level2gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level2gate0.Image")));
			this->level2gate0->Location = System::Drawing::Point(100, 0);
			this->level2gate0->Name = L"level2gate0";
			this->level2gate0->Size = System::Drawing::Size(100, 50);
			this->level2gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level2gate0->TabIndex = 26;
			this->level2gate0->TabStop = false;
			// 
			// tabLevel3
			// 
			this->tabLevel3->Controls->Add(this->level3input1);
			this->tabLevel3->Controls->Add(this->level3input0);
			this->tabLevel3->Controls->Add(this->level3output);
			this->tabLevel3->Controls->Add(this->level3wire0);
			this->tabLevel3->Controls->Add(this->level3wire1);
			this->tabLevel3->Controls->Add(this->level3wire2);
			this->tabLevel3->Controls->Add(this->level3gate0);
			this->tabLevel3->Location = System::Drawing::Point(4, 22);
			this->tabLevel3->Name = L"tabLevel3";
			this->tabLevel3->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel3->Size = System::Drawing::Size(748, 365);
			this->tabLevel3->TabIndex = 2;
			this->tabLevel3->Text = L"Level 3";
			this->tabLevel3->UseVisualStyleBackColor = true;
			// 
			// level3input1
			// 
			this->level3input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level3input1.Image")));
			this->level3input1->Location = System::Drawing::Point(0, 100);
			this->level3input1->Margin = System::Windows::Forms::Padding(0);
			this->level3input1->Name = L"level3input1";
			this->level3input1->Size = System::Drawing::Size(50, 50);
			this->level3input1->TabIndex = 29;
			this->level3input1->UseVisualStyleBackColor = true;
			this->level3input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level3input1_Click);
			// 
			// level3input0
			// 
			this->level3input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level3input0.Image")));
			this->level3input0->Location = System::Drawing::Point(0, 0);
			this->level3input0->Margin = System::Windows::Forms::Padding(0);
			this->level3input0->Name = L"level3input0";
			this->level3input0->Size = System::Drawing::Size(50, 50);
			this->level3input0->TabIndex = 28;
			this->level3input0->UseVisualStyleBackColor = true;
			this->level3input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level3input0_Click_1);
			// 
			// level3output
			// 
			this->level3output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level3output.Image")));
			this->level3output->Location = System::Drawing::Point(300, 50);
			this->level3output->Name = L"level3output";
			this->level3output->Size = System::Drawing::Size(50, 50);
			this->level3output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level3output->TabIndex = 26;
			this->level3output->TabStop = false;
			// 
			// level3wire0
			// 
			this->level3wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level3wire0.Image")));
			this->level3wire0->Location = System::Drawing::Point(250, 50);
			this->level3wire0->Name = L"level3wire0";
			this->level3wire0->Size = System::Drawing::Size(50, 50);
			this->level3wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level3wire0->TabIndex = 26;
			this->level3wire0->TabStop = false;
			// 
			// level3wire1
			// 
			this->level3wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level3wire1.Image")));
			this->level3wire1->Location = System::Drawing::Point(50, 0);
			this->level3wire1->Name = L"level3wire1";
			this->level3wire1->Size = System::Drawing::Size(50, 50);
			this->level3wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level3wire1->TabIndex = 26;
			this->level3wire1->TabStop = false;
			// 
			// level3wire2
			// 
			this->level3wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level3wire2.Image")));
			this->level3wire2->Location = System::Drawing::Point(50, 100);
			this->level3wire2->Name = L"level3wire2";
			this->level3wire2->Size = System::Drawing::Size(50, 50);
			this->level3wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level3wire2->TabIndex = 27;
			this->level3wire2->TabStop = false;
			// 
			// level3gate0
			// 
			this->level3gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level3gate0.Image")));
			this->level3gate0->Location = System::Drawing::Point(100, 0);
			this->level3gate0->Name = L"level3gate0";
			this->level3gate0->Size = System::Drawing::Size(150, 150);
			this->level3gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level3gate0->TabIndex = 26;
			this->level3gate0->TabStop = false;
			// 
			// tabLevel4
			// 
			this->tabLevel4->Controls->Add(this->level4input1);
			this->tabLevel4->Controls->Add(this->level4input0);
			this->tabLevel4->Controls->Add(this->level4gate0);
			this->tabLevel4->Controls->Add(this->level4output);
			this->tabLevel4->Controls->Add(this->level4wire0);
			this->tabLevel4->Controls->Add(this->level4wire1);
			this->tabLevel4->Controls->Add(this->level4wire2);
			this->tabLevel4->Location = System::Drawing::Point(4, 22);
			this->tabLevel4->Name = L"tabLevel4";
			this->tabLevel4->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel4->Size = System::Drawing::Size(748, 365);
			this->tabLevel4->TabIndex = 3;
			this->tabLevel4->Text = L"Level 4";
			this->tabLevel4->UseVisualStyleBackColor = true;
			// 
			// level4input1
			// 
			this->level4input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level4input1.Image")));
			this->level4input1->Location = System::Drawing::Point(0, 100);
			this->level4input1->Margin = System::Windows::Forms::Padding(0);
			this->level4input1->Name = L"level4input1";
			this->level4input1->Size = System::Drawing::Size(50, 50);
			this->level4input1->TabIndex = 35;
			this->level4input1->UseVisualStyleBackColor = true;
			this->level4input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level4input1_Click);
			// 
			// level4input0
			// 
			this->level4input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level4input0.Image")));
			this->level4input0->Location = System::Drawing::Point(0, 0);
			this->level4input0->Margin = System::Windows::Forms::Padding(0);
			this->level4input0->Name = L"level4input0";
			this->level4input0->Size = System::Drawing::Size(50, 50);
			this->level4input0->TabIndex = 34;
			this->level4input0->UseVisualStyleBackColor = true;
			this->level4input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level4input0_Click);
			// 
			// level4gate0
			// 
			this->level4gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level4gate0.Image")));
			this->level4gate0->Location = System::Drawing::Point(100, -9);
			this->level4gate0->Name = L"level4gate0";
			this->level4gate0->Size = System::Drawing::Size(150, 150);
			this->level4gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level4gate0->TabIndex = 26;
			this->level4gate0->TabStop = false;
			// 
			// level4output
			// 
			this->level4output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level4output.Image")));
			this->level4output->Location = System::Drawing::Point(300, 50);
			this->level4output->Name = L"level4output";
			this->level4output->Size = System::Drawing::Size(50, 50);
			this->level4output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level4output->TabIndex = 28;
			this->level4output->TabStop = false;
			// 
			// level4wire0
			// 
			this->level4wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level4wire0.Image")));
			this->level4wire0->Location = System::Drawing::Point(250, 50);
			this->level4wire0->Name = L"level4wire0";
			this->level4wire0->Size = System::Drawing::Size(50, 50);
			this->level4wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level4wire0->TabIndex = 29;
			this->level4wire0->TabStop = false;
			// 
			// level4wire1
			// 
			this->level4wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level4wire1.Image")));
			this->level4wire1->Location = System::Drawing::Point(50, 0);
			this->level4wire1->Name = L"level4wire1";
			this->level4wire1->Size = System::Drawing::Size(50, 50);
			this->level4wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level4wire1->TabIndex = 30;
			this->level4wire1->TabStop = false;
			// 
			// level4wire2
			// 
			this->level4wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level4wire2.Image")));
			this->level4wire2->Location = System::Drawing::Point(50, 100);
			this->level4wire2->Name = L"level4wire2";
			this->level4wire2->Size = System::Drawing::Size(50, 50);
			this->level4wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level4wire2->TabIndex = 33;
			this->level4wire2->TabStop = false;
			// 
			// tabLevel5
			// 
			this->tabLevel5->Controls->Add(this->level5input1);
			this->tabLevel5->Controls->Add(this->level5input0);
			this->tabLevel5->Controls->Add(this->level5output);
			this->tabLevel5->Controls->Add(this->level5wire2);
			this->tabLevel5->Controls->Add(this->level5wire1);
			this->tabLevel5->Controls->Add(this->level5gate0);
			this->tabLevel5->Controls->Add(this->level5wire0);
			this->tabLevel5->Location = System::Drawing::Point(4, 22);
			this->tabLevel5->Name = L"tabLevel5";
			this->tabLevel5->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel5->Size = System::Drawing::Size(748, 365);
			this->tabLevel5->TabIndex = 4;
			this->tabLevel5->Text = L"Level 5";
			this->tabLevel5->UseVisualStyleBackColor = true;
			// 
			// level5input1
			// 
			this->level5input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level5input1.Image")));
			this->level5input1->Location = System::Drawing::Point(0, 100);
			this->level5input1->Margin = System::Windows::Forms::Padding(0);
			this->level5input1->Name = L"level5input1";
			this->level5input1->Size = System::Drawing::Size(50, 50);
			this->level5input1->TabIndex = 38;
			this->level5input1->UseVisualStyleBackColor = true;
			this->level5input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level5input1_Click);
			// 
			// level5input0
			// 
			this->level5input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level5input0.Image")));
			this->level5input0->Location = System::Drawing::Point(0, 0);
			this->level5input0->Margin = System::Windows::Forms::Padding(0);
			this->level5input0->Name = L"level5input0";
			this->level5input0->Size = System::Drawing::Size(50, 50);
			this->level5input0->TabIndex = 37;
			this->level5input0->UseVisualStyleBackColor = true;
			this->level5input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level5input0_Click);
			// 
			// level5output
			// 
			this->level5output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level5output.Image")));
			this->level5output->Location = System::Drawing::Point(300, 50);
			this->level5output->Name = L"level5output";
			this->level5output->Size = System::Drawing::Size(50, 50);
			this->level5output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level5output->TabIndex = 26;
			this->level5output->TabStop = false;
			// 
			// level5wire2
			// 
			this->level5wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level5wire2.Image")));
			this->level5wire2->Location = System::Drawing::Point(50, 100);
			this->level5wire2->Name = L"level5wire2";
			this->level5wire2->Size = System::Drawing::Size(50, 50);
			this->level5wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level5wire2->TabIndex = 35;
			this->level5wire2->TabStop = false;
			// 
			// level5wire1
			// 
			this->level5wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level5wire1.Image")));
			this->level5wire1->Location = System::Drawing::Point(50, 0);
			this->level5wire1->Name = L"level5wire1";
			this->level5wire1->Size = System::Drawing::Size(50, 50);
			this->level5wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level5wire1->TabIndex = 26;
			this->level5wire1->TabStop = false;
			// 
			// level5gate0
			// 
			this->level5gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level5gate0.Image")));
			this->level5gate0->Location = System::Drawing::Point(100, 0);
			this->level5gate0->Name = L"level5gate0";
			this->level5gate0->Size = System::Drawing::Size(150, 150);
			this->level5gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level5gate0->TabIndex = 26;
			this->level5gate0->TabStop = false;
			// 
			// level5wire0
			// 
			this->level5wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level5wire0.Image")));
			this->level5wire0->Location = System::Drawing::Point(250, 50);
			this->level5wire0->Name = L"level5wire0";
			this->level5wire0->Size = System::Drawing::Size(50, 50);
			this->level5wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level5wire0->TabIndex = 34;
			this->level5wire0->TabStop = false;
			// 
			// tabLevel6
			// 
			this->tabLevel6->Controls->Add(this->level6input1);
			this->tabLevel6->Controls->Add(this->level6input0);
			this->tabLevel6->Controls->Add(this->level6output);
			this->tabLevel6->Controls->Add(this->level6wire0);
			this->tabLevel6->Controls->Add(this->level6gate0);
			this->tabLevel6->Controls->Add(this->level6wire2);
			this->tabLevel6->Controls->Add(this->level6wire1);
			this->tabLevel6->Location = System::Drawing::Point(4, 22);
			this->tabLevel6->Name = L"tabLevel6";
			this->tabLevel6->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel6->Size = System::Drawing::Size(748, 365);
			this->tabLevel6->TabIndex = 5;
			this->tabLevel6->Text = L"Level 6";
			this->tabLevel6->UseVisualStyleBackColor = true;
			// 
			// level6input1
			// 
			this->level6input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level6input1.Image")));
			this->level6input1->Location = System::Drawing::Point(0, 100);
			this->level6input1->Margin = System::Windows::Forms::Padding(0);
			this->level6input1->Name = L"level6input1";
			this->level6input1->Size = System::Drawing::Size(50, 50);
			this->level6input1->TabIndex = 30;
			this->level6input1->UseVisualStyleBackColor = true;
			this->level6input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level6input1_Click);
			// 
			// level6input0
			// 
			this->level6input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level6input0.Image")));
			this->level6input0->Location = System::Drawing::Point(0, 0);
			this->level6input0->Margin = System::Windows::Forms::Padding(0);
			this->level6input0->Name = L"level6input0";
			this->level6input0->Size = System::Drawing::Size(50, 50);
			this->level6input0->TabIndex = 29;
			this->level6input0->UseVisualStyleBackColor = true;
			this->level6input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level6input0_Click);
			// 
			// level6output
			// 
			this->level6output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level6output.Image")));
			this->level6output->Location = System::Drawing::Point(300, 50);
			this->level6output->Name = L"level6output";
			this->level6output->Size = System::Drawing::Size(50, 50);
			this->level6output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level6output->TabIndex = 26;
			this->level6output->TabStop = false;
			// 
			// level6wire0
			// 
			this->level6wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level6wire0.Image")));
			this->level6wire0->Location = System::Drawing::Point(250, 50);
			this->level6wire0->Name = L"level6wire0";
			this->level6wire0->Size = System::Drawing::Size(50, 50);
			this->level6wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level6wire0->TabIndex = 26;
			this->level6wire0->TabStop = false;
			// 
			// level6gate0
			// 
			this->level6gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level6gate0.Image")));
			this->level6gate0->Location = System::Drawing::Point(100, -9);
			this->level6gate0->Name = L"level6gate0";
			this->level6gate0->Size = System::Drawing::Size(150, 150);
			this->level6gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level6gate0->TabIndex = 26;
			this->level6gate0->TabStop = false;
			// 
			// level6wire2
			// 
			this->level6wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level6wire2.Image")));
			this->level6wire2->Location = System::Drawing::Point(50, 100);
			this->level6wire2->Name = L"level6wire2";
			this->level6wire2->Size = System::Drawing::Size(50, 50);
			this->level6wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level6wire2->TabIndex = 28;
			this->level6wire2->TabStop = false;
			// 
			// level6wire1
			// 
			this->level6wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level6wire1.Image")));
			this->level6wire1->Location = System::Drawing::Point(50, 0);
			this->level6wire1->Name = L"level6wire1";
			this->level6wire1->Size = System::Drawing::Size(50, 50);
			this->level6wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level6wire1->TabIndex = 26;
			this->level6wire1->TabStop = false;
			// 
			// tabLevel7
			// 
			this->tabLevel7->Controls->Add(this->pictureBox10);
			this->tabLevel7->Controls->Add(this->pictureBox11);
			this->tabLevel7->Controls->Add(this->pictureBox9);
			this->tabLevel7->Controls->Add(this->pictureBox6);
			this->tabLevel7->Controls->Add(this->pictureBox1);
			this->tabLevel7->Controls->Add(this->pictureBox2);
			this->tabLevel7->Controls->Add(this->pictureBox5);
			this->tabLevel7->Controls->Add(this->button2);
			this->tabLevel7->Controls->Add(this->button1);
			this->tabLevel7->Location = System::Drawing::Point(4, 22);
			this->tabLevel7->Name = L"tabLevel7";
			this->tabLevel7->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel7->Size = System::Drawing::Size(748, 365);
			this->tabLevel7->TabIndex = 6;
			this->tabLevel7->Text = L"Level 7";
			this->tabLevel7->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(200, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 36;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(50, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 37;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(100, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 50);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 38;
			this->pictureBox5->TabStop = false;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(0, 100);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 35;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 30;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tabLevel8
			// 
			this->tabLevel8->Controls->Add(this->pictureBox18);
			this->tabLevel8->Controls->Add(this->pictureBox12);
			this->tabLevel8->Controls->Add(this->pictureBox13);
			this->tabLevel8->Controls->Add(this->pictureBox14);
			this->tabLevel8->Controls->Add(this->pictureBox15);
			this->tabLevel8->Controls->Add(this->pictureBox16);
			this->tabLevel8->Controls->Add(this->pictureBox17);
			this->tabLevel8->Controls->Add(this->button3);
			this->tabLevel8->Controls->Add(this->button4);
			this->tabLevel8->Location = System::Drawing::Point(4, 22);
			this->tabLevel8->Name = L"tabLevel8";
			this->tabLevel8->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel8->Size = System::Drawing::Size(748, 365);
			this->tabLevel8->TabIndex = 7;
			this->tabLevel8->Text = L"Level 8";
			this->tabLevel8->UseVisualStyleBackColor = true;
			// 
			// tabLevel9
			// 
			this->tabLevel9->Controls->Add(this->pictureBox42);
			this->tabLevel9->Controls->Add(this->pictureBox43);
			this->tabLevel9->Controls->Add(this->pictureBox41);
			this->tabLevel9->Controls->Add(this->pictureBox40);
			this->tabLevel9->Controls->Add(this->pictureBox39);
			this->tabLevel9->Controls->Add(this->pictureBox38);
			this->tabLevel9->Controls->Add(this->pictureBox37);
			this->tabLevel9->Controls->Add(this->pictureBox36);
			this->tabLevel9->Controls->Add(this->pictureBox35);
			this->tabLevel9->Controls->Add(this->pictureBox34);
			this->tabLevel9->Controls->Add(this->button9);
			this->tabLevel9->Controls->Add(this->button10);
			this->tabLevel9->Controls->Add(this->button11);
			this->tabLevel9->Location = System::Drawing::Point(4, 22);
			this->tabLevel9->Name = L"tabLevel9";
			this->tabLevel9->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel9->Size = System::Drawing::Size(748, 365);
			this->tabLevel9->TabIndex = 8;
			this->tabLevel9->Text = L"Level 9";
			this->tabLevel9->UseVisualStyleBackColor = true;
			// 
			// tabLevel10
			// 
			this->tabLevel10->Controls->Add(this->pictureBox32);
			this->tabLevel10->Controls->Add(this->pictureBox33);
			this->tabLevel10->Controls->Add(this->pictureBox31);
			this->tabLevel10->Controls->Add(this->pictureBox30);
			this->tabLevel10->Controls->Add(this->pictureBox29);
			this->tabLevel10->Controls->Add(this->pictureBox28);
			this->tabLevel10->Controls->Add(this->pictureBox27);
			this->tabLevel10->Controls->Add(this->pictureBox26);
			this->tabLevel10->Controls->Add(this->pictureBox25);
			this->tabLevel10->Controls->Add(this->pictureBox24);
			this->tabLevel10->Controls->Add(this->pictureBox23);
			this->tabLevel10->Controls->Add(this->pictureBox22);
			this->tabLevel10->Controls->Add(this->pictureBox21);
			this->tabLevel10->Controls->Add(this->pictureBox20);
			this->tabLevel10->Controls->Add(this->pictureBox19);
			this->tabLevel10->Controls->Add(this->button8);
			this->tabLevel10->Controls->Add(this->button7);
			this->tabLevel10->Controls->Add(this->button6);
			this->tabLevel10->Controls->Add(this->button5);
			this->tabLevel10->Location = System::Drawing::Point(4, 22);
			this->tabLevel10->Name = L"tabLevel10";
			this->tabLevel10->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel10->Size = System::Drawing::Size(748, 365);
			this->tabLevel10->TabIndex = 9;
			this->tabLevel10->Text = L"Level 10";
			this->tabLevel10->UseVisualStyleBackColor = true;
			// 
			// tabLevel11
			// 
			this->tabLevel11->Location = System::Drawing::Point(4, 22);
			this->tabLevel11->Name = L"tabLevel11";
			this->tabLevel11->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel11->Size = System::Drawing::Size(748, 365);
			this->tabLevel11->TabIndex = 10;
			this->tabLevel11->Text = L"Level 11";
			this->tabLevel11->UseVisualStyleBackColor = true;
			// 
			// tabLevel12
			// 
			this->tabLevel12->Location = System::Drawing::Point(4, 22);
			this->tabLevel12->Name = L"tabLevel12";
			this->tabLevel12->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel12->Size = System::Drawing::Size(748, 325);
			this->tabLevel12->TabIndex = 11;
			this->tabLevel12->Text = L"Level 12";
			this->tabLevel12->UseVisualStyleBackColor = true;
			// 
			// tabLevel13
			// 
			this->tabLevel13->Location = System::Drawing::Point(4, 22);
			this->tabLevel13->Name = L"tabLevel13";
			this->tabLevel13->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel13->Size = System::Drawing::Size(748, 325);
			this->tabLevel13->TabIndex = 12;
			this->tabLevel13->Text = L"Level 13";
			this->tabLevel13->UseVisualStyleBackColor = true;
			// 
			// tabLevel14
			// 
			this->tabLevel14->Location = System::Drawing::Point(4, 22);
			this->tabLevel14->Name = L"tabLevel14";
			this->tabLevel14->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel14->Size = System::Drawing::Size(748, 325);
			this->tabLevel14->TabIndex = 13;
			this->tabLevel14->Text = L"Level 14";
			this->tabLevel14->UseVisualStyleBackColor = true;
			// 
			// tabLevel15
			// 
			this->tabLevel15->Location = System::Drawing::Point(4, 22);
			this->tabLevel15->Name = L"tabLevel15";
			this->tabLevel15->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel15->Size = System::Drawing::Size(748, 325);
			this->tabLevel15->TabIndex = 14;
			this->tabLevel15->Text = L"Level 15";
			this->tabLevel15->UseVisualStyleBackColor = true;
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
			this->refAND000->Location = System::Drawing::Point(769, 34);
			this->refAND000->Name = L"refAND000";
			this->refAND000->Size = System::Drawing::Size(50, 50);
			this->refAND000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refAND000->TabIndex = 12;
			this->refAND000->TabStop = false;
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
			this->refNAND000->Location = System::Drawing::Point(1081, 34);
			this->refNAND000->Name = L"refNAND000";
			this->refNAND000->Size = System::Drawing::Size(150, 150);
			this->refNAND000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refNAND000->TabIndex = 16;
			this->refNAND000->TabStop = false;
			// 
			// refNOR000
			// 
			this->refNOR000->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR000.Image")));
			this->refNOR000->Location = System::Drawing::Point(1237, 34);
			this->refNOR000->Name = L"refNOR000";
			this->refNOR000->Size = System::Drawing::Size(150, 150);
			this->refNOR000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refNOR000->TabIndex = 17;
			this->refNOR000->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1081, 190);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(150, 150);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1237, 190);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(150, 150);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1081, 346);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(150, 150);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 24;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1237, 346);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(150, 150);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 25;
			this->pictureBox8->TabStop = false;
			// 
			// refAND001
			// 
			this->refAND001->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refAND001.Image")));
			this->refAND001->Location = System::Drawing::Point(769, 90);
			this->refAND001->Name = L"refAND001";
			this->refAND001->Size = System::Drawing::Size(50, 50);
			this->refAND001->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refAND001->TabIndex = 26;
			this->refAND001->TabStop = false;
			// 
			// refAND010
			// 
			this->refAND010->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refAND010.Image")));
			this->refAND010->Location = System::Drawing::Point(769, 146);
			this->refAND010->Name = L"refAND010";
			this->refAND010->Size = System::Drawing::Size(50, 50);
			this->refAND010->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refAND010->TabIndex = 27;
			this->refAND010->TabStop = false;
			// 
			// refAND111
			// 
			this->refAND111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refAND111.Image")));
			this->refAND111->Location = System::Drawing::Point(769, 202);
			this->refAND111->Name = L"refAND111";
			this->refAND111->Size = System::Drawing::Size(50, 50);
			this->refAND111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refAND111->TabIndex = 32;
			this->refAND111->TabStop = false;
			// 
			// refOR000
			// 
			this->refOR000->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOR000.Image")));
			this->refOR000->Location = System::Drawing::Point(825, 34);
			this->refOR000->Name = L"refOR000";
			this->refOR000->Size = System::Drawing::Size(50, 50);
			this->refOR000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refOR000->TabIndex = 33;
			this->refOR000->TabStop = false;
			// 
			// refOR101
			// 
			this->refOR101->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOR101.Image")));
			this->refOR101->Location = System::Drawing::Point(825, 90);
			this->refOR101->Name = L"refOR101";
			this->refOR101->Size = System::Drawing::Size(50, 50);
			this->refOR101->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refOR101->TabIndex = 34;
			this->refOR101->TabStop = false;
			// 
			// refOR110
			// 
			this->refOR110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOR110.Image")));
			this->refOR110->Location = System::Drawing::Point(825, 146);
			this->refOR110->Name = L"refOR110";
			this->refOR110->Size = System::Drawing::Size(50, 50);
			this->refOR110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refOR110->TabIndex = 35;
			this->refOR110->TabStop = false;
			// 
			// refOR111
			// 
			this->refOR111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOR111.Image")));
			this->refOR111->Location = System::Drawing::Point(825, 202);
			this->refOR111->Name = L"refOR111";
			this->refOR111->Size = System::Drawing::Size(50, 50);
			this->refOR111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refOR111->TabIndex = 36;
			this->refOR111->TabStop = false;
			// 
			// refNAND011
			// 
			this->refNAND011->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNAND011.Image")));
			this->refNAND011->Location = System::Drawing::Point(881, 34);
			this->refNAND011->Name = L"refNAND011";
			this->refNAND011->Size = System::Drawing::Size(50, 50);
			this->refNAND011->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNAND011->TabIndex = 37;
			this->refNAND011->TabStop = false;
			// 
			// refNOR100
			// 
			this->refNOR100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR100.Image")));
			this->refNOR100->Location = System::Drawing::Point(937, 34);
			this->refNOR100->Name = L"refNOR100";
			this->refNOR100->Size = System::Drawing::Size(50, 50);
			this->refNOR100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNOR100->TabIndex = 38;
			this->refNOR100->TabStop = false;
			// 
			// refNAND100
			// 
			this->refNAND100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNAND100.Image")));
			this->refNAND100->Location = System::Drawing::Point(881, 90);
			this->refNAND100->Name = L"refNAND100";
			this->refNAND100->Size = System::Drawing::Size(50, 50);
			this->refNAND100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNAND100->TabIndex = 39;
			this->refNAND100->TabStop = false;
			// 
			// refNOR001
			// 
			this->refNOR001->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR001.Image")));
			this->refNOR001->Location = System::Drawing::Point(937, 90);
			this->refNOR001->Name = L"refNOR001";
			this->refNOR001->Size = System::Drawing::Size(50, 50);
			this->refNOR001->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNOR001->TabIndex = 40;
			this->refNOR001->TabStop = false;
			// 
			// refNAND101
			// 
			this->refNAND101->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNAND101.Image")));
			this->refNAND101->Location = System::Drawing::Point(881, 146);
			this->refNAND101->Name = L"refNAND101";
			this->refNAND101->Size = System::Drawing::Size(50, 50);
			this->refNAND101->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNAND101->TabIndex = 41;
			this->refNAND101->TabStop = false;
			// 
			// refNOR010
			// 
			this->refNOR010->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR010.Image")));
			this->refNOR010->Location = System::Drawing::Point(937, 146);
			this->refNOR010->Name = L"refNOR010";
			this->refNOR010->Size = System::Drawing::Size(50, 50);
			this->refNOR010->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNOR010->TabIndex = 42;
			this->refNOR010->TabStop = false;
			// 
			// refNAND110
			// 
			this->refNAND110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNAND110.Image")));
			this->refNAND110->Location = System::Drawing::Point(881, 202);
			this->refNAND110->Name = L"refNAND110";
			this->refNAND110->Size = System::Drawing::Size(50, 50);
			this->refNAND110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNAND110->TabIndex = 43;
			this->refNAND110->TabStop = false;
			// 
			// refNOR011
			// 
			this->refNOR011->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR011.Image")));
			this->refNOR011->Location = System::Drawing::Point(937, 202);
			this->refNOR011->Name = L"refNOR011";
			this->refNOR011->Size = System::Drawing::Size(50, 50);
			this->refNOR011->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNOR011->TabIndex = 44;
			this->refNOR011->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(50, 100);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(200, 50);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 45;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(250, 0);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(150, 150);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 46;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(450, 50);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(50, 50);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 47;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(400, 50);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(50, 50);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 48;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(450, 50);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(50, 50);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 55;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(400, 50);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(50, 50);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 56;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(50, 0);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(200, 50);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 54;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(200, 100);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(50, 50);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 51;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(50, 100);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(50, 50);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 52;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(100, 100);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(100, 50);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 53;
			this->pictureBox17->TabStop = false;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(0, 0);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 50;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(0, 100);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 49;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(250, -9);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(150, 150);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 57;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(550, 150);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(50, 50);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 86;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(500, 150);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(50, 50);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 87;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(300, 100);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(50, 50);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 85;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(300, 50);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(50, 50);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 84;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(300, 200);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(50, 50);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 83;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(300, 250);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(50, 50);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 82;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(350, 100);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(150, 150);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 81;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(250, 50);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(50, 50);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 80;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(250, 250);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(50, 50);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 79;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(100, 191);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(150, 150);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 78;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(100, -9);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(150, 150);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 77;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(50, 300);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(50, 50);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 76;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(50, 200);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(50, 50);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 75;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(50, 100);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(50, 50);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 74;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(50, 0);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(50, 50);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 69;
			this->pictureBox19->TabStop = false;
			// 
			// button8
			// 
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(0, 0);
			this->button8->Margin = System::Windows::Forms::Padding(0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 73;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(0, 100);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 72;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(0, 200);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 71;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(0, 300);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 70;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(0, 0);
			this->button9->Margin = System::Windows::Forms::Padding(0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 76;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(0, 100);
			this->button10->Margin = System::Windows::Forms::Padding(0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 75;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(0, 200);
			this->button11->Margin = System::Windows::Forms::Padding(0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 74;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(50, 200);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(200, 50);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 77;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(50, 0);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(50, 50);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox35->TabIndex = 45;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(50, 100);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(50, 50);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox36->TabIndex = 78;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(100, 0);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(150, 150);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox37->TabIndex = 79;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(250, 200);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(50, 50);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox38->TabIndex = 83;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(250, 150);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(50, 50);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox39->TabIndex = 84;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(250, 50);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(50, 50);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox40->TabIndex = 85;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(300, 41);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(150, 150);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox41->TabIndex = 86;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(500, 100);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(50, 50);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox42->TabIndex = 87;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(450, 100);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(50, 50);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox43->TabIndex = 88;
			this->pictureBox43->TabStop = false;
			// 
			// LogicGameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1029, 586);
			this->Controls->Add(this->refNOR011);
			this->Controls->Add(this->refNAND110);
			this->Controls->Add(this->refNOR010);
			this->Controls->Add(this->refNAND101);
			this->Controls->Add(this->refNOR001);
			this->Controls->Add(this->refNAND100);
			this->Controls->Add(this->refNOR100);
			this->Controls->Add(this->refNAND011);
			this->Controls->Add(this->refOR111);
			this->Controls->Add(this->refOR110);
			this->Controls->Add(this->refOR101);
			this->Controls->Add(this->refOR000);
			this->Controls->Add(this->refAND111);
			this->Controls->Add(this->refAND010);
			this->Controls->Add(this->refAND001);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->refNOR000);
			this->Controls->Add(this->refNAND000);
			this->Controls->Add(this->refNOT10);
			this->Controls->Add(this->refNOT01);
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
			this->tabLevel2->ResumeLayout(false);
			this->tabLevel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level2output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level2wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level2wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level2gate0))->EndInit();
			this->tabLevel3->ResumeLayout(false);
			this->tabLevel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level3gate0))->EndInit();
			this->tabLevel4->ResumeLayout(false);
			this->tabLevel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level4wire2))->EndInit();
			this->tabLevel5->ResumeLayout(false);
			this->tabLevel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level5wire0))->EndInit();
			this->tabLevel6->ResumeLayout(false);
			this->tabLevel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level6wire1))->EndInit();
			this->tabLevel7->ResumeLayout(false);
			this->tabLevel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->tabLevel8->ResumeLayout(false);
			this->tabLevel8->PerformLayout();
			this->tabLevel9->ResumeLayout(false);
			this->tabLevel9->PerformLayout();
			this->tabLevel10->ResumeLayout(false);
			this->tabLevel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIN_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireH_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refIN_off))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOUT_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireH_off))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOUT_off))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND000))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOT01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOT10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND000))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR000))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND001))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND010))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refAND111))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR000))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR101))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR110))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refOR111))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND011))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR001))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND101))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR010))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNAND110))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refNOR011))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int findWire(Wire* myWire, int lev) { //find the index of the wire I need to update

			int index;

			for (unsigned int i = 0; i < puzzles[lev].wires.size(); i++) { //find index of wire from puzzles[level].wires array
				if (&puzzles[lev].wires[i] == myWire) {
					index = i;
					break;
				}
			}
			return index;
		}

		void updateWirePicbox(int lev, int wireNum, Form^ myForm) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogicGameForm::typeid));

			System::String^ level = "level";
			System::String^ wire = "wire";
			System::String^ component = level + (lev + 1) + wire + wireNum; //ex "level2wire0"

			auto controls = myForm->Controls->Find(component, true);
			System::Windows::Forms::PictureBox^ picBox = safe_cast<System::Windows::Forms::PictureBox^>(controls[0]);

			if (puzzles[lev].wires[wireNum].getStatus() == true) {

				picBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireH_on.Image")));
			}
			else {
				picBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireH_off.Image")));
			}
		}

		int findGate(Gate* myGate, int lev) { //find the index of the wire I need to update

			int index = -1;

			for (unsigned int i = 0; i < puzzles[lev].gates.size(); i++) { //find index of gate from puzzles[level].gates array
				if (&puzzles[lev].gates[i] == myGate) {
					index = i;
					break;
				}
			}
			return index;
		}

		void updateGatePicbox(int lev, int gateNum, Form^ myForm) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogicGameForm::typeid));

			System::String^ level = "level";
			System::String^ gate = "gate";
			System::String^ component = level + (lev + 1) + gate + gateNum; //ex "level2gate0"

			auto controls = myForm->Controls->Find(component, true);
			System::Windows::Forms::PictureBox^ picBox = safe_cast<System::Windows::Forms::PictureBox^>(controls[0]);

			//8 different picture options... what do
			int outputBit = puzzles[lev].gates[gateNum].getStatus();
			int inputBit1 = puzzles[lev].gates[gateNum].getStatusInput1();
			int inputBit2 = 0;
			if (puzzles[lev].gates[gateNum].getType() != 'n') {
				inputBit2 = puzzles[lev].gates[gateNum].getStatusInput2();
			}
			System::String^ myGate;
			
			switch (puzzles[lev].gates[gateNum].getType()) {
			case 'n':
				myGate = "NOT";
				break;
			case 'a' :
				myGate = "AND";
				break;
			case 'o':
				myGate = "OR";
				break;
			case 'A':
				myGate = "NAND";
				break;
			case 'O':
				myGate = "NOR";
				break;
			}
			System::String^ img = ".Image";
			System::String^ ref = "ref";
			System::String^ gateImage = ref + myGate + outputBit + inputBit1;
			if (puzzles[lev].gates[gateNum].getType() != 'n') {
				gateImage += inputBit2;
			}
			gateImage += img;
			picBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(gateImage)));

		}

		void updateOutputPicbox(int lev, Form^ myForm) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogicGameForm::typeid));

			System::String^ level = "level";
			System::String^ output = "output";
			System::String^ component = level + (lev + 1) + output; //ex "level2output"

			auto controls = myForm->Controls->Find(component, true);
			System::Windows::Forms::PictureBox^ picBox = safe_cast<System::Windows::Forms::PictureBox^>(controls[0]);

			if (puzzles[lev].out.getStatus() == true) {

				picBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOUT_on.Image")));
			}
			else {
				picBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOUT_off.Image")));
			}
		}

		void updatePicBoxes(Input& in, int lev, int iNum, Form^ myForm) { //input, level, and input #
			Wire *nextWire = puzzles[lev].inputs[iNum].output;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogicGameForm::typeid));
			int wireIndex;
			int gateIndex;

			//find first wire
			wireIndex = findWire(nextWire, lev);
			updateWirePicbox(lev, wireIndex, myForm);

			while (puzzles[lev].wires[wireIndex].getOutput()->getTerminalType() != OUTPUT) {
				if (puzzles[lev].wires[wireIndex].getOutput()->getTerminalType() == GATE) {
					gateIndex = findGate((Gate*)nextWire->getOutput(), lev);
					if (gateIndex < 0) {
						break;
					}
					updateGatePicbox(lev, gateIndex, myForm);
					nextWire = puzzles[lev].gates[gateIndex].getOutput();
					//next wire
					wireIndex = findWire(nextWire, lev);
					updateWirePicbox(lev, wireIndex, myForm);
				}

				else {
					break; //mystical terminal that isn't a gate or an output
				}
			}

			updateOutputPicbox(lev, myForm);
		
		}

		void processLevel(System::Object^ sender, int level, int input) {
			puzzles[level].inputs[input].toggle();
			puzzles[level].inputs[input].refreshState();

			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogicGameForm::typeid));
			System::Windows::Forms::Button^ btn = safe_cast<System::Windows::Forms::Button^>(sender);
			Form^ myForm = btn->FindForm();

			updateButtonGraphic(puzzles[level].inputs[input], btn, resources);
			updatePicBoxes(puzzles[level].inputs[input], level, input, myForm);

			//detect if output is on
			if (puzzles[1].out.getStatus() == true) {
				//win!
				System::String^ nextLevel = "tabLevel" + (level + 2);
				//this->tabControl->SelectTab(nextLevel);
			}
		}
		//********LEVEL 1********BASIC
private: System::Void level1input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 0;
	int input = 0;
	processLevel(sender, level, input);
}
	   //********LEVEL 2********NOT
private: System::Void level2input0_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int level = 1;
	int input = 0;

	processLevel(sender, level, input);
}
	   //********LEVEL 3********AND
private: System::Void level3input0_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int level = 2;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level3input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 2;
	int input = 1;

	processLevel(sender, level, input);
}
	//********LEVEL 4********OR
private: System::Void level4input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 3;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level4input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 3;
	int input = 1;

	processLevel(sender, level, input);
}
	   //********LEVEL 5********NAND
private: System::Void level5input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 4;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level5input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 4;
	int input = 1;

	processLevel(sender, level, input);
}
	   //********LEVEL 6********NOR
private: System::Void level6input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 5;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level6input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 5;
	int input = 1;

	processLevel(sender, level, input);
}
};


}
