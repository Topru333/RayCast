#pragma once

class Vector3D
{
public:
	Vector3D(float x, float y, float z);

	float getX();
	float getY();
	float getZ();

	void normalize();

	__declspec(property(get = getX)) float X;
	__declspec(property(get = getY)) float Y;
	__declspec(property(get = getZ)) float Z;

	Vector3D operator+(Vector3D vector);
	Vector3D operator-(Vector3D vector);
	float operator*(Vector3D vector);

	static Vector3D zeroes();
private:
	float _x, _y, _z;

};

