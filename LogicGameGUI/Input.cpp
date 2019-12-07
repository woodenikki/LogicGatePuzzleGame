#include "Input.h"
#include "Wire.h"
#include <stdexcept>

Input::Input() :status(false), output(0) {}
Input::Input(bool status) : status(status) {}

bool Input::getStatus() {
	return status;
}

void Input::setStatus(bool b) {
	status = b;
}

void Input::toggle() {
	status = !status;
}

void Input::connectWires(Wire* wl, int port) { 
	
	if (wl == 0) { 
		throw 0;
	}
	output = wl;
	wl->connectInput(this);
}

void Input::refreshState() {
	output->refreshState();
}