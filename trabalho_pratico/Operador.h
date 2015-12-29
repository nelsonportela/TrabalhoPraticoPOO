#ifndef OPERADOR_H
#define OPERADOR_H

#include <string>
#include "Caracteristica.h"

class Operador :public Caracteristica {
	string nome;
public:
	Operador(Unidade *unidade, string nome="Operador"):Caracteristica(unidade, nome) {};
};

#endif