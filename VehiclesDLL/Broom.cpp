#include "Broom.h"
Broom::Broom(int distance, int new_ReductionFactor, int new_speed) :AirVehicles(distance, ReductionFactor ,20) {
	ReductionFactor = distance / 1000;
};