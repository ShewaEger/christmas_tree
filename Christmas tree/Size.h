#pragma once

namespace ct {
	class Size {
	public:
		Size();
		Size(unsigned long x, unsigned long y);
		Size(Size &size);
		Size(Size &&size);

		Size& setX(unsigned long x);
		Size& setY(unsigned long y);

		unsigned long getX();
		unsigned long getY();

		Size& operator=(Size& size);
		~Size();
	private:
		unsigned long x, y;
	};
}
