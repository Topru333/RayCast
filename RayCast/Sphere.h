#pragma once
#include "Vector3D.h"
#include "framework.h"

class Sphere
{
public:
	Sphere(Vector3D pos, float radius, COLORREF color);

	Vector3D getPos();
	float getRadius();
	COLORREF getColor();

	__declspec(property(get = getPos)) Vector3D Position;
	__declspec(property(get = getRadius)) float Radius;
	__declspec(property(get = getColor)) COLORREF Color;
private:
	Vector3D _pos;
	float _radius;
	COLORREF _color;
};
