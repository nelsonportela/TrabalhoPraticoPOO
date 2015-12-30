#ifndef CONTROLOESCUDO_H
#define CONTROLOESCUDO_H

#include "Sala.h"

class ControloEscudo:public Sala {

public:
	ControloEscudo(Nave *nave, string n = "Controlo de Escudo");
};

#endif