#include "AirVehicles.h"
int AirVehicles:: ResultRace(int distance) {
	double result = distance * (100 - ReductionFactor) * 0.01 / speed;
	return result;
}
AirVehicles::AirVehicles(int distance,int new_ReductionFactor,int new_speed) {
	ReductionFactor = new_ReductionFactor;
	speed = new_speed;
}

