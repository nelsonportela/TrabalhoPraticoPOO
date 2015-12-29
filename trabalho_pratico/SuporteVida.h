#ifndef SUPORTEVIDA_H
#define SUPORTEVIDA_H

#include "Sala.h"

class SuporteVida:public Sala {

public:
	SuporteVida(Nave *nave, string n = "Suporte de Vida");
};

#endif