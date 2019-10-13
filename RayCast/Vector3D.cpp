#include "Vector3D.h"
#include <math.h>

Vector3D::Vector3D(float x, float y, float z) : _x(x), _y(y), _z(z) {

}

float Vector3D::getX() {
	return this->_x;
}

float Vector3D::getY() {
	return this->_y;
}

float Vector3D::getZ() {
	return this->_z;
}

void Vector3D::normalize() {
	float sqr = sqrtf(_x * _x + _y * _y + _z * _z);
	_x = _x / sqr;
	_y = _y / sqr;
	_z = _z / sqr;
}

Vector3D Vector3D::operator+(Vector3D vector) {
	return Vector3D( _x + vector._x, _y + vector._y, _z + vector._z );
}

Vector3D Vector3D::operator-(Vector3D vector) {
	return Vector3D(_x - vector._x, _y - vector._y, _z - vector._z);
}

float Vector3D::operator*(Vector3D vector) {
	return _x * vector._x + _y * vector._y + _z * vector._z;
}

Vector3D Vector3D::zeroes() {
	return Vector3D(0, 0, 0);
}