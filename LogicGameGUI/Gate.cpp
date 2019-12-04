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

void Gate::connectWires(Wire* wl) {
	if (wl == 0) {
		//throw exception requirement
	}
	if (wl + 1 == 0) {
		//throw exception
	}
	if ((wl + 2 == 0) && gateType != 'n') {
		//throw exception
	}
	output = wl;
	wl->connectInput(this);

	input1 = wl + 1;
	(wl + 1)->connectInput(this);

	input2 = wl + 2;
	if (gateType != 'n') { //skip third input if it is a not gate
		(wl + 2)->connectInput(this);
	}


}

void Gate::refreshState() { 
	if (input1 != 0 && input2 != 0 && output != 0) {
		tick(input1->getStatus(), input2->getStatus());
		output->refreshState();
	}
}