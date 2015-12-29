#include "Nave.h"

bool Nave::addSala(Sala * sala)
{
	if (sala == nullptr) {
		return false;
	}
	
	Salas.push_back(sala);
	return true;
};
