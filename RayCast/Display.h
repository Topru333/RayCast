#pragma once
#include "framework.h"
#include <vector>

using pixelmap = std::vector<std::vector<COLORREF>>;

class Display
{
public: 
	void Draw(HDC hdc, pixelmap &pixels);
	void UpdateRect(RECT r);

private:
	RECT _rect{};
};

