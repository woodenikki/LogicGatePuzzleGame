#pragma once
class Wire;

class Terminal
{
public:
	virtual void connectWires(Wire*) = 0;

	virtual void refreshState() = 0; 

	virtual bool getStatus() = 0;
};

