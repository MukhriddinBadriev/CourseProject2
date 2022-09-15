#include "GroundVehicles.h"

int GroundVehicles::ResultRace(int distance) {
	int NumberRest = distance /(speed* TravelTimeBeforeRest);
	int result = (distance / speed) + RestDuration1 + RestDuration2 + RestDuration3 * (NumberRest - 2);
	return result;
}
GroundVehicles::GroundVehicles(int new_speed,int new_TravelTimeBeforeRest, int new_RestDuration1, int new_RestDuration2, int new_RestDuration3) {
	speed = new_speed;
	TravelTimeBeforeRest = new_TravelTimeBeforeRest;
	RestDuration1 = new_RestDuration1;
	RestDuration2 = new_RestDuration2;
	RestDuration3 = new_RestDuration3;
}