#ifndef NAVE_H
#define NAVE_H

#include <iostream>
#include <vector>
#include "Sala.h"
#include "Tripulante.h"

using namespace std;

class Nave {

	vector<Sala*> Salas;

public:
	Nave() {};
	bool addSala(Sala* sala);
};

#endif