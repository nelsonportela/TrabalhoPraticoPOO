#ifndef UNIDADE_H
#define UNIDADE_H

#include <vector>
#include "Sala.h"

class Caracteristica; //Previne Inclusao Circular

using namespace std;

class Unidade abstract{
	static const char letter = 'A';
	char id;
	int pv;
	vector<Caracteristica*> Caracteristicas;
	Sala *sala;

	static int total;

public: 
	Unidade(Sala *sala, int p = 0);
	bool addCaracteristica(Caracteristica * caracteristica);

	void setPV(int pv);
	int getPV() const { return pv; }

	char getID() const { return id; }

	virtual Sala * getSala() { return sala; }
};

#endif