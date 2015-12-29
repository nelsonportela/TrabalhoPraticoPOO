#include "Unidade.h"
#include <sstream>

Unidade::Unidade(Sala *sala, int p)
{
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

//bool Unidade::addSala(Sala * s)
//{
//	if (s == nullptr) {
//		return false;
//	}
//	this->sala = s;
//	return true;
//}

//string Unidade::getAsString()const {
//	ostringstream oss;
//	oss << "\nNome: " << nome << endl;
//	return oss.str();
//}