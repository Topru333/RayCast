#include "Sphere.h"

Sphere::Sphere(Vector3D pos, float radius, COLORREF color) : _pos(pos), _radius(radius), _color(color) {}

Vector3D Sphere::getPos() {
	return this->_pos;
}

float Sphere::getRadius() {
	return this->_radius;
}

COLORREF Sphere::getColor() {
	return this->_color;
}
