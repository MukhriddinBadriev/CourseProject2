#pragma once
#include <iostream>
using namespace std;

#ifdef TYPERACEDLL_EXPORTS
#define DINAMICLIBRARY_API2 __declspec(dllexport)
#else
#define DINAMICLIBRARY_API2 __declspec(dllimport)
#endif

class DINAMICLIBRARY_API2 TypeRace
{
public:
	int NumberTypeRace;
	TypeRace(int);
enum As
{
	AllTerrainBoots = 1,
	Broom, Camel, Centaur, Eagle, SpeedCamel, MagicCarpet 
};

bool Transfarmation( int);

};


