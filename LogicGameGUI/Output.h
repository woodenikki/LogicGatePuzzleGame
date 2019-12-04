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

	void connectWires(Wire*);
	void refreshState();
};

