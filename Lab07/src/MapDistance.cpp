#include "MapDistance.h"

#include <iostream>

MapDistance::MapDistance() {
	_distance.x = 0;
	_distance.y = 0;
}

void MapDistance::print() const {
	std::cout << "Distance : (" << _distance.x << ", " << _distance.y << ")" << std::endl;
}