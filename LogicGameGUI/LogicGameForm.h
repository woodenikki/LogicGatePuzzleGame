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
	private: System::Windows::Forms::TabControl^ level9output;
	protected:

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
private: System::Windows::Forms::PictureBox^ level7wire1;
private: System::Windows::Forms::PictureBox^ level7wire2;




private: System::Windows::Forms::PictureBox^ level7gate0;

private: System::Windows::Forms::Button^ level7input1;

private: System::Windows::Forms::Button^ level7input0;
private: System::Windows::Forms::PictureBox^ level7output;
private: System::Windows::Forms::PictureBox^ level7wire0;





private: System::Windows::Forms::PictureBox^ level7gate1;
private: System::Windows::Forms::PictureBox^ level7wire3;




private: System::Windows::Forms::PictureBox^ level8gate1;
private: System::Windows::Forms::PictureBox^ level8output;
private: System::Windows::Forms::PictureBox^ level8wire0;
private: System::Windows::Forms::PictureBox^ level8wire1;






private: System::Windows::Forms::PictureBox^ level8wire2;
private: System::Windows::Forms::PictureBox^ level8wire3;





private: System::Windows::Forms::PictureBox^ level8gate0;

private: System::Windows::Forms::Button^ level8input0;
private: System::Windows::Forms::Button^ level8input1;
private: System::Windows::Forms::PictureBox^ level10output;
private: System::Windows::Forms::PictureBox^ level19wire0;
private: System::Windows::Forms::PictureBox^ level19wire1AUR;

private: System::Windows::Forms::PictureBox^ level19wire1BLD;
private: System::Windows::Forms::PictureBox^ level19wire4ARD;
private: System::Windows::Forms::PictureBox^ level19wire4BLU;














private: System::Windows::Forms::PictureBox^ level10gate2;
private: System::Windows::Forms::PictureBox^ level19wire1CH;
private: System::Windows::Forms::PictureBox^ level19wire4CH;






private: System::Windows::Forms::PictureBox^ level10gate1;

private: System::Windows::Forms::PictureBox^ level10gate0;
private: System::Windows::Forms::PictureBox^ level19wire6;

private: System::Windows::Forms::PictureBox^ level19wire5;


private: System::Windows::Forms::PictureBox^ level19wire3;




private: System::Windows::Forms::PictureBox^ level10wire2;






private: System::Windows::Forms::Button^ level10input0;
private: System::Windows::Forms::Button^ level10input1;
private: System::Windows::Forms::Button^ level10input2;
private: System::Windows::Forms::Button^ level10input3;
private: System::Windows::Forms::PictureBox^ level9wire4BLU;

private: System::Windows::Forms::PictureBox^ level9gate1;








private: System::Windows::Forms::PictureBox^ level9wire3;

private: System::Windows::Forms::PictureBox^ level9wire2;
private: System::Windows::Forms::PictureBox^ level9wire4CH;











private: System::Windows::Forms::Button^ level9input0;
private: System::Windows::Forms::Button^ level9input1;
private: System::Windows::Forms::Button^ level9input2;



private: System::Windows::Forms::PictureBox^ pictureBox42;
private: System::Windows::Forms::PictureBox^ level9wire0;
private: System::Windows::Forms::PictureBox^ level9gate0;



private: System::Windows::Forms::PictureBox^ level9wire1;
private: System::Windows::Forms::PictureBox^ level9wire4ARD;






private: System::Windows::Forms::PictureBox^ level11output;
private: System::Windows::Forms::PictureBox^ level11wire10;


private: System::Windows::Forms::PictureBox^ level11gate2;
private: System::Windows::Forms::PictureBox^ level11wire7;


private: System::Windows::Forms::PictureBox^ level11wire6;
private: System::Windows::Forms::PictureBox^ level11wire8;
private: System::Windows::Forms::PictureBox^ level11wire9;




private: System::Windows::Forms::PictureBox^ level110wire4;

private: System::Windows::Forms::PictureBox^ level11gate1;

private: System::Windows::Forms::PictureBox^ level11gate0;
private: System::Windows::Forms::PictureBox^ level110wire3;


private: System::Windows::Forms::PictureBox^ level110wire2;

private: System::Windows::Forms::PictureBox^ level110wire1;
private: System::Windows::Forms::PictureBox^ level110wire000;



private: System::Windows::Forms::Button^ level11input3;

private: System::Windows::Forms::Button^ level11input2;

private: System::Windows::Forms::Button^ level11input1;

private: System::Windows::Forms::Button^ level11input0;
private: System::Windows::Forms::PictureBox^ level12output;
private: System::Windows::Forms::PictureBox^ level12wire10;



private: System::Windows::Forms::PictureBox^ level12gate2;
private: System::Windows::Forms::PictureBox^ level12wire7;


private: System::Windows::Forms::PictureBox^ level12wire6;
private: System::Windows::Forms::PictureBox^ level12wire8;
private: System::Windows::Forms::PictureBox^ level12wire9;



private: System::Windows::Forms::PictureBox^ level12wire5;

private: System::Windows::Forms::PictureBox^ level12wire4;

private: System::Windows::Forms::PictureBox^ level12gate1;

private: System::Windows::Forms::PictureBox^ level12gate0;
private: System::Windows::Forms::PictureBox^ level12wire0;
private: System::Windows::Forms::PictureBox^ level12wire1;
private: System::Windows::Forms::PictureBox^ level12wire2;
private: System::Windows::Forms::PictureBox^ level12wire3;





private: System::Windows::Forms::Button^ level12input3;

private: System::Windows::Forms::Button^ level12input0;
private: System::Windows::Forms::Button^ level12input1;
private: System::Windows::Forms::Button^ level12input2;
private: System::Windows::Forms::PictureBox^ level13output;
private: System::Windows::Forms::PictureBox^ level13wire10;























private: System::Windows::Forms::PictureBox^ level13gate2;
private: System::Windows::Forms::PictureBox^ level13wire7;


private: System::Windows::Forms::PictureBox^ level13wire6;
private: System::Windows::Forms::PictureBox^ level13wire8;
private: System::Windows::Forms::PictureBox^ level13wire9;




private: System::Windows::Forms::PictureBox^ level13wire5;

private: System::Windows::Forms::PictureBox^ level13wire4;

private: System::Windows::Forms::PictureBox^ level13gate1;
private: System::Windows::Forms::PictureBox^ level13wire0;
private: System::Windows::Forms::PictureBox^ level13wire1;
private: System::Windows::Forms::PictureBox^ level13wire2;
private: System::Windows::Forms::PictureBox^ level13wire3;






private: System::Windows::Forms::Button^ level13input3;

private: System::Windows::Forms::Button^ level13input0;
private: System::Windows::Forms::Button^ level13input1;
private: System::Windows::Forms::Button^ level13input2;
private: System::Windows::Forms::PictureBox^ level13gate0;
private: System::Windows::Forms::PictureBox^ level14wire3;





private: System::Windows::Forms::PictureBox^ level14wire0;


private: System::Windows::Forms::PictureBox^ level14gate1;

private: System::Windows::Forms::PictureBox^ level14gate0;

private: System::Windows::Forms::Button^ level14input3;

private: System::Windows::Forms::Button^ level14input0;
private: System::Windows::Forms::PictureBox^ level14output;
private: System::Windows::Forms::PictureBox^ level14wire12;



private: System::Windows::Forms::PictureBox^ level14wire9;

private: System::Windows::Forms::PictureBox^ level14wire8;
private: System::Windows::Forms::PictureBox^ level14wire10;
private: System::Windows::Forms::PictureBox^ level14wire11;



private: System::Windows::Forms::PictureBox^ level14wire7;

private: System::Windows::Forms::PictureBox^ level14wire6;





private: System::Windows::Forms::PictureBox^ level14wire1;
private: System::Windows::Forms::PictureBox^ level14wire2;


private: System::Windows::Forms::Button^ level14input1;
private: System::Windows::Forms::Button^ level14input2;
private: System::Windows::Forms::PictureBox^ level14gate4;



private: System::Windows::Forms::PictureBox^ level14gate3;

private: System::Windows::Forms::PictureBox^ level14gate2;
private: System::Windows::Forms::PictureBox^ level15output;
private: System::Windows::Forms::PictureBox^ level15wire11;



private: System::Windows::Forms::PictureBox^ level15gate3;

private: System::Windows::Forms::PictureBox^ level15gate2;
private: System::Windows::Forms::PictureBox^ level15wire7;


private: System::Windows::Forms::PictureBox^ level15wire6;
private: System::Windows::Forms::PictureBox^ level15wire8;
private: System::Windows::Forms::PictureBox^ level15wire9;



private: System::Windows::Forms::PictureBox^ level15wire5;

private: System::Windows::Forms::PictureBox^ level15wire4;

private: System::Windows::Forms::PictureBox^ level15gate1;

private: System::Windows::Forms::PictureBox^ level15gate0;
private: System::Windows::Forms::PictureBox^ level15wire3;


private: System::Windows::Forms::PictureBox^ level15wire2;

private: System::Windows::Forms::PictureBox^ level15wire1;

private: System::Windows::Forms::PictureBox^ level15wire0;

private: System::Windows::Forms::Button^ level15input3;

private: System::Windows::Forms::Button^ level15input2;

private: System::Windows::Forms::Button^ level15input1;

private: System::Windows::Forms::Button^ level15input0;
private: System::Windows::Forms::PictureBox^ level11wire5;
private: System::Windows::Forms::PictureBox^ level14wire5;

private: System::Windows::Forms::PictureBox^ level14wire4;
private: System::Windows::Forms::PictureBox^ level15wire10;
private: System::Windows::Forms::PictureBox^ refwireRD_off;

private: System::Windows::Forms::PictureBox^ refwireLU_off;
private: System::Windows::Forms::PictureBox^ refwireRD_on;

private: System::Windows::Forms::PictureBox^ refwireLU_on;
private: System::Windows::Forms::PictureBox^ refwireLD_on;
private: System::Windows::Forms::PictureBox^ refwireRU_on;

