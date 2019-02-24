#pragma once
#include <list>
#include "Glyph.h"
class Buffer;
class State
{
public:
	State();

	void Render(Buffer *buffer);

	~State();
private:
	std::list<Glyph *> glyphs;
	size_t currentState;

};

