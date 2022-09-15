#pragma once
#include "Vehicles.h"
class DINAMICLIBRARY_API1 AirVehicles :
    public Vehicles
{
public:
    int ResultRace(int distance) override;
    AirVehicles(int,int,int);
    
protected:
    int ReductionFactor = 0; 
};

