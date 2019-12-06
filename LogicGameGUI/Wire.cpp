#include "Wire.h"
#include "Terminal.h"

Wire::Wire() :sig(false), input(0), output(0) {}
Wire::Wire(bool sig) : sig(sig), input(0), output(0) {}

bool Wire::getStatus() { return sig; }
void Wire::setStatus(bool set) { sig = set; }

void Wire::connectInput(Terminal* t) {
	if (t == 0) {
		//throw exception
	}
	input = t;
}

void Wire::connectOutput(Terminal* t) {
	if (t == 0) {
		//throw exception
	}
	output = t;
}

void Wire::refreshState() {
	setStatus(input->getStatus());
	output->refreshState();
}

bool operator==(const Wire& w1, const Wire& w2) //overloading operators requirement
{ if (&w1 == &w2) { 
	return true; 
} else return false; }
