#pragma once
#include "Terminal.h"

class Input : public Terminal {

private:
	bool status;
	Wire* output;
public:
	Input();
	Input(bool);
	bool getStatus();
	void setStatus(bool);
	void toggle();

	void connectWires(Wire*);
	void refreshState();
};