private: System::Windows::Forms::PictureBox^ refwireLD_off;
private: System::Windows::Forms::PictureBox^ refwireRU_off;
























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
			this->level9output = (gcnew System::Windows::Forms::TabControl());
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
			this->level7output = (gcnew System::Windows::Forms::PictureBox());
			this->level7wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level7gate1 = (gcnew System::Windows::Forms::PictureBox());
			this->level7wire3 = (gcnew System::Windows::Forms::PictureBox());
			this->level7wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level7wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level7gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level7input1 = (gcnew System::Windows::Forms::Button());
			this->level7input0 = (gcnew System::Windows::Forms::Button());
			this->tabLevel8 = (gcnew System::Windows::Forms::TabPage());
			this->level8gate1 = (gcnew System::Windows::Forms::PictureBox());
			this->level8output = (gcnew System::Windows::Forms::PictureBox());
			this->level8wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level8wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level8wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level8wire3 = (gcnew System::Windows::Forms::PictureBox());
			this->level8gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level8input0 = (gcnew System::Windows::Forms::Button());
			this->level8input1 = (gcnew System::Windows::Forms::Button());
			this->tabLevel9 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->level9wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level9gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level9wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level9wire4ARD = (gcnew System::Windows::Forms::PictureBox());
			this->level9wire4BLU = (gcnew System::Windows::Forms::PictureBox());
			this->level9gate1 = (gcnew System::Windows::Forms::PictureBox());
			this->level9wire3 = (gcnew System::Windows::Forms::PictureBox());
			this->level9wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level9wire4CH = (gcnew System::Windows::Forms::PictureBox());
			this->level9input0 = (gcnew System::Windows::Forms::Button());
			this->level9input1 = (gcnew System::Windows::Forms::Button());
			this->level9input2 = (gcnew System::Windows::Forms::Button());
			this->tabLevel10 = (gcnew System::Windows::Forms::TabPage());
			this->level10output = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire1AUR = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire1BLD = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire4ARD = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire4BLU = (gcnew System::Windows::Forms::PictureBox());
			this->level10gate2 = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire1CH = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire4CH = (gcnew System::Windows::Forms::PictureBox());
			this->level10gate1 = (gcnew System::Windows::Forms::PictureBox());
			this->level10gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire6 = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire5 = (gcnew System::Windows::Forms::PictureBox());
			this->level19wire3 = (gcnew System::Windows::Forms::PictureBox());
			this->level10wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level10input0 = (gcnew System::Windows::Forms::Button());
			this->level10input1 = (gcnew System::Windows::Forms::Button());
			this->level10input2 = (gcnew System::Windows::Forms::Button());
			this->level10input3 = (gcnew System::Windows::Forms::Button());
			this->tabLevel11 = (gcnew System::Windows::Forms::TabPage());
			this->level11output = (gcnew System::Windows::Forms::PictureBox());
			this->level11wire10 = (gcnew System::Windows::Forms::PictureBox());
			this->level11gate2 = (gcnew System::Windows::Forms::PictureBox());
			this->level11wire7 = (gcnew System::Windows::Forms::PictureBox());
			this->level11wire6 = (gcnew System::Windows::Forms::PictureBox());
			this->level11wire8 = (gcnew System::Windows::Forms::PictureBox());
			this->level11wire9 = (gcnew System::Windows::Forms::PictureBox());
			this->level11wire5 = (gcnew System::Windows::Forms::PictureBox());
			this->level110wire4 = (gcnew System::Windows::Forms::PictureBox());
			this->level11gate1 = (gcnew System::Windows::Forms::PictureBox());
			this->level11gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level110wire3 = (gcnew System::Windows::Forms::PictureBox());
			this->level110wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level110wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level110wire000 = (gcnew System::Windows::Forms::PictureBox());
			this->level11input3 = (gcnew System::Windows::Forms::Button());
			this->level11input2 = (gcnew System::Windows::Forms::Button());
			this->level11input1 = (gcnew System::Windows::Forms::Button());
			this->level11input0 = (gcnew System::Windows::Forms::Button());
			this->tabLevel12 = (gcnew System::Windows::Forms::TabPage());
			this->level12output = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire10 = (gcnew System::Windows::Forms::PictureBox());
			this->level12gate2 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire7 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire6 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire8 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire9 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire5 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire4 = (gcnew System::Windows::Forms::PictureBox());
			this->level12gate1 = (gcnew System::Windows::Forms::PictureBox());
			this->level12gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level12wire3 = (gcnew System::Windows::Forms::PictureBox());
			this->level12input3 = (gcnew System::Windows::Forms::Button());
			this->level12input0 = (gcnew System::Windows::Forms::Button());
			this->level12input1 = (gcnew System::Windows::Forms::Button());
			this->level12input2 = (gcnew System::Windows::Forms::Button());
			this->tabLevel13 = (gcnew System::Windows::Forms::TabPage());
			this->level13gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level13output = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire10 = (gcnew System::Windows::Forms::PictureBox());
			this->level13gate2 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire7 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire6 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire8 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire9 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire5 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire4 = (gcnew System::Windows::Forms::PictureBox());
			this->level13gate1 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level13wire3 = (gcnew System::Windows::Forms::PictureBox());
			this->level13input3 = (gcnew System::Windows::Forms::Button());
			this->level13input0 = (gcnew System::Windows::Forms::Button());
			this->level13input1 = (gcnew System::Windows::Forms::Button());
			this->level13input2 = (gcnew System::Windows::Forms::Button());
			this->tabLevel14 = (gcnew System::Windows::Forms::TabPage());
			this->level14wire5 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire4 = (gcnew System::Windows::Forms::PictureBox());
			this->level14gate4 = (gcnew System::Windows::Forms::PictureBox());
			this->level14gate3 = (gcnew System::Windows::Forms::PictureBox());
			this->level14gate2 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire3 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level14gate1 = (gcnew System::Windows::Forms::PictureBox());
			this->level14gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level14input3 = (gcnew System::Windows::Forms::Button());
			this->level14input0 = (gcnew System::Windows::Forms::Button());
			this->level14output = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire12 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire9 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire8 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire10 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire11 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire7 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire6 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level14wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level14input1 = (gcnew System::Windows::Forms::Button());
			this->level14input2 = (gcnew System::Windows::Forms::Button());
			this->tabLevel15 = (gcnew System::Windows::Forms::TabPage());
			this->level15wire10 = (gcnew System::Windows::Forms::PictureBox());
			this->level15output = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire11 = (gcnew System::Windows::Forms::PictureBox());
			this->level15gate3 = (gcnew System::Windows::Forms::PictureBox());
			this->level15gate2 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire7 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire6 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire8 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire9 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire5 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire4 = (gcnew System::Windows::Forms::PictureBox());
			this->level15gate1 = (gcnew System::Windows::Forms::PictureBox());
			this->level15gate0 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire3 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire2 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire1 = (gcnew System::Windows::Forms::PictureBox());
			this->level15wire0 = (gcnew System::Windows::Forms::PictureBox());
			this->level15input3 = (gcnew System::Windows::Forms::Button());
			this->level15input2 = (gcnew System::Windows::Forms::Button());
			this->level15input1 = (gcnew System::Windows::Forms::Button());
			this->level15input0 = (gcnew System::Windows::Forms::Button());
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
			this->refwireRD_off = (gcnew System::Windows::Forms::PictureBox());
			this->refwireLU_off = (gcnew System::Windows::Forms::PictureBox());
			this->refwireRD_on = (gcnew System::Windows::Forms::PictureBox());
			this->refwireLU_on = (gcnew System::Windows::Forms::PictureBox());
			this->refwireLD_on = (gcnew System::Windows::Forms::PictureBox());
			this->refwireRU_on = (gcnew System::Windows::Forms::PictureBox());
			this->refwireLD_off = (gcnew System::Windows::Forms::PictureBox());
			this->refwireRU_off = (gcnew System::Windows::Forms::PictureBox());
			this->level9output->SuspendLayout();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7gate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7wire3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7gate0))->BeginInit();
			this->tabLevel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8gate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8wire3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8gate0))->BeginInit();
			this->tabLevel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire4ARD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire4BLU))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9gate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire4CH))->BeginInit();
			this->tabLevel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire1AUR))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire1BLD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire4ARD))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire4BLU))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10gate2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire1CH))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire4CH))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10gate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10wire2))->BeginInit();
			this->tabLevel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11gate2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11gate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire000))->BeginInit();
			this->tabLevel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12gate2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12gate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire3))->BeginInit();
			this->tabLevel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13gate2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13gate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire3))->BeginInit();
			this->tabLevel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire2))->BeginInit();
			this->tabLevel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15output))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15gate3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15gate2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15gate1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15gate0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire0))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireRD_off))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireLU_off))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireRD_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireLU_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireLD_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireRU_on))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireLD_off))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireRU_off))->BeginInit();
			this->SuspendLayout();
			// 
			// level9output
			// 
			this->level9output->Controls->Add(this->tabLevel1);
			this->level9output->Controls->Add(this->tabLevel2);
			this->level9output->Controls->Add(this->tabLevel3);
			this->level9output->Controls->Add(this->tabLevel4);
			this->level9output->Controls->Add(this->tabLevel5);
			this->level9output->Controls->Add(this->tabLevel6);
			this->level9output->Controls->Add(this->tabLevel7);
			this->level9output->Controls->Add(this->tabLevel8);
			this->level9output->Controls->Add(this->tabLevel9);
			this->level9output->Controls->Add(this->tabLevel10);
			this->level9output->Controls->Add(this->tabLevel11);
			this->level9output->Controls->Add(this->tabLevel12);
			this->level9output->Controls->Add(this->tabLevel13);
			this->level9output->Controls->Add(this->tabLevel14);
			this->level9output->Controls->Add(this->tabLevel15);
			this->level9output->Location = System::Drawing::Point(12, 12);
			this->level9output->Name = L"level9output";
			this->level9output->SelectedIndex = 0;
			this->level9output->Size = System::Drawing::Size(762, 391);
			this->level9output->TabIndex = 5;
			// 
			// tabLevel1
			// 
			this->tabLevel1->Controls->Add(this->level1output);
			this->tabLevel1->Controls->Add(this->level1wire0);
			this->tabLevel1->Controls->Add(this->level1input0);
			this->tabLevel1->Location = System::Drawing::Point(4, 22);
			this->tabLevel1->Name = L"tabLevel1";
			this->tabLevel1->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel1->Size = System::Drawing::Size(754, 365);
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
			this->tabLevel2->Size = System::Drawing::Size(754, 365);
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
			this->tabLevel3->Size = System::Drawing::Size(754, 365);
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
			this->tabLevel4->Size = System::Drawing::Size(754, 365);
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
			this->tabLevel5->Size = System::Drawing::Size(754, 365);
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
			this->tabLevel6->Size = System::Drawing::Size(754, 365);
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
			this->tabLevel7->Controls->Add(this->level7output);
			this->tabLevel7->Controls->Add(this->level7wire0);
			this->tabLevel7->Controls->Add(this->level7gate1);
			this->tabLevel7->Controls->Add(this->level7wire3);
			this->tabLevel7->Controls->Add(this->level7wire1);
			this->tabLevel7->Controls->Add(this->level7wire2);
			this->tabLevel7->Controls->Add(this->level7gate0);
			this->tabLevel7->Controls->Add(this->level7input1);
			this->tabLevel7->Controls->Add(this->level7input0);
			this->tabLevel7->Location = System::Drawing::Point(4, 22);
			this->tabLevel7->Name = L"tabLevel7";
			this->tabLevel7->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel7->Size = System::Drawing::Size(754, 365);
			this->tabLevel7->TabIndex = 6;
			this->tabLevel7->Text = L"Level 7";
			this->tabLevel7->UseVisualStyleBackColor = true;
			// 
			// level7output
			// 
			this->level7output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level7output.Image")));
			this->level7output->Location = System::Drawing::Point(450, 50);
			this->level7output->Name = L"level7output";
			this->level7output->Size = System::Drawing::Size(50, 50);
			this->level7output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level7output->TabIndex = 47;
			this->level7output->TabStop = false;
			// 
			// level7wire0
			// 
			this->level7wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level7wire0.Image")));
			this->level7wire0->Location = System::Drawing::Point(400, 50);
			this->level7wire0->Name = L"level7wire0";
			this->level7wire0->Size = System::Drawing::Size(50, 50);
			this->level7wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level7wire0->TabIndex = 48;
			this->level7wire0->TabStop = false;
			// 
			// level7gate1
			// 
			this->level7gate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level7gate1.Image")));
			this->level7gate1->Location = System::Drawing::Point(250, 0);
			this->level7gate1->Name = L"level7gate1";
			this->level7gate1->Size = System::Drawing::Size(150, 150);
			this->level7gate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level7gate1->TabIndex = 46;
			this->level7gate1->TabStop = false;
			// 
			// level7wire3
			// 
			this->level7wire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level7wire3.Image")));
			this->level7wire3->Location = System::Drawing::Point(50, 100);
			this->level7wire3->Name = L"level7wire3";
			this->level7wire3->Size = System::Drawing::Size(200, 50);
			this->level7wire3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->level7wire3->TabIndex = 45;
			this->level7wire3->TabStop = false;
			// 
			// level7wire1
			// 
			this->level7wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level7wire1.Image")));
			this->level7wire1->Location = System::Drawing::Point(200, 0);
			this->level7wire1->Name = L"level7wire1";
			this->level7wire1->Size = System::Drawing::Size(50, 50);
			this->level7wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level7wire1->TabIndex = 36;
			this->level7wire1->TabStop = false;
			// 
			// level7wire2
			// 
			this->level7wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level7wire2.Image")));
			this->level7wire2->Location = System::Drawing::Point(50, 0);
			this->level7wire2->Name = L"level7wire2";
			this->level7wire2->Size = System::Drawing::Size(50, 50);
			this->level7wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level7wire2->TabIndex = 37;
			this->level7wire2->TabStop = false;
			// 
			// level7gate0
			// 
			this->level7gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level7gate0.Image")));
			this->level7gate0->Location = System::Drawing::Point(100, 0);
			this->level7gate0->Name = L"level7gate0";
			this->level7gate0->Size = System::Drawing::Size(100, 50);
			this->level7gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level7gate0->TabIndex = 38;
			this->level7gate0->TabStop = false;
			// 
			// level7input1
			// 
			this->level7input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level7input1.Image")));
			this->level7input1->Location = System::Drawing::Point(0, 100);
			this->level7input1->Margin = System::Windows::Forms::Padding(0);
			this->level7input1->Name = L"level7input1";
			this->level7input1->Size = System::Drawing::Size(50, 50);
			this->level7input1->TabIndex = 35;
			this->level7input1->UseVisualStyleBackColor = true;
			this->level7input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level7input1_Click);
			// 
			// level7input0
			// 
			this->level7input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level7input0.Image")));
			this->level7input0->Location = System::Drawing::Point(0, 0);
			this->level7input0->Margin = System::Windows::Forms::Padding(0);
			this->level7input0->Name = L"level7input0";
			this->level7input0->Size = System::Drawing::Size(50, 50);
			this->level7input0->TabIndex = 30;
			this->level7input0->UseVisualStyleBackColor = true;
			this->level7input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level7input0_Click);
			// 
			// tabLevel8
			// 
			this->tabLevel8->Controls->Add(this->level8gate1);
			this->tabLevel8->Controls->Add(this->level8output);
			this->tabLevel8->Controls->Add(this->level8wire0);
			this->tabLevel8->Controls->Add(this->level8wire1);
			this->tabLevel8->Controls->Add(this->level8wire2);
			this->tabLevel8->Controls->Add(this->level8wire3);
			this->tabLevel8->Controls->Add(this->level8gate0);
			this->tabLevel8->Controls->Add(this->level8input0);
			this->tabLevel8->Controls->Add(this->level8input1);
			this->tabLevel8->Location = System::Drawing::Point(4, 22);
			this->tabLevel8->Name = L"tabLevel8";
			this->tabLevel8->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel8->Size = System::Drawing::Size(754, 365);
			this->tabLevel8->TabIndex = 7;
			this->tabLevel8->Text = L"Level 8";
			this->tabLevel8->UseVisualStyleBackColor = true;
			// 
			// level8gate1
			// 
			this->level8gate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level8gate1.Image")));
			this->level8gate1->Location = System::Drawing::Point(250, -9);
			this->level8gate1->Name = L"level8gate1";
			this->level8gate1->Size = System::Drawing::Size(150, 150);
			this->level8gate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level8gate1->TabIndex = 57;
			this->level8gate1->TabStop = false;
			// 
			// level8output
			// 
			this->level8output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level8output.Image")));
			this->level8output->Location = System::Drawing::Point(450, 50);
			this->level8output->Name = L"level8output";
			this->level8output->Size = System::Drawing::Size(50, 50);
			this->level8output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level8output->TabIndex = 55;
			this->level8output->TabStop = false;
			// 
			// level8wire0
			// 
			this->level8wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level8wire0.Image")));
			this->level8wire0->Location = System::Drawing::Point(400, 50);
			this->level8wire0->Name = L"level8wire0";
			this->level8wire0->Size = System::Drawing::Size(50, 50);
			this->level8wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level8wire0->TabIndex = 56;
			this->level8wire0->TabStop = false;
			// 
			// level8wire1
			// 
			this->level8wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level8wire1.Image")));
			this->level8wire1->Location = System::Drawing::Point(50, 0);
			this->level8wire1->Name = L"level8wire1";
			this->level8wire1->Size = System::Drawing::Size(200, 50);
			this->level8wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->level8wire1->TabIndex = 54;
			this->level8wire1->TabStop = false;
			// 
			// level8wire2
			// 
			this->level8wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level8wire2.Image")));
			this->level8wire2->Location = System::Drawing::Point(200, 100);
			this->level8wire2->Name = L"level8wire2";
			this->level8wire2->Size = System::Drawing::Size(50, 50);
			this->level8wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level8wire2->TabIndex = 51;
			this->level8wire2->TabStop = false;
			// 
			// level8wire3
			// 
			this->level8wire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level8wire3.Image")));
			this->level8wire3->Location = System::Drawing::Point(50, 100);
			this->level8wire3->Name = L"level8wire3";
			this->level8wire3->Size = System::Drawing::Size(50, 50);
			this->level8wire3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level8wire3->TabIndex = 52;
			this->level8wire3->TabStop = false;
			// 
			// level8gate0
			// 
			this->level8gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level8gate0.Image")));
			this->level8gate0->Location = System::Drawing::Point(100, 100);
			this->level8gate0->Name = L"level8gate0";
			this->level8gate0->Size = System::Drawing::Size(100, 50);
			this->level8gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level8gate0->TabIndex = 53;
			this->level8gate0->TabStop = false;
			// 
			// level8input0
			// 
			this->level8input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level8input0.Image")));
			this->level8input0->Location = System::Drawing::Point(0, 0);
			this->level8input0->Margin = System::Windows::Forms::Padding(0);
			this->level8input0->Name = L"level8input0";
			this->level8input0->Size = System::Drawing::Size(50, 50);
			this->level8input0->TabIndex = 50;
			this->level8input0->UseVisualStyleBackColor = true;
			this->level8input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level8input0_Click);
			// 
			// level8input1
			// 
			this->level8input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level8input1.Image")));
			this->level8input1->Location = System::Drawing::Point(0, 100);
			this->level8input1->Margin = System::Windows::Forms::Padding(0);
			this->level8input1->Name = L"level8input1";
			this->level8input1->Size = System::Drawing::Size(50, 50);
			this->level8input1->TabIndex = 49;
			this->level8input1->UseVisualStyleBackColor = true;
			this->level8input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level8input1_Click);
			// 
			// tabLevel9
			// 
			this->tabLevel9->Controls->Add(this->pictureBox42);
			this->tabLevel9->Controls->Add(this->level9wire0);
			this->tabLevel9->Controls->Add(this->level9gate0);
			this->tabLevel9->Controls->Add(this->level9wire1);
			this->tabLevel9->Controls->Add(this->level9wire4ARD);
			this->tabLevel9->Controls->Add(this->level9wire4BLU);
			this->tabLevel9->Controls->Add(this->level9gate1);
			this->tabLevel9->Controls->Add(this->level9wire3);
			this->tabLevel9->Controls->Add(this->level9wire2);
			this->tabLevel9->Controls->Add(this->level9wire4CH);
			this->tabLevel9->Controls->Add(this->level9input0);
			this->tabLevel9->Controls->Add(this->level9input1);
			this->tabLevel9->Controls->Add(this->level9input2);
			this->tabLevel9->Location = System::Drawing::Point(4, 22);
			this->tabLevel9->Name = L"tabLevel9";
			this->tabLevel9->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel9->Size = System::Drawing::Size(754, 365);
			this->tabLevel9->TabIndex = 8;
			this->tabLevel9->Text = L"Level 9";
			this->tabLevel9->UseVisualStyleBackColor = true;
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
			// level9wire0
			// 
			this->level9wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9wire0.Image")));
			this->level9wire0->Location = System::Drawing::Point(450, 100);
			this->level9wire0->Name = L"level9wire0";
			this->level9wire0->Size = System::Drawing::Size(50, 50);
			this->level9wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level9wire0->TabIndex = 88;
			this->level9wire0->TabStop = false;
			// 
			// level9gate0
			// 
			this->level9gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9gate0.Image")));
			this->level9gate0->Location = System::Drawing::Point(300, 41);
			this->level9gate0->Name = L"level9gate0";
			this->level9gate0->Size = System::Drawing::Size(150, 150);
			this->level9gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level9gate0->TabIndex = 86;
			this->level9gate0->TabStop = false;
			// 
			// level9wire1
			// 
			this->level9wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9wire1.Image")));
			this->level9wire1->Location = System::Drawing::Point(250, 50);
			this->level9wire1->Name = L"level9wire1";
			this->level9wire1->Size = System::Drawing::Size(50, 50);
			this->level9wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level9wire1->TabIndex = 85;
			this->level9wire1->TabStop = false;
			// 
			// level9wire4ARD
			// 
			this->level9wire4ARD->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9wire4ARD.Image")));
			this->level9wire4ARD->Location = System::Drawing::Point(250, 150);
			this->level9wire4ARD->Name = L"level9wire4ARD";
			this->level9wire4ARD->Size = System::Drawing::Size(50, 50);
			this->level9wire4ARD->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level9wire4ARD->TabIndex = 84;
			this->level9wire4ARD->TabStop = false;
			// 
			// level9wire4BLU
			// 
			this->level9wire4BLU->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9wire4BLU.Image")));
			this->level9wire4BLU->Location = System::Drawing::Point(250, 200);
			this->level9wire4BLU->Name = L"level9wire4BLU";
			this->level9wire4BLU->Size = System::Drawing::Size(50, 50);
			this->level9wire4BLU->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level9wire4BLU->TabIndex = 83;
			this->level9wire4BLU->TabStop = false;
			// 
			// level9gate1
			// 
			this->level9gate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9gate1.Image")));
			this->level9gate1->Location = System::Drawing::Point(100, 0);
			this->level9gate1->Name = L"level9gate1";
			this->level9gate1->Size = System::Drawing::Size(150, 150);
			this->level9gate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level9gate1->TabIndex = 79;
			this->level9gate1->TabStop = false;
			// 
			// level9wire3
			// 
			this->level9wire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9wire3.Image")));
			this->level9wire3->Location = System::Drawing::Point(50, 100);
			this->level9wire3->Name = L"level9wire3";
			this->level9wire3->Size = System::Drawing::Size(50, 50);
			this->level9wire3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level9wire3->TabIndex = 78;
			this->level9wire3->TabStop = false;
			// 
			// level9wire2
			// 
			this->level9wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9wire2.Image")));
			this->level9wire2->Location = System::Drawing::Point(50, 0);
			this->level9wire2->Name = L"level9wire2";
			this->level9wire2->Size = System::Drawing::Size(50, 50);
			this->level9wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level9wire2->TabIndex = 45;
			this->level9wire2->TabStop = false;
			// 
			// level9wire4CH
			// 
			this->level9wire4CH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9wire4CH.Image")));
			this->level9wire4CH->Location = System::Drawing::Point(50, 200);
			this->level9wire4CH->Name = L"level9wire4CH";
			this->level9wire4CH->Size = System::Drawing::Size(214, 50);
			this->level9wire4CH->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->level9wire4CH->TabIndex = 77;
			this->level9wire4CH->TabStop = false;
			// 
			// level9input0
			// 
			this->level9input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9input0.Image")));
			this->level9input0->Location = System::Drawing::Point(0, 0);
			this->level9input0->Margin = System::Windows::Forms::Padding(0);
			this->level9input0->Name = L"level9input0";
			this->level9input0->Size = System::Drawing::Size(50, 50);
			this->level9input0->TabIndex = 76;
			this->level9input0->UseVisualStyleBackColor = true;
			this->level9input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level9input0_Click);
			// 
			// level9input1
			// 
			this->level9input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9input1.Image")));
			this->level9input1->Location = System::Drawing::Point(0, 100);
			this->level9input1->Margin = System::Windows::Forms::Padding(0);
			this->level9input1->Name = L"level9input1";
			this->level9input1->Size = System::Drawing::Size(50, 50);
			this->level9input1->TabIndex = 75;
			this->level9input1->UseVisualStyleBackColor = true;
			this->level9input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level9input1_Click);
			// 
			// level9input2
			// 
			this->level9input2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level9input2.Image")));
			this->level9input2->Location = System::Drawing::Point(0, 200);
			this->level9input2->Margin = System::Windows::Forms::Padding(0);
			this->level9input2->Name = L"level9input2";
			this->level9input2->Size = System::Drawing::Size(50, 50);
			this->level9input2->TabIndex = 74;
			this->level9input2->UseVisualStyleBackColor = true;
			this->level9input2->Click += gcnew System::EventHandler(this, &LogicGameForm::level9input2_Click);
			// 
			// tabLevel10
			// 
			this->tabLevel10->Controls->Add(this->level10output);
			this->tabLevel10->Controls->Add(this->level19wire0);
			this->tabLevel10->Controls->Add(this->level19wire1AUR);
			this->tabLevel10->Controls->Add(this->level19wire1BLD);
			this->tabLevel10->Controls->Add(this->level19wire4ARD);
			this->tabLevel10->Controls->Add(this->level19wire4BLU);
			this->tabLevel10->Controls->Add(this->level10gate2);
			this->tabLevel10->Controls->Add(this->level19wire1CH);
			this->tabLevel10->Controls->Add(this->level19wire4CH);
			this->tabLevel10->Controls->Add(this->level10gate1);
			this->tabLevel10->Controls->Add(this->level10gate0);
			this->tabLevel10->Controls->Add(this->level19wire6);
			this->tabLevel10->Controls->Add(this->level19wire5);
			this->tabLevel10->Controls->Add(this->level19wire3);
			this->tabLevel10->Controls->Add(this->level10wire2);
			this->tabLevel10->Controls->Add(this->level10input0);
			this->tabLevel10->Controls->Add(this->level10input1);
			this->tabLevel10->Controls->Add(this->level10input2);
			this->tabLevel10->Controls->Add(this->level10input3);
			this->tabLevel10->Location = System::Drawing::Point(4, 22);
			this->tabLevel10->Name = L"tabLevel10";
			this->tabLevel10->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel10->Size = System::Drawing::Size(754, 365);
			this->tabLevel10->TabIndex = 9;
			this->tabLevel10->Text = L"Level 10";
			this->tabLevel10->UseVisualStyleBackColor = true;
			// 
			// level10output
			// 
			this->level10output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level10output.Image")));
			this->level10output->Location = System::Drawing::Point(550, 150);
			this->level10output->Name = L"level10output";
			this->level10output->Size = System::Drawing::Size(50, 50);
			this->level10output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level10output->TabIndex = 86;
			this->level10output->TabStop = false;
			// 
			// level19wire0
			// 
			this->level19wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire0.Image")));
			this->level19wire0->Location = System::Drawing::Point(500, 150);
			this->level19wire0->Name = L"level19wire0";
			this->level19wire0->Size = System::Drawing::Size(50, 50);
			this->level19wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire0->TabIndex = 87;
			this->level19wire0->TabStop = false;
			// 
			// level19wire1AUR
			// 
			this->level19wire1AUR->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire1AUR.Image")));
			this->level19wire1AUR->Location = System::Drawing::Point(300, 100);
			this->level19wire1AUR->Name = L"level19wire1AUR";
			this->level19wire1AUR->Size = System::Drawing::Size(50, 50);
			this->level19wire1AUR->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire1AUR->TabIndex = 85;
			this->level19wire1AUR->TabStop = false;
			// 
			// level19wire1BLD
			// 
			this->level19wire1BLD->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire1BLD.Image")));
			this->level19wire1BLD->Location = System::Drawing::Point(300, 50);
			this->level19wire1BLD->Name = L"level19wire1BLD";
			this->level19wire1BLD->Size = System::Drawing::Size(50, 50);
			this->level19wire1BLD->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire1BLD->TabIndex = 84;
			this->level19wire1BLD->TabStop = false;
			// 
			// level19wire4ARD
			// 
			this->level19wire4ARD->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire4ARD.Image")));
			this->level19wire4ARD->Location = System::Drawing::Point(300, 200);
			this->level19wire4ARD->Name = L"level19wire4ARD";
			this->level19wire4ARD->Size = System::Drawing::Size(50, 50);
			this->level19wire4ARD->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire4ARD->TabIndex = 83;
			this->level19wire4ARD->TabStop = false;
			// 
			// level19wire4BLU
			// 
			this->level19wire4BLU->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire4BLU.Image")));
			this->level19wire4BLU->Location = System::Drawing::Point(300, 250);
			this->level19wire4BLU->Name = L"level19wire4BLU";
			this->level19wire4BLU->Size = System::Drawing::Size(50, 50);
			this->level19wire4BLU->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire4BLU->TabIndex = 82;
			this->level19wire4BLU->TabStop = false;
			// 
			// level10gate2
			// 
			this->level10gate2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level10gate2.Image")));
			this->level10gate2->Location = System::Drawing::Point(350, 100);
			this->level10gate2->Name = L"level10gate2";
			this->level10gate2->Size = System::Drawing::Size(150, 150);
			this->level10gate2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level10gate2->TabIndex = 81;
			this->level10gate2->TabStop = false;
			// 
			// level19wire1CH
			// 
			this->level19wire1CH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire1CH.Image")));
			this->level19wire1CH->Location = System::Drawing::Point(250, 50);
			this->level19wire1CH->Name = L"level19wire1CH";
			this->level19wire1CH->Size = System::Drawing::Size(50, 50);
			this->level19wire1CH->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire1CH->TabIndex = 80;
			this->level19wire1CH->TabStop = false;
			// 
			// level19wire4CH
			// 
			this->level19wire4CH->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire4CH.Image")));
			this->level19wire4CH->Location = System::Drawing::Point(250, 250);
			this->level19wire4CH->Name = L"level19wire4CH";
			this->level19wire4CH->Size = System::Drawing::Size(50, 50);
			this->level19wire4CH->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire4CH->TabIndex = 79;
			this->level19wire4CH->TabStop = false;
			// 
			// level10gate1
			// 
			this->level10gate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level10gate1.Image")));
			this->level10gate1->Location = System::Drawing::Point(100, 191);
			this->level10gate1->Name = L"level10gate1";
			this->level10gate1->Size = System::Drawing::Size(150, 150);
			this->level10gate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level10gate1->TabIndex = 78;
			this->level10gate1->TabStop = false;
			// 
			// level10gate0
			// 
			this->level10gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level10gate0.Image")));
			this->level10gate0->Location = System::Drawing::Point(100, -9);
			this->level10gate0->Name = L"level10gate0";
			this->level10gate0->Size = System::Drawing::Size(150, 150);
			this->level10gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level10gate0->TabIndex = 77;
			this->level10gate0->TabStop = false;
			// 
			// level19wire6
			// 
			this->level19wire6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire6.Image")));
			this->level19wire6->Location = System::Drawing::Point(50, 300);
			this->level19wire6->Name = L"level19wire6";
			this->level19wire6->Size = System::Drawing::Size(50, 50);
			this->level19wire6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire6->TabIndex = 76;
			this->level19wire6->TabStop = false;
			// 
			// level19wire5
			// 
			this->level19wire5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire5.Image")));
			this->level19wire5->Location = System::Drawing::Point(50, 200);
			this->level19wire5->Name = L"level19wire5";
			this->level19wire5->Size = System::Drawing::Size(50, 50);
			this->level19wire5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire5->TabIndex = 75;
			this->level19wire5->TabStop = false;
			// 
			// level19wire3
			// 
			this->level19wire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level19wire3.Image")));
			this->level19wire3->Location = System::Drawing::Point(50, 100);
			this->level19wire3->Name = L"level19wire3";
			this->level19wire3->Size = System::Drawing::Size(50, 50);
			this->level19wire3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level19wire3->TabIndex = 74;
			this->level19wire3->TabStop = false;
			// 
			// level10wire2
			// 
			this->level10wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level10wire2.Image")));
			this->level10wire2->Location = System::Drawing::Point(50, 0);
			this->level10wire2->Name = L"level10wire2";
			this->level10wire2->Size = System::Drawing::Size(50, 50);
			this->level10wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level10wire2->TabIndex = 69;
			this->level10wire2->TabStop = false;
			// 
			// level10input0
			// 
			this->level10input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level10input0.Image")));
			this->level10input0->Location = System::Drawing::Point(0, 0);
			this->level10input0->Margin = System::Windows::Forms::Padding(0);
			this->level10input0->Name = L"level10input0";
			this->level10input0->Size = System::Drawing::Size(50, 50);
			this->level10input0->TabIndex = 73;
			this->level10input0->UseVisualStyleBackColor = true;
			this->level10input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level10input0_Click);
			// 
			// level10input1
			// 
			this->level10input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level10input1.Image")));
			this->level10input1->Location = System::Drawing::Point(0, 100);
			this->level10input1->Margin = System::Windows::Forms::Padding(0);
			this->level10input1->Name = L"level10input1";
			this->level10input1->Size = System::Drawing::Size(50, 50);
			this->level10input1->TabIndex = 72;
			this->level10input1->UseVisualStyleBackColor = true;
			this->level10input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level10input1_Click);
			// 
			// level10input2
			// 
			this->level10input2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level10input2.Image")));
			this->level10input2->Location = System::Drawing::Point(0, 200);
			this->level10input2->Margin = System::Windows::Forms::Padding(0);
			this->level10input2->Name = L"level10input2";
			this->level10input2->Size = System::Drawing::Size(50, 50);
			this->level10input2->TabIndex = 71;
			this->level10input2->UseVisualStyleBackColor = true;
			this->level10input2->Click += gcnew System::EventHandler(this, &LogicGameForm::level10input2_Click);
			// 
			// level10input3
			// 
			this->level10input3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level10input3.Image")));
			this->level10input3->Location = System::Drawing::Point(0, 300);
			this->level10input3->Margin = System::Windows::Forms::Padding(0);
			this->level10input3->Name = L"level10input3";
			this->level10input3->Size = System::Drawing::Size(50, 50);
			this->level10input3->TabIndex = 70;
			this->level10input3->UseVisualStyleBackColor = true;
			this->level10input3->Click += gcnew System::EventHandler(this, &LogicGameForm::level10input3_Click);
			// 
			// tabLevel11
			// 
			this->tabLevel11->Controls->Add(this->level11output);
			this->tabLevel11->Controls->Add(this->level11wire10);
			this->tabLevel11->Controls->Add(this->level11gate2);
			this->tabLevel11->Controls->Add(this->level11wire7);
			this->tabLevel11->Controls->Add(this->level11wire6);
			this->tabLevel11->Controls->Add(this->level11wire8);
			this->tabLevel11->Controls->Add(this->level11wire9);
			this->tabLevel11->Controls->Add(this->level11wire5);
			this->tabLevel11->Controls->Add(this->level110wire4);
			this->tabLevel11->Controls->Add(this->level11gate1);
			this->tabLevel11->Controls->Add(this->level11gate0);
			this->tabLevel11->Controls->Add(this->level110wire3);
			this->tabLevel11->Controls->Add(this->level110wire2);
			this->tabLevel11->Controls->Add(this->level110wire1);
			this->tabLevel11->Controls->Add(this->level110wire000);
			this->tabLevel11->Controls->Add(this->level11input3);
			this->tabLevel11->Controls->Add(this->level11input2);
			this->tabLevel11->Controls->Add(this->level11input1);
			this->tabLevel11->Controls->Add(this->level11input0);
			this->tabLevel11->Location = System::Drawing::Point(4, 22);
			this->tabLevel11->Name = L"tabLevel11";
			this->tabLevel11->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel11->Size = System::Drawing::Size(754, 365);
			this->tabLevel11->TabIndex = 10;
			this->tabLevel11->Text = L"Level 11";
			this->tabLevel11->UseVisualStyleBackColor = true;
			// 
			// level11output
			// 
			this->level11output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11output.Image")));
			this->level11output->Location = System::Drawing::Point(550, 150);
			this->level11output->Name = L"level11output";
			this->level11output->Size = System::Drawing::Size(50, 50);
			this->level11output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11output->TabIndex = 90;
			this->level11output->TabStop = false;
			// 
			// level11wire10
			// 
			this->level11wire10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11wire10.Image")));
			this->level11wire10->Location = System::Drawing::Point(500, 150);
			this->level11wire10->Name = L"level11wire10";
			this->level11wire10->Size = System::Drawing::Size(50, 50);
			this->level11wire10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11wire10->TabIndex = 91;
			this->level11wire10->TabStop = false;
			// 
			// level11gate2
			// 
			this->level11gate2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11gate2.Image")));
			this->level11gate2->Location = System::Drawing::Point(350, 100);
			this->level11gate2->Name = L"level11gate2";
			this->level11gate2->Size = System::Drawing::Size(150, 150);
			this->level11gate2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11gate2->TabIndex = 89;
			this->level11gate2->TabStop = false;
			// 
			// level11wire7
			// 
			this->level11wire7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11wire7.Image")));
			this->level11wire7->Location = System::Drawing::Point(300, 100);
			this->level11wire7->Name = L"level11wire7";
			this->level11wire7->Size = System::Drawing::Size(50, 50);
			this->level11wire7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11wire7->TabIndex = 88;
			this->level11wire7->TabStop = false;
			// 
			// level11wire6
			// 
			this->level11wire6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11wire6.Image")));
			this->level11wire6->Location = System::Drawing::Point(300, 50);
			this->level11wire6->Name = L"level11wire6";
			this->level11wire6->Size = System::Drawing::Size(50, 50);
			this->level11wire6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11wire6->TabIndex = 87;
			this->level11wire6->TabStop = false;
			// 
			// level11wire8
			// 
			this->level11wire8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11wire8.Image")));
			this->level11wire8->Location = System::Drawing::Point(300, 200);
			this->level11wire8->Name = L"level11wire8";
			this->level11wire8->Size = System::Drawing::Size(50, 50);
			this->level11wire8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11wire8->TabIndex = 86;
			this->level11wire8->TabStop = false;
			// 
			// level11wire9
			// 
			this->level11wire9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11wire9.Image")));
			this->level11wire9->Location = System::Drawing::Point(300, 250);
			this->level11wire9->Name = L"level11wire9";
			this->level11wire9->Size = System::Drawing::Size(50, 50);
			this->level11wire9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11wire9->TabIndex = 85;
			this->level11wire9->TabStop = false;
			// 
			// level11wire5
			// 
			this->level11wire5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11wire5.Image")));
			this->level11wire5->Location = System::Drawing::Point(250, 250);
			this->level11wire5->Name = L"level11wire5";
			this->level11wire5->Size = System::Drawing::Size(50, 50);
			this->level11wire5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11wire5->TabIndex = 45;
			this->level11wire5->TabStop = false;
			// 
			// level110wire4
			// 
			this->level110wire4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level110wire4.Image")));
			this->level110wire4->Location = System::Drawing::Point(250, 50);
			this->level110wire4->Name = L"level110wire4";
			this->level110wire4->Size = System::Drawing::Size(50, 50);
			this->level110wire4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level110wire4->TabIndex = 45;
			this->level110wire4->TabStop = false;
			// 
			// level11gate1
			// 
			this->level11gate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11gate1.Image")));
			this->level11gate1->Location = System::Drawing::Point(100, 191);
			this->level11gate1->Name = L"level11gate1";
			this->level11gate1->Size = System::Drawing::Size(150, 150);
			this->level11gate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11gate1->TabIndex = 50;
			this->level11gate1->TabStop = false;
			// 
			// level11gate0
			// 
			this->level11gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11gate0.Image")));
			this->level11gate0->Location = System::Drawing::Point(100, -9);
			this->level11gate0->Name = L"level11gate0";
			this->level11gate0->Size = System::Drawing::Size(150, 150);
			this->level11gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level11gate0->TabIndex = 49;
			this->level11gate0->TabStop = false;
			// 
			// level110wire3
			// 
			this->level110wire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level110wire3.Image")));
			this->level110wire3->Location = System::Drawing::Point(50, 300);
			this->level110wire3->Name = L"level110wire3";
			this->level110wire3->Size = System::Drawing::Size(50, 50);
			this->level110wire3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level110wire3->TabIndex = 48;
			this->level110wire3->TabStop = false;
			// 
			// level110wire2
			// 
			this->level110wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level110wire2.Image")));
			this->level110wire2->Location = System::Drawing::Point(50, 200);
			this->level110wire2->Name = L"level110wire2";
			this->level110wire2->Size = System::Drawing::Size(50, 50);
			this->level110wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level110wire2->TabIndex = 47;
			this->level110wire2->TabStop = false;
			// 
			// level110wire1
			// 
			this->level110wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level110wire1.Image")));
			this->level110wire1->Location = System::Drawing::Point(50, 100);
			this->level110wire1->Name = L"level110wire1";
			this->level110wire1->Size = System::Drawing::Size(50, 50);
			this->level110wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level110wire1->TabIndex = 46;
			this->level110wire1->TabStop = false;
			// 
			// level110wire000
			// 
			this->level110wire000->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level110wire000.Image")));
			this->level110wire000->Location = System::Drawing::Point(51, 0);
			this->level110wire000->Name = L"level110wire000";
			this->level110wire000->Size = System::Drawing::Size(50, 50);
			this->level110wire000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level110wire000->TabIndex = 45;
			this->level110wire000->TabStop = false;
			// 
			// level11input3
			// 
			this->level11input3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11input3.Image")));
			this->level11input3->Location = System::Drawing::Point(0, 300);
			this->level11input3->Margin = System::Windows::Forms::Padding(0);
			this->level11input3->Name = L"level11input3";
			this->level11input3->Size = System::Drawing::Size(50, 50);
			this->level11input3->TabIndex = 41;
			this->level11input3->UseVisualStyleBackColor = true;
			this->level11input3->Click += gcnew System::EventHandler(this, &LogicGameForm::level11input3_Click);
			// 
			// level11input2
			// 
			this->level11input2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11input2.Image")));
			this->level11input2->Location = System::Drawing::Point(0, 200);
			this->level11input2->Margin = System::Windows::Forms::Padding(0);
			this->level11input2->Name = L"level11input2";
			this->level11input2->Size = System::Drawing::Size(50, 50);
			this->level11input2->TabIndex = 40;
			this->level11input2->UseVisualStyleBackColor = true;
			this->level11input2->Click += gcnew System::EventHandler(this, &LogicGameForm::level11input2_Click);
			// 
			// level11input1
			// 
			this->level11input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11input1.Image")));
			this->level11input1->Location = System::Drawing::Point(0, 100);
			this->level11input1->Margin = System::Windows::Forms::Padding(0);
			this->level11input1->Name = L"level11input1";
			this->level11input1->Size = System::Drawing::Size(50, 50);
			this->level11input1->TabIndex = 39;
			this->level11input1->UseVisualStyleBackColor = true;
			this->level11input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level11input1_Click);
			// 
			// level11input0
			// 
			this->level11input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level11input0.Image")));
			this->level11input0->Location = System::Drawing::Point(0, 0);
			this->level11input0->Margin = System::Windows::Forms::Padding(0);
			this->level11input0->Name = L"level11input0";
			this->level11input0->Size = System::Drawing::Size(50, 50);
			this->level11input0->TabIndex = 38;
			this->level11input0->UseVisualStyleBackColor = true;
			this->level11input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level11input0_Click);
			// 
			// tabLevel12
			// 
			this->tabLevel12->Controls->Add(this->level12output);
			this->tabLevel12->Controls->Add(this->level12wire10);
			this->tabLevel12->Controls->Add(this->level12gate2);
			this->tabLevel12->Controls->Add(this->level12wire7);
			this->tabLevel12->Controls->Add(this->level12wire6);
			this->tabLevel12->Controls->Add(this->level12wire8);
			this->tabLevel12->Controls->Add(this->level12wire9);
			this->tabLevel12->Controls->Add(this->level12wire5);
			this->tabLevel12->Controls->Add(this->level12wire4);
			this->tabLevel12->Controls->Add(this->level12gate1);
			this->tabLevel12->Controls->Add(this->level12gate0);
			this->tabLevel12->Controls->Add(this->level12wire0);
			this->tabLevel12->Controls->Add(this->level12wire1);
			this->tabLevel12->Controls->Add(this->level12wire2);
			this->tabLevel12->Controls->Add(this->level12wire3);
			this->tabLevel12->Controls->Add(this->level12input3);
			this->tabLevel12->Controls->Add(this->level12input0);
			this->tabLevel12->Controls->Add(this->level12input1);
			this->tabLevel12->Controls->Add(this->level12input2);
			this->tabLevel12->Location = System::Drawing::Point(4, 22);
			this->tabLevel12->Name = L"tabLevel12";
			this->tabLevel12->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel12->Size = System::Drawing::Size(754, 365);
			this->tabLevel12->TabIndex = 11;
			this->tabLevel12->Text = L"Level 12";
			this->tabLevel12->UseVisualStyleBackColor = true;
			// 
			// level12output
			// 
			this->level12output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12output.Image")));
			this->level12output->Location = System::Drawing::Point(550, 150);
			this->level12output->Name = L"level12output";
			this->level12output->Size = System::Drawing::Size(50, 50);
			this->level12output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12output->TabIndex = 99;
			this->level12output->TabStop = false;
			// 
			// level12wire10
			// 
			this->level12wire10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire10.Image")));
			this->level12wire10->Location = System::Drawing::Point(500, 150);
			this->level12wire10->Name = L"level12wire10";
			this->level12wire10->Size = System::Drawing::Size(50, 50);
			this->level12wire10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire10->TabIndex = 100;
			this->level12wire10->TabStop = false;
			// 
			// level12gate2
			// 
			this->level12gate2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12gate2.Image")));
			this->level12gate2->Location = System::Drawing::Point(350, 91);
			this->level12gate2->Name = L"level12gate2";
			this->level12gate2->Size = System::Drawing::Size(150, 150);
			this->level12gate2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12gate2->TabIndex = 98;
			this->level12gate2->TabStop = false;
			// 
			// level12wire7
			// 
			this->level12wire7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire7.Image")));
			this->level12wire7->Location = System::Drawing::Point(300, 100);
			this->level12wire7->Name = L"level12wire7";
			this->level12wire7->Size = System::Drawing::Size(50, 50);
			this->level12wire7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire7->TabIndex = 97;
			this->level12wire7->TabStop = false;
			// 
			// level12wire6
			// 
			this->level12wire6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire6.Image")));
			this->level12wire6->Location = System::Drawing::Point(300, 50);
			this->level12wire6->Name = L"level12wire6";
			this->level12wire6->Size = System::Drawing::Size(50, 50);
			this->level12wire6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire6->TabIndex = 96;
			this->level12wire6->TabStop = false;
			// 
			// level12wire8
			// 
			this->level12wire8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire8.Image")));
			this->level12wire8->Location = System::Drawing::Point(300, 200);
			this->level12wire8->Name = L"level12wire8";
			this->level12wire8->Size = System::Drawing::Size(50, 50);
			this->level12wire8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire8->TabIndex = 95;
			this->level12wire8->TabStop = false;
			// 
			// level12wire9
			// 
			this->level12wire9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire9.Image")));
			this->level12wire9->Location = System::Drawing::Point(300, 250);
			this->level12wire9->Name = L"level12wire9";
			this->level12wire9->Size = System::Drawing::Size(50, 50);
			this->level12wire9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire9->TabIndex = 94;
			this->level12wire9->TabStop = false;
			// 
			// level12wire5
			// 
			this->level12wire5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire5.Image")));
			this->level12wire5->Location = System::Drawing::Point(250, 250);
			this->level12wire5->Name = L"level12wire5";
			this->level12wire5->Size = System::Drawing::Size(50, 50);
			this->level12wire5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire5->TabIndex = 92;
			this->level12wire5->TabStop = false;
			// 
			// level12wire4
			// 
			this->level12wire4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire4.Image")));
			this->level12wire4->Location = System::Drawing::Point(250, 50);
			this->level12wire4->Name = L"level12wire4";
			this->level12wire4->Size = System::Drawing::Size(50, 50);
			this->level12wire4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire4->TabIndex = 93;
			this->level12wire4->TabStop = false;
			// 
			// level12gate1
			// 
			this->level12gate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12gate1.Image")));
			this->level12gate1->Location = System::Drawing::Point(100, 200);
			this->level12gate1->Name = L"level12gate1";
			this->level12gate1->Size = System::Drawing::Size(150, 150);
			this->level12gate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12gate1->TabIndex = 91;
			this->level12gate1->TabStop = false;
			// 
			// level12gate0
			// 
			this->level12gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12gate0.Image")));
			this->level12gate0->Location = System::Drawing::Point(100, 0);
			this->level12gate0->Name = L"level12gate0";
			this->level12gate0->Size = System::Drawing::Size(150, 150);
			this->level12gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12gate0->TabIndex = 90;
			this->level12gate0->TabStop = false;
			// 
			// level12wire0
			// 
			this->level12wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire0.Image")));
			this->level12wire0->Location = System::Drawing::Point(50, 0);
			this->level12wire0->Name = L"level12wire0";
			this->level12wire0->Size = System::Drawing::Size(50, 50);
			this->level12wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire0->TabIndex = 83;
			this->level12wire0->TabStop = false;
			// 
			// level12wire1
			// 
			this->level12wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire1.Image")));
			this->level12wire1->Location = System::Drawing::Point(50, 100);
			this->level12wire1->Name = L"level12wire1";
			this->level12wire1->Size = System::Drawing::Size(50, 50);
			this->level12wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire1->TabIndex = 82;
			this->level12wire1->TabStop = false;
			// 
			// level12wire2
			// 
			this->level12wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire2.Image")));
			this->level12wire2->Location = System::Drawing::Point(50, 200);
			this->level12wire2->Name = L"level12wire2";
			this->level12wire2->Size = System::Drawing::Size(50, 50);
			this->level12wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire2->TabIndex = 81;
			this->level12wire2->TabStop = false;
			// 
			// level12wire3
			// 
			this->level12wire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12wire3.Image")));
			this->level12wire3->Location = System::Drawing::Point(50, 300);
			this->level12wire3->Name = L"level12wire3";
			this->level12wire3->Size = System::Drawing::Size(50, 50);
			this->level12wire3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level12wire3->TabIndex = 45;
			this->level12wire3->TabStop = false;
			// 
			// level12input3
			// 
			this->level12input3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12input3.Image")));
			this->level12input3->Location = System::Drawing::Point(0, 300);
			this->level12input3->Margin = System::Windows::Forms::Padding(0);
			this->level12input3->Name = L"level12input3";
			this->level12input3->Size = System::Drawing::Size(50, 50);
			this->level12input3->TabIndex = 80;
			this->level12input3->UseVisualStyleBackColor = true;
			this->level12input3->Click += gcnew System::EventHandler(this, &LogicGameForm::level12input3_Click);
			// 
			// level12input0
			// 
			this->level12input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12input0.Image")));
			this->level12input0->Location = System::Drawing::Point(0, 0);
			this->level12input0->Margin = System::Windows::Forms::Padding(0);
			this->level12input0->Name = L"level12input0";
			this->level12input0->Size = System::Drawing::Size(50, 50);
			this->level12input0->TabIndex = 79;
			this->level12input0->UseVisualStyleBackColor = true;
			this->level12input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level12input0_Click);
			// 
			// level12input1
			// 
			this->level12input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12input1.Image")));
			this->level12input1->Location = System::Drawing::Point(0, 100);
			this->level12input1->Margin = System::Windows::Forms::Padding(0);
			this->level12input1->Name = L"level12input1";
			this->level12input1->Size = System::Drawing::Size(50, 50);
			this->level12input1->TabIndex = 78;
			this->level12input1->UseVisualStyleBackColor = true;
			this->level12input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level12input1_Click);
			// 
			// level12input2
			// 
			this->level12input2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level12input2.Image")));
			this->level12input2->Location = System::Drawing::Point(0, 200);
			this->level12input2->Margin = System::Windows::Forms::Padding(0);
			this->level12input2->Name = L"level12input2";
			this->level12input2->Size = System::Drawing::Size(50, 50);
			this->level12input2->TabIndex = 77;
			this->level12input2->UseVisualStyleBackColor = true;
			this->level12input2->Click += gcnew System::EventHandler(this, &LogicGameForm::level12input2_Click);
			// 
			// tabLevel13
			// 
			this->tabLevel13->Controls->Add(this->level13gate0);
			this->tabLevel13->Controls->Add(this->level13output);
			this->tabLevel13->Controls->Add(this->level13wire10);
			this->tabLevel13->Controls->Add(this->level13gate2);
			this->tabLevel13->Controls->Add(this->level13wire7);
			this->tabLevel13->Controls->Add(this->level13wire6);
			this->tabLevel13->Controls->Add(this->level13wire8);
			this->tabLevel13->Controls->Add(this->level13wire9);
			this->tabLevel13->Controls->Add(this->level13wire5);
			this->tabLevel13->Controls->Add(this->level13wire4);
			this->tabLevel13->Controls->Add(this->level13gate1);
			this->tabLevel13->Controls->Add(this->level13wire0);
			this->tabLevel13->Controls->Add(this->level13wire1);
			this->tabLevel13->Controls->Add(this->level13wire2);
			this->tabLevel13->Controls->Add(this->level13wire3);
			this->tabLevel13->Controls->Add(this->level13input3);
			this->tabLevel13->Controls->Add(this->level13input0);
			this->tabLevel13->Controls->Add(this->level13input1);
			this->tabLevel13->Controls->Add(this->level13input2);
			this->tabLevel13->Location = System::Drawing::Point(4, 22);
			this->tabLevel13->Name = L"tabLevel13";
			this->tabLevel13->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel13->Size = System::Drawing::Size(754, 365);
			this->tabLevel13->TabIndex = 12;
			this->tabLevel13->Text = L"Level 13";
			this->tabLevel13->UseVisualStyleBackColor = true;
			// 
			// level13gate0
			// 
			this->level13gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13gate0.Image")));
			this->level13gate0->Location = System::Drawing::Point(100, -9);
			this->level13gate0->Name = L"level13gate0";
			this->level13gate0->Size = System::Drawing::Size(150, 150);
			this->level13gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13gate0->TabIndex = 119;
			this->level13gate0->TabStop = false;
			// 
			// level13output
			// 
			this->level13output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13output.Image")));
			this->level13output->Location = System::Drawing::Point(550, 150);
			this->level13output->Name = L"level13output";
			this->level13output->Size = System::Drawing::Size(50, 50);
			this->level13output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13output->TabIndex = 117;
			this->level13output->TabStop = false;
			// 
			// level13wire10
			// 
			this->level13wire10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire10.Image")));
			this->level13wire10->Location = System::Drawing::Point(500, 150);
			this->level13wire10->Name = L"level13wire10";
			this->level13wire10->Size = System::Drawing::Size(50, 50);
			this->level13wire10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire10->TabIndex = 118;
			this->level13wire10->TabStop = false;
			// 
			// level13gate2
			// 
			this->level13gate2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13gate2.Image")));
			this->level13gate2->Location = System::Drawing::Point(350, 91);
			this->level13gate2->Name = L"level13gate2";
			this->level13gate2->Size = System::Drawing::Size(150, 150);
			this->level13gate2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13gate2->TabIndex = 116;
			this->level13gate2->TabStop = false;
			// 
			// level13wire7
			// 
			this->level13wire7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire7.Image")));
			this->level13wire7->Location = System::Drawing::Point(300, 100);
			this->level13wire7->Name = L"level13wire7";
			this->level13wire7->Size = System::Drawing::Size(50, 50);
			this->level13wire7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire7->TabIndex = 115;
			this->level13wire7->TabStop = false;
			// 
			// level13wire6
			// 
			this->level13wire6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire6.Image")));
			this->level13wire6->Location = System::Drawing::Point(300, 50);
			this->level13wire6->Name = L"level13wire6";
			this->level13wire6->Size = System::Drawing::Size(50, 50);
			this->level13wire6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire6->TabIndex = 114;
			this->level13wire6->TabStop = false;
			// 
			// level13wire8
			// 
			this->level13wire8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire8.Image")));
			this->level13wire8->Location = System::Drawing::Point(300, 200);
			this->level13wire8->Name = L"level13wire8";
			this->level13wire8->Size = System::Drawing::Size(50, 50);
			this->level13wire8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire8->TabIndex = 113;
			this->level13wire8->TabStop = false;
			// 
			// level13wire9
			// 
			this->level13wire9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire9.Image")));
			this->level13wire9->Location = System::Drawing::Point(300, 250);
			this->level13wire9->Name = L"level13wire9";
			this->level13wire9->Size = System::Drawing::Size(50, 50);
			this->level13wire9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire9->TabIndex = 112;
			this->level13wire9->TabStop = false;
			// 
			// level13wire5
			// 
			this->level13wire5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire5.Image")));
			this->level13wire5->Location = System::Drawing::Point(250, 250);
			this->level13wire5->Name = L"level13wire5";
			this->level13wire5->Size = System::Drawing::Size(50, 50);
			this->level13wire5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire5->TabIndex = 110;
			this->level13wire5->TabStop = false;
			// 
			// level13wire4
			// 
			this->level13wire4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire4.Image")));
			this->level13wire4->Location = System::Drawing::Point(250, 50);
			this->level13wire4->Name = L"level13wire4";
			this->level13wire4->Size = System::Drawing::Size(50, 50);
			this->level13wire4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire4->TabIndex = 111;
			this->level13wire4->TabStop = false;
			// 
			// level13gate1
			// 
			this->level13gate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13gate1.Image")));
			this->level13gate1->Location = System::Drawing::Point(100, 200);
			this->level13gate1->Name = L"level13gate1";
			this->level13gate1->Size = System::Drawing::Size(150, 150);
			this->level13gate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13gate1->TabIndex = 109;
			this->level13gate1->TabStop = false;
			// 
			// level13wire0
			// 
			this->level13wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire0.Image")));
			this->level13wire0->Location = System::Drawing::Point(50, 0);
			this->level13wire0->Name = L"level13wire0";
			this->level13wire0->Size = System::Drawing::Size(50, 50);
			this->level13wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire0->TabIndex = 108;
			this->level13wire0->TabStop = false;
			// 
			// level13wire1
			// 
			this->level13wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire1.Image")));
			this->level13wire1->Location = System::Drawing::Point(50, 100);
			this->level13wire1->Name = L"level13wire1";
			this->level13wire1->Size = System::Drawing::Size(50, 50);
			this->level13wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire1->TabIndex = 107;
			this->level13wire1->TabStop = false;
			// 
			// level13wire2
			// 
			this->level13wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire2.Image")));
			this->level13wire2->Location = System::Drawing::Point(50, 200);
			this->level13wire2->Name = L"level13wire2";
			this->level13wire2->Size = System::Drawing::Size(50, 50);
			this->level13wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire2->TabIndex = 106;
			this->level13wire2->TabStop = false;
			// 
			// level13wire3
			// 
			this->level13wire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13wire3.Image")));
			this->level13wire3->Location = System::Drawing::Point(50, 300);
			this->level13wire3->Name = L"level13wire3";
			this->level13wire3->Size = System::Drawing::Size(50, 50);
			this->level13wire3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level13wire3->TabIndex = 101;
			this->level13wire3->TabStop = false;
			// 
			// level13input3
			// 
			this->level13input3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13input3.Image")));
			this->level13input3->Location = System::Drawing::Point(0, 300);
			this->level13input3->Margin = System::Windows::Forms::Padding(0);
			this->level13input3->Name = L"level13input3";
			this->level13input3->Size = System::Drawing::Size(50, 50);
			this->level13input3->TabIndex = 105;
			this->level13input3->UseVisualStyleBackColor = true;
			this->level13input3->Click += gcnew System::EventHandler(this, &LogicGameForm::level13input3_Click);
			// 
			// level13input0
			// 
			this->level13input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13input0.Image")));
			this->level13input0->Location = System::Drawing::Point(0, 0);
			this->level13input0->Margin = System::Windows::Forms::Padding(0);
			this->level13input0->Name = L"level13input0";
			this->level13input0->Size = System::Drawing::Size(50, 50);
			this->level13input0->TabIndex = 104;
			this->level13input0->UseVisualStyleBackColor = true;
			this->level13input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level13input0_Click);
			// 
			// level13input1
			// 
			this->level13input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13input1.Image")));
			this->level13input1->Location = System::Drawing::Point(0, 100);
			this->level13input1->Margin = System::Windows::Forms::Padding(0);
			this->level13input1->Name = L"level13input1";
			this->level13input1->Size = System::Drawing::Size(50, 50);
			this->level13input1->TabIndex = 103;
			this->level13input1->UseVisualStyleBackColor = true;
			this->level13input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level13input1_Click);
			// 
			// level13input2
			// 
			this->level13input2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level13input2.Image")));
			this->level13input2->Location = System::Drawing::Point(0, 200);
			this->level13input2->Margin = System::Windows::Forms::Padding(0);
			this->level13input2->Name = L"level13input2";
			this->level13input2->Size = System::Drawing::Size(50, 50);
			this->level13input2->TabIndex = 102;
			this->level13input2->UseVisualStyleBackColor = true;
			this->level13input2->Click += gcnew System::EventHandler(this, &LogicGameForm::level13input2_Click);
			// 
			// tabLevel14
			// 
			this->tabLevel14->Controls->Add(this->level14wire5);
			this->tabLevel14->Controls->Add(this->level14wire4);
			this->tabLevel14->Controls->Add(this->level14gate4);
			this->tabLevel14->Controls->Add(this->level14gate3);
			this->tabLevel14->Controls->Add(this->level14gate2);
			this->tabLevel14->Controls->Add(this->level14wire3);
			this->tabLevel14->Controls->Add(this->level14wire0);
			this->tabLevel14->Controls->Add(this->level14gate1);
			this->tabLevel14->Controls->Add(this->level14gate0);
			this->tabLevel14->Controls->Add(this->level14input3);
			this->tabLevel14->Controls->Add(this->level14input0);
			this->tabLevel14->Controls->Add(this->level14output);
			this->tabLevel14->Controls->Add(this->level14wire12);
			this->tabLevel14->Controls->Add(this->level14wire9);
			this->tabLevel14->Controls->Add(this->level14wire8);
			this->tabLevel14->Controls->Add(this->level14wire10);
			this->tabLevel14->Controls->Add(this->level14wire11);
			this->tabLevel14->Controls->Add(this->level14wire7);
			this->tabLevel14->Controls->Add(this->level14wire6);
			this->tabLevel14->Controls->Add(this->level14wire1);
			this->tabLevel14->Controls->Add(this->level14wire2);
			this->tabLevel14->Controls->Add(this->level14input1);
			this->tabLevel14->Controls->Add(this->level14input2);
			this->tabLevel14->Location = System::Drawing::Point(4, 22);
			this->tabLevel14->Name = L"tabLevel14";
			this->tabLevel14->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel14->Size = System::Drawing::Size(754, 365);
			this->tabLevel14->TabIndex = 13;
			this->tabLevel14->Text = L"Level 14";
			this->tabLevel14->UseVisualStyleBackColor = true;
			// 
			// level14wire5
			// 
			this->level14wire5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire5.Image")));
			this->level14wire5->Location = System::Drawing::Point(200, 300);
			this->level14wire5->Name = L"level14wire5";
			this->level14wire5->Size = System::Drawing::Size(50, 50);
			this->level14wire5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire5->TabIndex = 143;
			this->level14wire5->TabStop = false;
			// 
			// level14wire4
			// 
			this->level14wire4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire4.Image")));
			this->level14wire4->Location = System::Drawing::Point(200, 0);
			this->level14wire4->Name = L"level14wire4";
			this->level14wire4->Size = System::Drawing::Size(50, 50);
			this->level14wire4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire4->TabIndex = 45;
			this->level14wire4->TabStop = false;
			// 
			// level14gate4
			// 
			this->level14gate4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14gate4.Image")));
			this->level14gate4->Location = System::Drawing::Point(500, 100);
			this->level14gate4->Name = L"level14gate4";
			this->level14gate4->Size = System::Drawing::Size(150, 150);
			this->level14gate4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14gate4->TabIndex = 142;
			this->level14gate4->TabStop = false;
			// 
			// level14gate3
			// 
			this->level14gate3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14gate3.Image")));
			this->level14gate3->Location = System::Drawing::Point(250, 200);
			this->level14gate3->Name = L"level14gate3";
			this->level14gate3->Size = System::Drawing::Size(150, 150);
			this->level14gate3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14gate3->TabIndex = 141;
			this->level14gate3->TabStop = false;
			// 
			// level14gate2
			// 
			this->level14gate2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14gate2.Image")));
			this->level14gate2->Location = System::Drawing::Point(250, 0);
			this->level14gate2->Name = L"level14gate2";
			this->level14gate2->Size = System::Drawing::Size(150, 150);
			this->level14gate2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14gate2->TabIndex = 140;
			this->level14gate2->TabStop = false;
			// 
			// level14wire3
			// 
			this->level14wire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire3.Image")));
			this->level14wire3->Location = System::Drawing::Point(50, 300);
			this->level14wire3->Name = L"level14wire3";
			this->level14wire3->Size = System::Drawing::Size(50, 50);
			this->level14wire3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire3->TabIndex = 139;
			this->level14wire3->TabStop = false;
			// 
			// level14wire0
			// 
			this->level14wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire0.Image")));
			this->level14wire0->Location = System::Drawing::Point(50, 0);
			this->level14wire0->Name = L"level14wire0";
			this->level14wire0->Size = System::Drawing::Size(50, 50);
			this->level14wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire0->TabIndex = 45;
			this->level14wire0->TabStop = false;
			// 
			// level14gate1
			// 
			this->level14gate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14gate1.Image")));
			this->level14gate1->Location = System::Drawing::Point(100, 300);
			this->level14gate1->Name = L"level14gate1";
			this->level14gate1->Size = System::Drawing::Size(100, 50);
			this->level14gate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14gate1->TabIndex = 138;
			this->level14gate1->TabStop = false;
			// 
			// level14gate0
			// 
			this->level14gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14gate0.Image")));
			this->level14gate0->Location = System::Drawing::Point(100, 0);
			this->level14gate0->Name = L"level14gate0";
			this->level14gate0->Size = System::Drawing::Size(100, 50);
			this->level14gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14gate0->TabIndex = 137;
			this->level14gate0->TabStop = false;
			// 
			// level14input3
			// 
			this->level14input3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14input3.Image")));
			this->level14input3->Location = System::Drawing::Point(0, 300);
			this->level14input3->Margin = System::Windows::Forms::Padding(0);
			this->level14input3->Name = L"level14input3";
			this->level14input3->Size = System::Drawing::Size(50, 50);
			this->level14input3->TabIndex = 136;
			this->level14input3->UseVisualStyleBackColor = true;
			this->level14input3->Click += gcnew System::EventHandler(this, &LogicGameForm::level14input3_Click);
			// 
			// level14input0
			// 
			this->level14input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14input0.Image")));
			this->level14input0->Location = System::Drawing::Point(0, 0);
			this->level14input0->Margin = System::Windows::Forms::Padding(0);
			this->level14input0->Name = L"level14input0";
			this->level14input0->Size = System::Drawing::Size(50, 50);
			this->level14input0->TabIndex = 135;
			this->level14input0->UseVisualStyleBackColor = true;
			this->level14input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level14input0_Click);
			// 
			// level14output
			// 
			this->level14output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14output.Image")));
			this->level14output->Location = System::Drawing::Point(700, 150);
			this->level14output->Name = L"level14output";
			this->level14output->Size = System::Drawing::Size(50, 50);
			this->level14output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14output->TabIndex = 133;
			this->level14output->TabStop = false;
			// 
			// level14wire12
			// 
			this->level14wire12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire12.Image")));
			this->level14wire12->Location = System::Drawing::Point(650, 150);
			this->level14wire12->Name = L"level14wire12";
			this->level14wire12->Size = System::Drawing::Size(50, 50);
			this->level14wire12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire12->TabIndex = 134;
			this->level14wire12->TabStop = false;
			// 
			// level14wire9
			// 
			this->level14wire9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire9.Image")));
			this->level14wire9->Location = System::Drawing::Point(450, 100);
			this->level14wire9->Name = L"level14wire9";
			this->level14wire9->Size = System::Drawing::Size(50, 50);
			this->level14wire9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire9->TabIndex = 132;
			this->level14wire9->TabStop = false;
			// 
			// level14wire8
			// 
			this->level14wire8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire8.Image")));
			this->level14wire8->Location = System::Drawing::Point(450, 50);
			this->level14wire8->Name = L"level14wire8";
			this->level14wire8->Size = System::Drawing::Size(50, 50);
			this->level14wire8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire8->TabIndex = 131;
			this->level14wire8->TabStop = false;
			// 
			// level14wire10
			// 
			this->level14wire10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire10.Image")));
			this->level14wire10->Location = System::Drawing::Point(450, 200);
			this->level14wire10->Name = L"level14wire10";
			this->level14wire10->Size = System::Drawing::Size(50, 50);
			this->level14wire10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire10->TabIndex = 130;
			this->level14wire10->TabStop = false;
			// 
			// level14wire11
			// 
			this->level14wire11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire11.Image")));
			this->level14wire11->Location = System::Drawing::Point(450, 250);
			this->level14wire11->Name = L"level14wire11";
			this->level14wire11->Size = System::Drawing::Size(50, 50);
			this->level14wire11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire11->TabIndex = 129;
			this->level14wire11->TabStop = false;
			// 
			// level14wire7
			// 
			this->level14wire7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire7.Image")));
			this->level14wire7->Location = System::Drawing::Point(400, 250);
			this->level14wire7->Name = L"level14wire7";
			this->level14wire7->Size = System::Drawing::Size(50, 50);
			this->level14wire7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire7->TabIndex = 127;
			this->level14wire7->TabStop = false;
			// 
			// level14wire6
			// 
			this->level14wire6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire6.Image")));
			this->level14wire6->Location = System::Drawing::Point(400, 50);
			this->level14wire6->Name = L"level14wire6";
			this->level14wire6->Size = System::Drawing::Size(50, 50);
			this->level14wire6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level14wire6->TabIndex = 128;
			this->level14wire6->TabStop = false;
			// 
			// level14wire1
			// 
			this->level14wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire1.Image")));
			this->level14wire1->Location = System::Drawing::Point(50, 100);
			this->level14wire1->Name = L"level14wire1";
			this->level14wire1->Size = System::Drawing::Size(200, 50);
			this->level14wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->level14wire1->TabIndex = 125;
			this->level14wire1->TabStop = false;
			// 
			// level14wire2
			// 
			this->level14wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14wire2.Image")));
			this->level14wire2->Location = System::Drawing::Point(50, 200);
			this->level14wire2->Name = L"level14wire2";
			this->level14wire2->Size = System::Drawing::Size(200, 50);
			this->level14wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->level14wire2->TabIndex = 124;
			this->level14wire2->TabStop = false;
			// 
			// level14input1
			// 
			this->level14input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14input1.Image")));
			this->level14input1->Location = System::Drawing::Point(0, 100);
			this->level14input1->Margin = System::Windows::Forms::Padding(0);
			this->level14input1->Name = L"level14input1";
			this->level14input1->Size = System::Drawing::Size(50, 50);
			this->level14input1->TabIndex = 121;
			this->level14input1->UseVisualStyleBackColor = true;
			this->level14input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level14input1_Click);
			// 
			// level14input2
			// 
			this->level14input2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level14input2.Image")));
			this->level14input2->Location = System::Drawing::Point(0, 200);
			this->level14input2->Margin = System::Windows::Forms::Padding(0);
			this->level14input2->Name = L"level14input2";
			this->level14input2->Size = System::Drawing::Size(50, 50);
			this->level14input2->TabIndex = 120;
			this->level14input2->UseVisualStyleBackColor = true;
			this->level14input2->Click += gcnew System::EventHandler(this, &LogicGameForm::level14input2_Click);
			// 
			// tabLevel15
			// 
			this->tabLevel15->Controls->Add(this->level15wire10);
			this->tabLevel15->Controls->Add(this->level15output);
			this->tabLevel15->Controls->Add(this->level15wire11);
			this->tabLevel15->Controls->Add(this->level15gate3);
			this->tabLevel15->Controls->Add(this->level15gate2);
			this->tabLevel15->Controls->Add(this->level15wire7);
			this->tabLevel15->Controls->Add(this->level15wire6);
			this->tabLevel15->Controls->Add(this->level15wire8);
			this->tabLevel15->Controls->Add(this->level15wire9);
			this->tabLevel15->Controls->Add(this->level15wire5);
			this->tabLevel15->Controls->Add(this->level15wire4);
			this->tabLevel15->Controls->Add(this->level15gate1);
			this->tabLevel15->Controls->Add(this->level15gate0);
			this->tabLevel15->Controls->Add(this->level15wire3);
			this->tabLevel15->Controls->Add(this->level15wire2);
			this->tabLevel15->Controls->Add(this->level15wire1);
			this->tabLevel15->Controls->Add(this->level15wire0);
			this->tabLevel15->Controls->Add(this->level15input3);
			this->tabLevel15->Controls->Add(this->level15input2);
			this->tabLevel15->Controls->Add(this->level15input1);
			this->tabLevel15->Controls->Add(this->level15input0);
			this->tabLevel15->Location = System::Drawing::Point(4, 22);
			this->tabLevel15->Name = L"tabLevel15";
			this->tabLevel15->Padding = System::Windows::Forms::Padding(3);
			this->tabLevel15->Size = System::Drawing::Size(754, 365);
			this->tabLevel15->TabIndex = 14;
			this->tabLevel15->Text = L"Level 15";
			this->tabLevel15->UseVisualStyleBackColor = true;
			// 
			// level15wire10
			// 
			this->level15wire10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire10.Image")));
			this->level15wire10->Location = System::Drawing::Point(500, 150);
			this->level15wire10->Name = L"level15wire10";
			this->level15wire10->Size = System::Drawing::Size(50, 50);
			this->level15wire10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire10->TabIndex = 45;
			this->level15wire10->TabStop = false;
			// 
			// level15output
			// 
			this->level15output->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15output.Image")));
			this->level15output->Location = System::Drawing::Point(700, 150);
			this->level15output->Name = L"level15output";
			this->level15output->Size = System::Drawing::Size(50, 50);
			this->level15output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15output->TabIndex = 152;
			this->level15output->TabStop = false;
			// 
			// level15wire11
			// 
			this->level15wire11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire11.Image")));
			this->level15wire11->Location = System::Drawing::Point(650, 150);
			this->level15wire11->Name = L"level15wire11";
			this->level15wire11->Size = System::Drawing::Size(50, 50);
			this->level15wire11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire11->TabIndex = 153;
			this->level15wire11->TabStop = false;
			// 
			// level15gate3
			// 
			this->level15gate3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15gate3.Image")));
			this->level15gate3->Location = System::Drawing::Point(550, 150);
			this->level15gate3->Name = L"level15gate3";
			this->level15gate3->Size = System::Drawing::Size(100, 50);
			this->level15gate3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15gate3->TabIndex = 45;
			this->level15gate3->TabStop = false;
			// 
			// level15gate2
			// 
			this->level15gate2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15gate2.Image")));
			this->level15gate2->Location = System::Drawing::Point(350, 91);
			this->level15gate2->Name = L"level15gate2";
			this->level15gate2->Size = System::Drawing::Size(150, 150);
			this->level15gate2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15gate2->TabIndex = 151;
			this->level15gate2->TabStop = false;
			// 
			// level15wire7
			// 
			this->level15wire7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire7.Image")));
			this->level15wire7->Location = System::Drawing::Point(300, 100);
			this->level15wire7->Name = L"level15wire7";
			this->level15wire7->Size = System::Drawing::Size(50, 50);
			this->level15wire7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire7->TabIndex = 150;
			this->level15wire7->TabStop = false;
			// 
			// level15wire6
			// 
			this->level15wire6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire6.Image")));
			this->level15wire6->Location = System::Drawing::Point(300, 50);
			this->level15wire6->Name = L"level15wire6";
			this->level15wire6->Size = System::Drawing::Size(50, 50);
			this->level15wire6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire6->TabIndex = 149;
			this->level15wire6->TabStop = false;
			// 
			// level15wire8
			// 
			this->level15wire8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire8.Image")));
			this->level15wire8->Location = System::Drawing::Point(300, 200);
			this->level15wire8->Name = L"level15wire8";
			this->level15wire8->Size = System::Drawing::Size(50, 50);
			this->level15wire8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire8->TabIndex = 148;
			this->level15wire8->TabStop = false;
			// 
			// level15wire9
			// 
			this->level15wire9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire9.Image")));
			this->level15wire9->Location = System::Drawing::Point(300, 250);
			this->level15wire9->Name = L"level15wire9";
			this->level15wire9->Size = System::Drawing::Size(50, 50);
			this->level15wire9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire9->TabIndex = 147;
			this->level15wire9->TabStop = false;
			// 
			// level15wire5
			// 
			this->level15wire5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire5.Image")));
			this->level15wire5->Location = System::Drawing::Point(250, 250);
			this->level15wire5->Name = L"level15wire5";
			this->level15wire5->Size = System::Drawing::Size(50, 50);
			this->level15wire5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire5->TabIndex = 145;
			this->level15wire5->TabStop = false;
			// 
			// level15wire4
			// 
			this->level15wire4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire4.Image")));
			this->level15wire4->Location = System::Drawing::Point(250, 50);
			this->level15wire4->Name = L"level15wire4";
			this->level15wire4->Size = System::Drawing::Size(50, 50);
			this->level15wire4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire4->TabIndex = 146;
			this->level15wire4->TabStop = false;
			// 
			// level15gate1
			// 
			this->level15gate1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15gate1.Image")));
			this->level15gate1->Location = System::Drawing::Point(100, 191);
			this->level15gate1->Name = L"level15gate1";
			this->level15gate1->Size = System::Drawing::Size(150, 150);
			this->level15gate1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15gate1->TabIndex = 144;
			this->level15gate1->TabStop = false;
			// 
			// level15gate0
			// 
			this->level15gate0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15gate0.Image")));
			this->level15gate0->Location = System::Drawing::Point(100, 0);
			this->level15gate0->Name = L"level15gate0";
			this->level15gate0->Size = System::Drawing::Size(150, 150);
			this->level15gate0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15gate0->TabIndex = 143;
			this->level15gate0->TabStop = false;
			// 
			// level15wire3
			// 
			this->level15wire3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire3.Image")));
			this->level15wire3->Location = System::Drawing::Point(50, 300);
			this->level15wire3->Name = L"level15wire3";
			this->level15wire3->Size = System::Drawing::Size(50, 50);
			this->level15wire3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire3->TabIndex = 142;
			this->level15wire3->TabStop = false;
			// 
			// level15wire2
			// 
			this->level15wire2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire2.Image")));
			this->level15wire2->Location = System::Drawing::Point(50, 200);
			this->level15wire2->Name = L"level15wire2";
			this->level15wire2->Size = System::Drawing::Size(50, 50);
			this->level15wire2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire2->TabIndex = 141;
			this->level15wire2->TabStop = false;
			// 
			// level15wire1
			// 
			this->level15wire1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire1.Image")));
			this->level15wire1->Location = System::Drawing::Point(50, 100);
			this->level15wire1->Name = L"level15wire1";
			this->level15wire1->Size = System::Drawing::Size(50, 50);
			this->level15wire1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire1->TabIndex = 140;
			this->level15wire1->TabStop = false;
			// 
			// level15wire0
			// 
			this->level15wire0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15wire0.Image")));
			this->level15wire0->Location = System::Drawing::Point(50, 0);
			this->level15wire0->Name = L"level15wire0";
			this->level15wire0->Size = System::Drawing::Size(50, 50);
			this->level15wire0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->level15wire0->TabIndex = 45;
			this->level15wire0->TabStop = false;
			// 
			// level15input3
			// 
			this->level15input3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15input3.Image")));
			this->level15input3->Location = System::Drawing::Point(0, 300);
			this->level15input3->Margin = System::Windows::Forms::Padding(0);
			this->level15input3->Name = L"level15input3";
			this->level15input3->Size = System::Drawing::Size(50, 50);
			this->level15input3->TabIndex = 139;
			this->level15input3->UseVisualStyleBackColor = true;
			this->level15input3->Click += gcnew System::EventHandler(this, &LogicGameForm::level15input3_Click);
			// 
			// level15input2
			// 
			this->level15input2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15input2.Image")));
			this->level15input2->Location = System::Drawing::Point(0, 200);
			this->level15input2->Margin = System::Windows::Forms::Padding(0);
			this->level15input2->Name = L"level15input2";
			this->level15input2->Size = System::Drawing::Size(50, 50);
			this->level15input2->TabIndex = 138;
			this->level15input2->UseVisualStyleBackColor = true;
			this->level15input2->Click += gcnew System::EventHandler(this, &LogicGameForm::level15input2_Click);
			// 
			// level15input1
			// 
			this->level15input1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15input1.Image")));
			this->level15input1->Location = System::Drawing::Point(0, 100);
			this->level15input1->Margin = System::Windows::Forms::Padding(0);
			this->level15input1->Name = L"level15input1";
			this->level15input1->Size = System::Drawing::Size(50, 50);
			this->level15input1->TabIndex = 137;
			this->level15input1->UseVisualStyleBackColor = true;
			this->level15input1->Click += gcnew System::EventHandler(this, &LogicGameForm::level15input1_Click);
			// 
			// level15input0
			// 
			this->level15input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level15input0.Image")));
			this->level15input0->Location = System::Drawing::Point(0, 0);
			this->level15input0->Margin = System::Windows::Forms::Padding(0);
			this->level15input0->Name = L"level15input0";
			this->level15input0->Size = System::Drawing::Size(50, 50);
			this->level15input0->TabIndex = 136;
			this->level15input0->UseVisualStyleBackColor = true;
			this->level15input0->Click += gcnew System::EventHandler(this, &LogicGameForm::level15input0_Click);
			// 
			// refIN_on
			// 
			this->refIN_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refIN_on.Image")));
			this->refIN_on->Location = System::Drawing::Point(18, 434);
			this->refIN_on->Name = L"refIN_on";
			this->refIN_on->Size = System::Drawing::Size(50, 50);
			this->refIN_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refIN_on->TabIndex = 6;
			this->refIN_on->TabStop = false;
			this->refIN_on->Visible = false;
			// 
			// refwireH_on
			// 
			this->refwireH_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireH_on.Image")));
			this->refwireH_on->Location = System::Drawing::Point(74, 434);
			this->refwireH_on->Name = L"refwireH_on";
			this->refwireH_on->Size = System::Drawing::Size(50, 50);
			this->refwireH_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireH_on->TabIndex = 7;
			this->refwireH_on->TabStop = false;
			this->refwireH_on->Visible = false;
			// 
			// refIN_off
			// 
			this->refIN_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refIN_off.Image")));
			this->refIN_off->Location = System::Drawing::Point(18, 490);
			this->refIN_off->Name = L"refIN_off";
			this->refIN_off->Size = System::Drawing::Size(50, 50);
			this->refIN_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refIN_off->TabIndex = 8;
			this->refIN_off->TabStop = false;
			this->refIN_off->Visible = false;
			// 
			// refOUT_on
			// 
			this->refOUT_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOUT_on.Image")));
			this->refOUT_on->Location = System::Drawing::Point(130, 434);
			this->refOUT_on->Name = L"refOUT_on";
			this->refOUT_on->Size = System::Drawing::Size(50, 50);
			this->refOUT_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refOUT_on->TabIndex = 9;
			this->refOUT_on->TabStop = false;
			this->refOUT_on->Visible = false;
			// 
			// refwireH_off
			// 
			this->refwireH_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireH_off.Image")));
			this->refwireH_off->Location = System::Drawing::Point(74, 490);
			this->refwireH_off->Name = L"refwireH_off";
			this->refwireH_off->Size = System::Drawing::Size(50, 50);
			this->refwireH_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireH_off->TabIndex = 10;
			this->refwireH_off->TabStop = false;
			this->refwireH_off->Visible = false;
			// 
			// refOUT_off
			// 
			this->refOUT_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOUT_off.Image")));
			this->refOUT_off->Location = System::Drawing::Point(130, 490);
			this->refOUT_off->Name = L"refOUT_off";
			this->refOUT_off->Size = System::Drawing::Size(50, 50);
			this->refOUT_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refOUT_off->TabIndex = 11;
			this->refOUT_off->TabStop = false;
			this->refOUT_off->Visible = false;
			// 
			// refAND000
			// 
			this->refAND000->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refAND000.Image")));
			this->refAND000->Location = System::Drawing::Point(792, 34);
			this->refAND000->Name = L"refAND000";
			this->refAND000->Size = System::Drawing::Size(50, 50);
			this->refAND000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refAND000->TabIndex = 12;
			this->refAND000->TabStop = false;
			this->refAND000->Visible = false;
			// 
			// refNOT01
			// 
			this->refNOT01->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOT01.Image")));
			this->refNOT01->Location = System::Drawing::Point(186, 490);
			this->refNOT01->Name = L"refNOT01";
			this->refNOT01->Size = System::Drawing::Size(100, 50);
			this->refNOT01->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refNOT01->TabIndex = 14;
			this->refNOT01->TabStop = false;
			this->refNOT01->Visible = false;
			// 
			// refNOT10
			// 
			this->refNOT10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOT10.Image")));
			this->refNOT10->Location = System::Drawing::Point(186, 434);
			this->refNOT10->Name = L"refNOT10";
			this->refNOT10->Size = System::Drawing::Size(100, 50);
			this->refNOT10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refNOT10->TabIndex = 15;
			this->refNOT10->TabStop = false;
			this->refNOT10->Visible = false;
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
			this->refAND001->Location = System::Drawing::Point(792, 90);
			this->refAND001->Name = L"refAND001";
			this->refAND001->Size = System::Drawing::Size(50, 50);
			this->refAND001->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refAND001->TabIndex = 26;
			this->refAND001->TabStop = false;
			this->refAND001->Visible = false;
			// 
			// refAND010
			// 
			this->refAND010->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refAND010.Image")));
			this->refAND010->Location = System::Drawing::Point(792, 146);
			this->refAND010->Name = L"refAND010";
			this->refAND010->Size = System::Drawing::Size(50, 50);
			this->refAND010->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refAND010->TabIndex = 27;
			this->refAND010->TabStop = false;
			this->refAND010->Visible = false;
			// 
			// refAND111
			// 
			this->refAND111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refAND111.Image")));
			this->refAND111->Location = System::Drawing::Point(792, 202);
			this->refAND111->Name = L"refAND111";
			this->refAND111->Size = System::Drawing::Size(50, 50);
			this->refAND111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refAND111->TabIndex = 32;
			this->refAND111->TabStop = false;
			this->refAND111->Visible = false;
			// 
			// refOR000
			// 
			this->refOR000->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOR000.Image")));
			this->refOR000->Location = System::Drawing::Point(848, 34);
			this->refOR000->Name = L"refOR000";
			this->refOR000->Size = System::Drawing::Size(50, 50);
			this->refOR000->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refOR000->TabIndex = 33;
			this->refOR000->TabStop = false;
			this->refOR000->Visible = false;
			// 
			// refOR101
			// 
			this->refOR101->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOR101.Image")));
			this->refOR101->Location = System::Drawing::Point(848, 90);
			this->refOR101->Name = L"refOR101";
			this->refOR101->Size = System::Drawing::Size(50, 50);
			this->refOR101->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refOR101->TabIndex = 34;
			this->refOR101->TabStop = false;
			this->refOR101->Visible = false;
			// 
			// refOR110
			// 
			this->refOR110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOR110.Image")));
			this->refOR110->Location = System::Drawing::Point(848, 146);
			this->refOR110->Name = L"refOR110";
			this->refOR110->Size = System::Drawing::Size(50, 50);
			this->refOR110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refOR110->TabIndex = 35;
			this->refOR110->TabStop = false;
			this->refOR110->Visible = false;
			// 
			// refOR111
			// 
			this->refOR111->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refOR111.Image")));
			this->refOR111->Location = System::Drawing::Point(848, 202);
			this->refOR111->Name = L"refOR111";
			this->refOR111->Size = System::Drawing::Size(50, 50);
			this->refOR111->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refOR111->TabIndex = 36;
			this->refOR111->TabStop = false;
			this->refOR111->Visible = false;
			// 
			// refNAND011
			// 
			this->refNAND011->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNAND011.Image")));
			this->refNAND011->Location = System::Drawing::Point(904, 34);
			this->refNAND011->Name = L"refNAND011";
			this->refNAND011->Size = System::Drawing::Size(50, 50);
			this->refNAND011->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNAND011->TabIndex = 37;
			this->refNAND011->TabStop = false;
			this->refNAND011->Visible = false;
			// 
			// refNOR100
			// 
			this->refNOR100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR100.Image")));
			this->refNOR100->Location = System::Drawing::Point(960, 34);
			this->refNOR100->Name = L"refNOR100";
			this->refNOR100->Size = System::Drawing::Size(50, 50);
			this->refNOR100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNOR100->TabIndex = 38;
			this->refNOR100->TabStop = false;
			this->refNOR100->Visible = false;
			// 
			// refNAND100
			// 
			this->refNAND100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNAND100.Image")));
			this->refNAND100->Location = System::Drawing::Point(904, 90);
			this->refNAND100->Name = L"refNAND100";
			this->refNAND100->Size = System::Drawing::Size(50, 50);
			this->refNAND100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNAND100->TabIndex = 39;
			this->refNAND100->TabStop = false;
			this->refNAND100->Visible = false;
			// 
			// refNOR001
			// 
			this->refNOR001->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR001.Image")));
			this->refNOR001->Location = System::Drawing::Point(960, 90);
			this->refNOR001->Name = L"refNOR001";
			this->refNOR001->Size = System::Drawing::Size(50, 50);
			this->refNOR001->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNOR001->TabIndex = 40;
			this->refNOR001->TabStop = false;
			this->refNOR001->Visible = false;
			// 
			// refNAND101
			// 
			this->refNAND101->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNAND101.Image")));
			this->refNAND101->Location = System::Drawing::Point(904, 146);
			this->refNAND101->Name = L"refNAND101";
			this->refNAND101->Size = System::Drawing::Size(50, 50);
			this->refNAND101->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNAND101->TabIndex = 41;
			this->refNAND101->TabStop = false;
			this->refNAND101->Visible = false;
			// 
			// refNOR010
			// 
			this->refNOR010->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR010.Image")));
			this->refNOR010->Location = System::Drawing::Point(960, 146);
			this->refNOR010->Name = L"refNOR010";
			this->refNOR010->Size = System::Drawing::Size(50, 50);
			this->refNOR010->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNOR010->TabIndex = 42;
			this->refNOR010->TabStop = false;
			this->refNOR010->Visible = false;
			// 
			// refNAND110
			// 
			this->refNAND110->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNAND110.Image")));
			this->refNAND110->Location = System::Drawing::Point(904, 202);
			this->refNAND110->Name = L"refNAND110";
			this->refNAND110->Size = System::Drawing::Size(50, 50);
			this->refNAND110->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNAND110->TabIndex = 43;
			this->refNAND110->TabStop = false;
			this->refNAND110->Visible = false;
			// 
			// refNOR011
			// 
			this->refNOR011->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refNOR011.Image")));
			this->refNOR011->Location = System::Drawing::Point(960, 202);
			this->refNOR011->Name = L"refNOR011";
			this->refNOR011->Size = System::Drawing::Size(50, 50);
			this->refNOR011->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->refNOR011->TabIndex = 44;
			this->refNOR011->TabStop = false;
			this->refNOR011->Visible = false;
			// 
			// refwireRD_off
			// 
			this->refwireRD_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireRD_off.Image")));
			this->refwireRD_off->Location = System::Drawing::Point(292, 490);
			this->refwireRD_off->Name = L"refwireRD_off";
			this->refwireRD_off->Size = System::Drawing::Size(50, 50);
			this->refwireRD_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireRD_off->TabIndex = 45;
			this->refwireRD_off->TabStop = false;
			this->refwireRD_off->Visible = false;
			// 
			// refwireLU_off
			// 
			this->refwireLU_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireLU_off.Image")));
			this->refwireLU_off->Location = System::Drawing::Point(348, 490);
			this->refwireLU_off->Name = L"refwireLU_off";
			this->refwireLU_off->Size = System::Drawing::Size(50, 50);
			this->refwireLU_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireLU_off->TabIndex = 46;
			this->refwireLU_off->TabStop = false;
			this->refwireLU_off->Visible = false;
			// 
			// refwireRD_on
			// 
			this->refwireRD_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireRD_on.Image")));
			this->refwireRD_on->Location = System::Drawing::Point(292, 434);
			this->refwireRD_on->Name = L"refwireRD_on";
			this->refwireRD_on->Size = System::Drawing::Size(50, 50);
			this->refwireRD_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireRD_on->TabIndex = 48;
			this->refwireRD_on->TabStop = false;
			this->refwireRD_on->Visible = false;
			// 
			// refwireLU_on
			// 
			this->refwireLU_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireLU_on.Image")));
			this->refwireLU_on->Location = System::Drawing::Point(348, 434);
			this->refwireLU_on->Name = L"refwireLU_on";
			this->refwireLU_on->Size = System::Drawing::Size(50, 50);
			this->refwireLU_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireLU_on->TabIndex = 49;
			this->refwireLU_on->TabStop = false;
			this->refwireLU_on->Visible = false;
			// 
			// refwireLD_on
			// 
			this->refwireLD_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireLD_on.Image")));
			this->refwireLD_on->Location = System::Drawing::Point(404, 434);
			this->refwireLD_on->Name = L"refwireLD_on";
			this->refwireLD_on->Size = System::Drawing::Size(50, 50);
			this->refwireLD_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireLD_on->TabIndex = 50;
			this->refwireLD_on->TabStop = false;
			this->refwireLD_on->Visible = false;
			// 
			// refwireRU_on
			// 
			this->refwireRU_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireRU_on.Image")));
			this->refwireRU_on->Location = System::Drawing::Point(460, 434);
			this->refwireRU_on->Name = L"refwireRU_on";
			this->refwireRU_on->Size = System::Drawing::Size(50, 50);
			this->refwireRU_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireRU_on->TabIndex = 51;
			this->refwireRU_on->TabStop = false;
			this->refwireRU_on->Visible = false;
			// 
			// refwireLD_off
			// 
			this->refwireLD_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireLD_off.Image")));
			this->refwireLD_off->Location = System::Drawing::Point(404, 490);
			this->refwireLD_off->Name = L"refwireLD_off";
			this->refwireLD_off->Size = System::Drawing::Size(50, 50);
			this->refwireLD_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireLD_off->TabIndex = 52;
			this->refwireLD_off->TabStop = false;
			this->refwireLD_off->Visible = false;
			// 
			// refwireRU_off
			// 
			this->refwireRU_off->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireRU_off.Image")));
			this->refwireRU_off->Location = System::Drawing::Point(460, 490);
			this->refwireRU_off->Name = L"refwireRU_off";
			this->refwireRU_off->Size = System::Drawing::Size(50, 50);
			this->refwireRU_off->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refwireRU_off->TabIndex = 53;
			this->refwireRU_off->TabStop = false;
			this->refwireRU_off->Visible = false;
			// 
			// LogicGameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(785, 410);
			this->Controls->Add(this->refwireRU_off);
			this->Controls->Add(this->refwireLD_off);
			this->Controls->Add(this->refwireRU_on);
			this->Controls->Add(this->refwireLD_on);
			this->Controls->Add(this->refwireLU_on);
			this->Controls->Add(this->refwireRD_on);
			this->Controls->Add(this->refwireLU_off);
			this->Controls->Add(this->refwireRD_off);
			this->Controls->Add(this->refIN_on);
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
			this->Controls->Add(this->level9output);
			this->Name = L"LogicGameForm";
			this->Text = L"LogicGameForm";
			this->level9output->ResumeLayout(false);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7gate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7wire3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level7gate0))->EndInit();
			this->tabLevel8->ResumeLayout(false);
			this->tabLevel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8gate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8wire3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level8gate0))->EndInit();
			this->tabLevel9->ResumeLayout(false);
			this->tabLevel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire4ARD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire4BLU))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9gate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level9wire4CH))->EndInit();
			this->tabLevel10->ResumeLayout(false);
			this->tabLevel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire1AUR))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire1BLD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire4ARD))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire4BLU))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10gate2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire1CH))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire4CH))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10gate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level19wire3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level10wire2))->EndInit();
			this->tabLevel11->ResumeLayout(false);
			this->tabLevel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11gate2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11wire5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11gate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level11gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level110wire000))->EndInit();
			this->tabLevel12->ResumeLayout(false);
			this->tabLevel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12gate2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12gate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level12wire3))->EndInit();
			this->tabLevel13->ResumeLayout(false);
			this->tabLevel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13gate2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13gate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level13wire3))->EndInit();
			this->tabLevel14->ResumeLayout(false);
			this->tabLevel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level14wire2))->EndInit();
			this->tabLevel15->ResumeLayout(false);
			this->tabLevel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15output))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15gate3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15gate2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15gate1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15gate0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->level15wire0))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireRD_off))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireLU_off))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireRD_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireLU_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireLD_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireRU_on))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireLD_off))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refwireRU_off))->EndInit();
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
			
			for(int i = 0; i < controls->Length; i++){
				System::Windows::Forms::PictureBox^ picBox = safe_cast<System::Windows::Forms::PictureBox^>(controls[i]);

				if (puzzles[lev].wires[wireNum].getStatus() == true) {

					picBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireH_on.Image")));
				}
				else {
					picBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refwireH_off.Image")));
				}

			}


			/*for (int i = 0; i < controls->Length; i++) {

				System::String^ myWire = "";
				System::String^ name = controls[i]->Name;

				int suffix = String::Compare(name, name->Length - 2, "LU", 0, 2);
				if (suffix == 0) {
					myWire = "LU";
				}
				suffix = String::Compare(name, name->Length - 2, "LD", 0, 2);
				if (suffix == 0) {
					myWire = "LD";
				}
				suffix = String::Compare(name, name->Length - 2, "RU", 0, 2);
				if (suffix == 0) {
					myWire = "RU";
				}
				suffix = String::Compare(name, name->Length - 2, "RD", 0, 2);
				if (suffix == 0) {
					myWire = "RD";
				}
				suffix = String::Compare(name, name->Length - 1, "H", 0, 1);
				if (suffix == 0) {
					myWire = "H";
				}
				System::String^ status;

				if (puzzles[lev].wires[wireNum].getStatus() == true) {

					status = "_on";
				}
				else {
					status = "_off";
				}

				System::String^ img = ".Image";
				System::String^ ref = "ref";
				System::String^ wireImage = ref + wire + myWire + status + img;

				System::Windows::Forms::PictureBox^ picBox = safe_cast<System::Windows::Forms::PictureBox^>(controls[i]);
				picBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(wireImage)));


			}*/

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
	   //********LEVEL 7********
