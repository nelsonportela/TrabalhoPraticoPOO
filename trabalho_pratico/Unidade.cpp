#include "Unidade.h"

bool Unidade::addCaracteristica(Caracteristica * caracteristica)
{
	if (caracteristica == nullptr) {
		return false;
	}

	Caracteristicas.push_back(caracteristica);
	return true;
}