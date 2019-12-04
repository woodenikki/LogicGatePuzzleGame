#include "LogicGameForm.h"
#include "GameModel.h"
#include <array>

using namespace System;
using namespace System::Windows::Forms;

Puzzle myPuzzle;

[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LogicGameGUI::LogicGameForm form;
	Application::Run(% form);


}