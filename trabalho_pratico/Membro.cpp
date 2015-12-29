#include "Membro.h"
#include "Operador.h"
#include <sstream>

Membro::Membro(Sala *s, int p, string n):Tripulante(s,p){
	this->nome = n;
	this->addCaracteristica(new Operador(this));
};

string Membro::getAsString()const {
	ostringstream oss;
	oss << "\nNome: " << nome << endl;
	return oss.str();
}
