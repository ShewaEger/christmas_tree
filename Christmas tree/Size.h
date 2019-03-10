#pragma once

namespace ct {
	class Size {
	public:
		Size();
		Size(unsigned long x, unsigned long y);
		Size(Size &&size);
		~Size();
	};
}
