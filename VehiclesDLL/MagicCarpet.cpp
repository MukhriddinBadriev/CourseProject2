#include "MagicCarpet.h"
MagicCarpet::MagicCarpet(int distance,int new_ReductionFactor, int new_speed):AirVehicles(distance,ReductionFactor ,10) {
    if (distance < 1000) { ReductionFactor = 0; }
    else if (distance > 1000 && distance < 5000) { ReductionFactor = 3; }
    else if (distance > 5000 && distance < 10000) { ReductionFactor = 10; }
    else if (distance > 10000) { ReductionFactor = 5; }
};