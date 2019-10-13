#include "Display.h"

void Display::UpdateRect (RECT r) {
	this->_rect = r;
}

void Display::Draw(HDC hdc, pixelmap &pixels) {
	if (_rect.bottom == 0) {
		return;
	}
	for (int x = 0; x < _rect.right; x++) {
		for (int y = 0; y < _rect.bottom; y++) {
			SetPixel(hdc, x, y, pixels[x][y]);
		}
	}
}

