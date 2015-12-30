#ifndef AUTOREPARADOR_H
#define AUTOREPARADOR_H

#include "Sala.h"

class AutoReparador:public Sala {

public:
	AutoReparador(Nave *nave, string n = "Auto-reparador");
};

#endif