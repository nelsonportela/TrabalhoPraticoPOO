#ifndef UNIDADE_H
#define UNIDADE_H

#include <vector>
#include "Sala.h"

class Caracteristica; //Previne Inclusao Circular

using namespace std;

class Unidade abstract{
	int pv;
	vector<Caracteristica*> Caracteristicas;
	Sala *sala;
public: 
	Unidade(Sala *sala, int p = 0);
	bool addCaracteristica(Caracteristica * caracteristica);

	void setPV(int pv);
	int getPV() const { return pv; }
	//string getAsString()const;
	
	virtual string getAsString()const = 0;
};

#endif