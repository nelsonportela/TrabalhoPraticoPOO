#include "Unidade.h"
#include <sstream>

Unidade::Unidade(Sala *sala, int p)
{
	id = static_cast<char>(letter + total);
	total++;

	this->pv = p;
	this->sala = sala;

	sala->addUnidade(this);
}

bool Unidade::addCaracteristica(Caracteristica * caracteristica)
{
	if (caracteristica == nullptr) {
		return false;
	};

	Caracteristicas.push_back(caracteristica);
	return true;
}

void Unidade::setPV(int pv) {
	this->pv = pv;
};