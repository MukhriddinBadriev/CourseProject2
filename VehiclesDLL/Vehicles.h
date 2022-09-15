#pragma once
#include <iostream>
using namespace std;

#ifdef VEHICLESDLL_EXPORTS
#define DINAMICLIBRARY_API1 __declspec(dllexport)
#else
#define DINAMICLIBRARY_API1 __declspec(dllimport)
#endif

class DINAMICLIBRARY_API1 Vehicles
{
public:
	virtual int ResultRace(int distance);

protected:
	int speed;
	string name;
};

