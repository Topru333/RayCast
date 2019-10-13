#include "Ray.h"

Ray::Ray(Vector3D origin, Vector3D direction) : _origin(origin), _dir(direction) {

}

Vector3D& Ray::getOrigin() {
	return this->_origin;
}

Vector3D& Ray::getDirection() {
	return this->_dir;
}