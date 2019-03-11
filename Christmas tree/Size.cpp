#include "Size.h"
namespace ct {

	Size::Size() :x(0), y(0) {}

	Size::Size(unsigned long x, unsigned long y) : x(x), y(y) {}

	Size::Size(Size & size) {
		this->x = size.x;
		this->y = size.y;
	}

	Size::Size(Size && size) {
		this->x = size.x;
		this->y = size.y;
	}

	Size & Size::setX(unsigned long x) {
		this->x = x;
		return *this;
	}

	Size & Size::setY(unsigned long y) {
		this->y = y;
		return *this;
	}

	unsigned long Size::getX() {
		return this->x;
	}

	unsigned long Size::getY() {
		return this->y;
	}

	Size& Size::operator=(Size & size) {
		this->x = size.x;
		this->y = size.y;
		return *this;
	}

	Size::~Size() {}
}