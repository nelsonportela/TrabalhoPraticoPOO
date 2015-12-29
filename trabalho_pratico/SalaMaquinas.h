#ifndef SALAMAQUINAS_H
#define SALAMAQUINAS_H

#include "Sala.h"

class SalaMaquinas :public Sala {

public:
	SalaMaquinas(Nave *nave, string n = "Sala das Maquinas");
};

#endif