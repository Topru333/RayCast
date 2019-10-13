#include "Color.h"
#include "framework.h"

Color::Color(int r, int g, int b) : _r(r), _g(g), _b(b) {
	
}

Color::rgb() {
	return RGB(_r, _g, _b);
}