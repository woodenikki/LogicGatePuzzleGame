#pragma once

struct Gridblock
{
	enum {
		input,
		gate,
		wire,
		output,
		empty
	} type;

	unsigned int index;

};

