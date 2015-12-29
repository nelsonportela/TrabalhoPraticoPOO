#ifndef MEMBRO_H
#define MEMBRO_H

#include <string>
#include "Tripulante.h"

class Membro:public Tripulante {
	string nome;
public:
	Membro(Sala *s, int p = 5, string n = "Membro");
	string getAsString()const;
};

#endif