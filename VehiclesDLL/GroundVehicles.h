#pragma once


#include "Vehicles.h"
class DINAMICLIBRARY_API1 GroundVehicles :
    public Vehicles
{
protected:
    int TravelTimeBeforeRest = 0;
    int RestDuration1 = 0;
    int RestDuration2 = 0;
    int RestDuration3 = 0;
public:
    GroundVehicles(int,int, int, int, int);
    int ResultRace(int distance) override;
    
};

