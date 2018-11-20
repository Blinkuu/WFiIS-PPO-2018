#pragma once

#include "MapDistance.h"

class MapPoint {

private:
	double _x;
	double _y;
public:
	MapPoint();

	int get_x() const;
	int get_y() const;

	void set_latitude(double x); // Sets latitude
	void set_longitude(double y); // Sets longitude
	void set_coordinates(const double x, const double y); // Sets coordinates
	MapDistance distance(const MapPoint& mapPoint); // Returns MapDistance object with distance calculated
	MapPoint farthest(const MapPoint& mapPoint1, const MapPoint& mapPoint2); // Returns MapPoint object which is the farthest from both MapPoints
	void print() const; // Prints MapPoint data
};