#include "LogicGameForm.h"
#include "GameModel.h"

using namespace System;
using namespace System::Windows::Forms;

Puzzle myPuzzle;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LogicGameGUI::LogicGameForm form;
	Application::Run(% form);


}