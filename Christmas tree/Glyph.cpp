#include "Glyph.h"



Glyph::Glyph()
{

}

Glyph::Glyph(POINT & point, Color color, char letter)
{

	this->setPoint(point)->setColor(color)->setLetter(letter);

}

Glyph * Glyph::setPoint(POINT & point)
{
	this->point.x = point.x;
	this->point.y = point.y;
	return this;
}

Glyph * Glyph::setColor(Glyph::Color color)
{
	this->color = color;
	return this;
}

Glyph * Glyph::setLetter(char letter)
{
	this->letter = letter;
	return this;
}

POINT & Glyph::getPoint()
{
	return this->point;
}

Glyph::Color Glyph::getColor()
{
	return this->color;
}

char Glyph::getLetter()
{
	return this->letter;
}


Glyph::~Glyph()
{
}
