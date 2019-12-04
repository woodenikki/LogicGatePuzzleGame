#pragma once
#include "LogicGameForm.h"
#include "Gate.h"
#include "Input.h"
#include "Output.h"
#include "Wire.h"



struct Puzzle {
	Input iA;
	Input iB;

	Wire w1;
	Gate g1;
	Wire w2;
	Output oA;
};

void initializeLevel1() { //no gates
	myPuzzle.iA.setStatus(false);
	myPuzzle.iA.refreshState();
}

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