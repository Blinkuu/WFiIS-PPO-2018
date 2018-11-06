#ifndef _MAP_DISTANCE_H
#define _MAP_DISTANCE_H

struct MapPoint inTheMiddle(struct MapPoint place1, struct MapPoint place2, char* new_name);

void movePoint(struct MapPoint* _struct, double _latitudeShift, double _longitudeShift);

#endif
