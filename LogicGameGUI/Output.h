#pragma once
#include "Terminal.h"

class Output : public Terminal
{
private:
	bool status;
	Wire* input;
public:
	Output();
	Output(bool);
	bool getStatus();
	void setStatus(bool);

	void connectWires(Wire*, int);
	void refreshState();
	TerminalType getTerminalType() { return OUTPUT; }
};

