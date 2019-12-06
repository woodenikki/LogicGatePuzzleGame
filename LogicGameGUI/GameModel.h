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
		puz.inputs[0].setStatus(false);

	puz.out.connectWires(&puz.wires[0], 0);
	puz.inputs[0].connectWires(&puz.wires[0], 0);
}

void initializeLevel2(Puzzle& puz) { //NOT gate
	clearPuzzle(puz);

	puz.wires.resize(2);

	puz.inputs.resize(1);
		puz.inputs[0].setStatus(true); //default on

	puz.gates.resize(1);
		puz.gates[0] = Gate('n');

	//wire0 (right)
	puz.out.connectWires(&puz.wires[0], 0);
	puz.gates[0].connectWires(&puz.wires[0], 0);
	//wire1 (left)
	puz.gates[0].connectWires(&puz.wires[1], 1);
	puz.inputs[0].connectWires(&puz.wires[1], 0);
}

void initializeLevel3(Puzzle& puz) { //AND gate
	clearPuzzle(puz);

	puz.wires.resize(3);

	puz.inputs.resize(2);
		puz.inputs[0].setStatus(false);
		puz.inputs[1].setStatus(false);

	puz.gates.resize(1);
		puz.gates[0] = Gate('a');

	//wire0 (to out)
	puz.out.connectWires(&puz.wires[0], 0);
	puz.gates[0].connectWires(&puz.wires[0], 0);
	//wire1 (top)
	puz.gates[0].connectWires(&puz.wires[1], 1); //how to connect it to specific port...???
	puz.inputs[0].connectWires(&puz.wires[1], 0);
	//wire2(bottom)
	puz.gates[0].connectWires(&puz.wires[2], 2);
	puz.inputs[1].connectWires(&puz.wires[2], 0);

}

void initializeLevel4(Puzzle& puz) { //OR gate
	clearPuzzle(puz);

	puz.wires.resize(3);

	puz.inputs.resize(2);
	puz.inputs[0].setStatus(false);
	puz.inputs[1].setStatus(false);

	puz.gates.resize(1);
	puz.gates[0] = Gate('o');

	//wire0 (to out)
	puz.out.connectWires(&puz.wires[0], 0);
	puz.gates[0].connectWires(&puz.wires[0], 0);
	//wire1 (top)
	puz.gates[0].connectWires(&puz.wires[1], 1); //how to connect it to specific port...???
	puz.inputs[0].connectWires(&puz.wires[1], 0);
	//wire2(bottom)
	puz.gates[0].connectWires(&puz.wires[2], 2);
	puz.inputs[1].connectWires(&puz.wires[2], 0);
}

void initializeLevel5(Puzzle& puz) { //NAND gate
	clearPuzzle(puz);

	puz.wires.resize(3);

	puz.inputs.resize(2);
	puz.inputs[0].setStatus(true);
	puz.inputs[1].setStatus(true);

	puz.gates.resize(1);
	puz.gates[0] = Gate('A');

	//wire0 (to out)
	puz.out.connectWires(&puz.wires[0], 0);
	puz.gates[0].connectWires(&puz.wires[0], 0);
	//wire1 (top)
	puz.gates[0].connectWires(&puz.wires[1], 1); //how to connect it to specific port...???
	puz.inputs[0].connectWires(&puz.wires[1], 0);
	//wire2(bottom)
	puz.gates[0].connectWires(&puz.wires[2], 2);
	puz.inputs[1].connectWires(&puz.wires[2], 0);
}

void initializeLevel6(Puzzle& puz) { //NOR gate
	clearPuzzle(puz);

	puz.wires.resize(3);

	puz.inputs.resize(2);
	puz.inputs[0].setStatus(true);
	puz.inputs[1].setStatus(true);

	puz.gates.resize(1);
	puz.gates[0] = Gate('O');

	//wire0 (to out)
	puz.out.connectWires(&puz.wires[0], 0);
	puz.gates[0].connectWires(&puz.wires[0], 0);
	//wire1 (top)
	puz.gates[0].connectWires(&puz.wires[1], 1); //how to connect it to specific port...???
	puz.inputs[0].connectWires(&puz.wires[1], 0);
	//wire2(bottom)
	puz.gates[0].connectWires(&puz.wires[2], 2);
	puz.inputs[1].connectWires(&puz.wires[2], 0);
}
