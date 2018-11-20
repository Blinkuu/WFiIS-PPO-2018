#pragma once

struct distance {
	double x;
	double y;
};

class MapDistance {
	
public:
	MapDistance();
	void print() const; // Prints struct data

	struct distance _distance;
};