#pragma once
#include <Windows.h>


class Glyph
{

	enum Color {
		darkBlue = FOREGROUND_BLUE,
			darkGreen = FOREGROUND_GREEN,
			darkRed = FOREGROUND_RED,
			blue = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
			green = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
			red = FOREGROUND_RED | FOREGROUND_INTENSITY
	};

public:
	Glyph();
	Glyph(POINT &point, Color color, char letter);
	Glyph * setPoint(POINT &point);
	Glyph * setColor(Color color);
	Glyph * setLetter(char letter);
	POINT& getPoint();
	Color getColor();
	char getLetter();
	~Glyph();
private:
	
	POINT point;
	Color color;
	char letter;

};

