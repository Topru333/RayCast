#pragma once
#include "Vector3D.h"

class Ray
{
public:
	Ray(Vector3D origin, Vector3D direction);

	Vector3D& getOrigin();

	Vector3D& getDirection();

	__declspec(property(get = getDirection)) Vector3D direction;
	__declspec(property(get = getOrigin)) Vector3D origin;
private:
	Vector3D _origin;
	Vector3D _dir;
};