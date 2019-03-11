#pragma once
#include "Size.h"
#include <Windows.h>
namespace ct {

	class Buffer {
	public:
		Buffer();
		Buffer(Size &size);

		~Buffer();
	private:
		Size sizeOfBuffer;
		HANDLE currentBuffer;
	};

}