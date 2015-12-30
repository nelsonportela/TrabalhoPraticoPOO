#ifndef CARACTERISTICA_H
#define CARACTERISTICA_H

//#include <string>
#include "Unidade.h"

class Caracteristica abstract {
	Unidade * unidade;
public: 
	Caracteristica(Unidade *u);
	virtual Unidade * getUnidade() { return unidade; }
	virtual bool executa() = 0;
};

#endif