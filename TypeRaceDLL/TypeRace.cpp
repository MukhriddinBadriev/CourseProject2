#include "TypeRace.h"
TypeRace::TypeRace(int new_NumberTypeRace) {
	NumberTypeRace = new_NumberTypeRace;
}
bool TypeRace::Transfarmation( int damas) {
	As as=As::AllTerrainBoots;
	as=static_cast<As>(damas) ;
	if (NumberTypeRace == 1) {
		switch (as)
		{
		case TypeRace::AllTerrainBoots:
			
		case TypeRace::SpeedCamel:
			
		case TypeRace::Camel:
			
		case TypeRace::Centaur:
			return true;
			break;
		case TypeRace::Eagle:
			
		case TypeRace::Broom:
			
		case TypeRace::MagicCarpet:
			return false;
			break;
		default: return false;
			break;
		}
	}
	else if (NumberTypeRace == 2) {
		switch (damas)
		{
		case TypeRace::AllTerrainBoots:

		case TypeRace::SpeedCamel:

		case TypeRace::Camel:

		case TypeRace::Centaur:
			return false;
			break;
		case TypeRace::Eagle:

		case TypeRace::Broom:

		case TypeRace::MagicCarpet:
			return true;
			break;
		default: return false;
			break;
		}
	}
	else if (NumberTypeRace == 3) {
		switch (damas)
		{
		case TypeRace::AllTerrainBoots:

		case TypeRace::SpeedCamel:

		case TypeRace::Camel:

		case TypeRace::Centaur:

		case TypeRace::Eagle:

		case TypeRace::Broom:

		case TypeRace::MagicCarpet:
			return true;
			break;
		default: return false;
			break;
		}
	}
}
