#include "Gate.h"
#include "Wire.h"
#include <string>

using namespace std;

Gate::Gate() :out(false), gateType('o'), input1(0), input2(0), output(0) {}
Gate::Gate(char type) : Gate(type, false, false) {}
Gate::Gate(char type, bool inA) : Gate(type, inA, false) {}

Gate::Gate(char type, bool inA, bool inB) {
	gateType = type;
	out = tick(inA, inB);
}// : in1(in1), in2(in2) {}

bool Gate::getStatus() { return out; }

char Gate::getType() { return gateType; }

void Gate::setType(char type) 
{
	switch (type)
	{
	default:
		break;
	case 'o':
	case 'a':
	case 'n':
		gateType = type;
		break;
	}
}

bool Gate::tick(bool a, bool b) {
	//https://stackoverflow.com/questions/16388510/evaluate-a-string-with-a-switch-in-c/16388594
	int charValue = (int)gateType;
	bool result = false;

	switch (gateType)
	{
	default: result = false;
	case 'o': //or Gate... 
		result = (a || b);
		break;
	case 'a': //and Gate... 
		result = (a && b);
		break;
	case 'n': //not Gate... 
		result = !a;
		break;
	case 'A': //nand gate...
		result = !(a & b);
		break;
	case 'O': //nor gate...
		result = !(a | b);
		break;
	}
	out = result;
	return result;
}

void Gate::connectWires(Wire* wl, int port) { 
	if (wl == 0) {
		//throw exception requirement
	}
	switch (port) {
	default:
	case 0: //output
		output = wl;
		wl->connectInput(this);
		break;
	case 1: //top input
		input1 = wl;
		wl->connectOutput(this);
		break;
	case 2: //bottom input
		input2 = wl;
		if (gateType != 'n') { //skip third input if it is a not gate
			wl->connectOutput(this);
		}
		break;
	}
	return;

}

void Gate::refreshState() { 
	if (input1 != 0 && input2 != 0 && output != 0) {
		tick(input1->getStatus(), input2->getStatus());
		output->refreshState();
	}
}

bool Gate::getStatusInput1() {
	return input1->getStatus();
}

bool Gate::getStatusInput2() {
	return input2->getStatus();
}