#ifndef NAVE_H
#define NAVE_H

#include <iostream>
#include <vector>
#include "Sala.h"
#include "Tripulante.h"

using namespace std;

class Nave {

	vector<Sala> Salas;
	vector<Tripulante> Tripulacao;

public:

	void adicionaSala(Sala nova) { Salas.push_back(nova); };

};

#endif