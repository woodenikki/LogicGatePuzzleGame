#pragma once
#include "Terminal.h"
class Gate : public Terminal
{
private:
	bool out;
	char gateType;
	Wire* input1;
	Wire* input2;
	Wire* output;


public:
	Gate();
	Gate(char);
	Gate(char, bool);
	Gate(char, bool, bool);
	bool getStatus();
	bool tick(bool a, bool b = false);
	void setType(char);
	char getType();

	void connectWires(Wire*);
	void refreshState();
};

