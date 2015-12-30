#ifndef SISTEMASEGURANCAINTERNO_H
#define SISTEMASEGURANCAINTERNO_H

#include "Sala.h"

class SistemaSegurancaInterno:Sala {

public:
	SistemaSegurancaInterno(Nave *nave, string n = "Sistema de Seguranca Interno");
};

#endif