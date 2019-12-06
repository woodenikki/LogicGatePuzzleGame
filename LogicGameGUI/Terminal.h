#pragma once
class Wire;

enum TerminalType {INPUT, OUTPUT, GATE};

class Terminal
{
public:
	virtual void connectWires(Wire*, int) = 0;

	virtual void refreshState() = 0; 

	virtual bool getStatus() = 0;

	virtual TerminalType getTerminalType() = 0;
};

