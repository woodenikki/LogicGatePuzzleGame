#pragma once
#include "LogicGameForm.h"
#include "Gate.h"
#include "Input.h"
#include "Output.h"
#include "Wire.h"
#include <vector>

using namespace std;

struct Puzzle {
	Output out;

	vector <Wire> wires;
	vector <Gate> gates;
	vector <Input> inputs;

};

vector <Puzzle> puzzles;


void updateButtonGraphic(Input &in, System::Windows::Forms::Button^ &button, System::ComponentModel::ComponentResourceManager^ &resources) {

	if (in.getStatus() == true) {
		//use green
		button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refIN_on.Image")));
			//			this->level1input0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level1input0.Image")));
	}
	else {
		//use red
		button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"level1input0.Image")));
	}
}

void clearPuzzle(Puzzle& puz) {
	puz.wires.clear();
	puz.gates.clear();
	puz.inputs.clear();
}

void initializeLevel1(Puzzle &puz) { //no gates
	clearPuzzle(puz);

	puz.wires.resize(1);
	puz.inputs.resize(1);
	
	puz.out.connectWires(&puz.wires[0]);
	puz.inputs[0].connectWires(&puz.wires[0]);
}
/*
void initializeLevel2() { //NOT gate
	myPuzzle.iA.setStatus(true);
	myPuzzle.g1.setType('n');
	myPuzzle.iA.refreshState();  //sets all component's statuses
}

void initializeLevel3() { //AND gate
	myPuzzle.iA.setStatus(false);
	myPuzzle.iB.setStatus(false);
	myPuzzle.g1.setType('a');
	myPuzzle.iA.refreshState();
	myPuzzle.iB.refreshState();
}

void initializeLevel4() { //OR gate
	myPuzzle.iA.setStatus(false);
	myPuzzle.iB.setStatus(false);
	myPuzzle.g1.setType('o');
	myPuzzle.iA.refreshState();
	myPuzzle.iB.refreshState();
}

void initializeLevel5() { //NAND gate
	myPuzzle.iA.setStatus(true);
	myPuzzle.iB.setStatus(true);
	myPuzzle.g1.setType('A');
	myPuzzle.iA.refreshState();
	myPuzzle.iB.refreshState();
}

void initializeLevel6() { //NOR gate
	myPuzzle.iA.setStatus(true);
	myPuzzle.iB.setStatus(true);
	myPuzzle.g1.setType('O');
	myPuzzle.iA.refreshState();
	myPuzzle.iB.refreshState();
}
*/