private: System::Void level7input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 7;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level7input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 7;
	int input = 1;

	processLevel(sender, level, input);
}
	   //********LEVEL 8********
private: System::Void level8input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 8;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level8input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 8;
	int input = 1;

	processLevel(sender, level, input);
}
	   //********LEVEL 9********
private: System::Void level9input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 9;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level9input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 9;
	int input = 1;

	processLevel(sender, level, input);
}
private: System::Void level9input2_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 9;
	int input = 2;

	processLevel(sender, level, input);
}
	   //********LEVEL 10********
private: System::Void level10input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 10;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level10input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 10;
	int input = 1;

	processLevel(sender, level, input);
}
private: System::Void level10input2_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 10;
	int input = 2;

	processLevel(sender, level, input);
}
private: System::Void level10input3_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 10;
	int input = 3;

	processLevel(sender, level, input);
}
	   //********LEVEL 11********
private: System::Void level11input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 11;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level11input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 11;
	int input = 1;

	processLevel(sender, level, input);
}
private: System::Void level11input2_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 11;
	int input = 2;

	processLevel(sender, level, input);
}
private: System::Void level11input3_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 11;
	int input = 3;

	processLevel(sender, level, input);
}
	   //********LEVEL 12********
private: System::Void level12input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 12;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level12input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 12;
	int input = 1;

	processLevel(sender, level, input);
}
private: System::Void level12input2_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 12;
	int input = 2;

	processLevel(sender, level, input);
}
private: System::Void level12input3_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 12;
	int input = 3;

	processLevel(sender, level, input);
}
	   //********LEVEL 13********
private: System::Void level13input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 13;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level13input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 13;
	int input = 1;

	processLevel(sender, level, input);
}
private: System::Void level13input2_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 13;
	int input = 2;

	processLevel(sender, level, input);
}
private: System::Void level13input3_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 13;
	int input = 3;

	processLevel(sender, level, input);
}
	   //********LEVEL 14********
private: System::Void level14input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 14;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level14input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 14;
	int input = 1;

	processLevel(sender, level, input);
}
private: System::Void level14input2_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 14;
	int input = 2;

	processLevel(sender, level, input);
}
private: System::Void level14input3_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 14;
	int input = 3;

	processLevel(sender, level, input);
}
	   //********LEVEL 15********
private: System::Void level15input0_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 15;
	int input = 0;

	processLevel(sender, level, input);
}
private: System::Void level15input1_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 15;
	int input = 1;

	processLevel(sender, level, input);
}
private: System::Void level15input2_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 15;
	int input = 2;

	processLevel(sender, level, input);
}
private: System::Void level15input3_Click(System::Object^ sender, System::EventArgs^ e) {
	int level = 15;
	int input = 3;

	processLevel(sender, level, input);
}
};


}
