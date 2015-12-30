#include "Operador.h"

Operador::Operador(Unidade * unidade, string n) :Caracteristica(unidade) {
	this->nome = n;
}
bool Operador::executa()
{
	Sala *sala = this->getUnidade()->getSala();

	if (sala->getIntegridade() == 100) { //Falta verificar se a unidade está em combate
		return true;
	}

	return false;
}
;