// LSP.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <cassert>
#include "Shapes.hpp"

bool doSomething(Rectangle& r) {
	r.setWidth(5);
	r.setHeight(4);
	return (r.getWidth() * r.getHeight() == 20);
}

int main() {
	Square s = Square();

	assert(doSomething(s));

	return 0;
}
