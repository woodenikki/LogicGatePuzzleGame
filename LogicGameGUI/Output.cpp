#include "Output.h"
#include "Wire.h"
#include <stdexcept>

Output::Output() :status(false), input(0){}
Output::Output(bool status) : status(status) {}

bool Output::getStatus() {
	return status;
}

void Output::setStatus(bool b) {
	status = b;
}

void Output::connectWires(Wire* wl) {
	if (wl == 0) {
		//throw exception requirement
	}
	input = wl;
	wl->connectOutput(this);
}

void Output::refreshState() {
	status = input->getStatus();
}