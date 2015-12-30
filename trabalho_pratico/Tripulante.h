#ifndef TRIPULANTE_H
#define TRIPULANTE_H

#include <string>
#include "Unidade.h"

class Tripulante abstract:public Unidade{
	string tipo;
public:
	Tripulante(Sala *sala, int p);
};

#endif