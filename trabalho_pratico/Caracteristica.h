#ifndef CARACTERISTICA_H
#define CARACTERISTICA_H

#include <string>
#include "Unidade.h"

class Caracteristica abstract {
	string nome;
	Unidade * unidade;
public: 
	Caracteristica(Unidade *u, string nome);
};

#endif