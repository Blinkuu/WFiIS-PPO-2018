#include "MapPoint.h"
#include <cmath>
#include <iostream>

MapPoint::MapPoint() {
	_x = 0;
	_y = 0;
}

void MapPoint::set_latitude(double x) {
	_x = x;
}

void MapPoint::set_longitude(double y) {
	_y = y;
}

void MapPoint::set_coordinates(const double x, const double y) {
	_x = x;
	_y = y;
}

MapDistance MapPoint::distance(const MapPoint& mapPoint) {
	// Tu cos teraz zmieniam
	MapDistance temp;
	temp._distance.x = mapPoint._x - this->_x;
	temp._distance.y = mapPoint._y - this->_y;
	return temp;
}

MapPoint MapPoint::farthest(const MapPoint& mapPoint1, const MapPoint& mapPoint2) {
	double distance1 = sqrt(pow(_x - mapPoint1._x, 2) + pow(_y - mapPoint1._y, 2));
	double distance2 = sqrt(pow(_x - mapPoint2._x, 2) + pow(_y - mapPoint2._y, 2));
	if (distance1 > distance2) {
		return mapPoint1;
	} else {
		return mapPoint2;
	}
}

void MapPoint::print() const {
	std::cout << "Point: (" << _x << ", " << _y << ")" << std::endl;
}