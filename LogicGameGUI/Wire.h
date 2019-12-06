#pragma once

class Terminal;

class Wire
{
private:
	bool sig; //signal
	Terminal* input;
	Terminal* output;

public:
	Wire();
	Wire(bool);
	bool getStatus();
	void setStatus(bool);
	void connectInput(Terminal*);
	void connectOutput(Terminal*);
	void refreshState();
	Terminal* getOutput() { return output; };

	friend bool operator==(const Wire&, const Wire&);
};