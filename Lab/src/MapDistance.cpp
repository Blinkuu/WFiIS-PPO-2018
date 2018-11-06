#include <iostream>
#include "MapPoint.h"
#include "MapDistance.h"

struct MapPoint inTheMiddle(struct MapPoint place1, struct MapPoint place2, char* new_name) {

	struct MapPoint new_struct;
	new_struct.name = new_name;
	new_struct.latitude = (place1.latitude + place2.latitude)/2;
	new_struct.longtitude = (place1.longtitude + place2.longtitude)/2;

	return new_struct;
}

void movePoint(struct MapPoint *_struct, double _latitudeShift, double _longitudeShift) {

	(*_struct).latitude += _latitudeShift;
	(*_struct).longtitude += _longitudeShift;
}
