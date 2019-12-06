#pragma once
#include "Terminal.h"

class Input : public Terminal {

private:
	bool status;

public:
	Wire* output;
	Input();
	Input(bool);
	bool getStatus();
	void setStatus(bool);
	void toggle();

	void connectWires(Wire*, int);
	void refreshState();
	TerminalType getTerminalType() { return INPUT; }
};

