#include <iostream>
#include "MapPoint.h"

struct MapPoint construct(char* _new_name, double _latitude, double _longtitude) {

	struct MapPoint new_struct;
	new_struct.name = (char*)malloc(sizeof(_new_name)/sizeof(char));
	new_struct.name = _new_name;
	new_struct.latitude = _latitude;
	new_struct.longtitude = _longtitude;


	return new_struct;
}

void print(struct MapPoint _struct) {
	
	printf("Position of %s. ", _struct.name);
	printf("Latitude: %f ", _struct.latitude);
	printf("Longtitude: %f\n", _struct.longtitude);
}

void clear(struct MapPoint* _struct) {

	//printf("\n%p",(*_struct).name[0]);
	//free((*_struct).name[0]);
}
