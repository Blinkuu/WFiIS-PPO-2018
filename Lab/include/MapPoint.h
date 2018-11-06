#ifndef _MAP_POINT_H
#define _MAP_POINT_H

struct MapPoint {
	char* name;
	double longtitude;
	double latitude;
};

struct MapPoint construct(char* new_name, double latitude, double longtitude);

void print(struct MapPoint _struct);

void clear(struct MapPoint* _struct);

#endif
