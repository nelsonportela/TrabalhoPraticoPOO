#ifndef RESPIRA_H
#define RESPIRA_H

#include <string>
#include "Caracteristica.h"

class Respira:public Caracteristica {
	string nome;
public:
	Respira(Unidade *unidade, string n = "Respira");
	bool executa();
};

#endif