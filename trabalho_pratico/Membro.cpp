#include "Membro.h"
#include "Operador.h"
#include "Respira.h"

Membro::Membro(Sala *s, int p, string n):Tripulante(s,p){
	this->nome = n;
	this->addCaracteristica(new Respira(this));
};