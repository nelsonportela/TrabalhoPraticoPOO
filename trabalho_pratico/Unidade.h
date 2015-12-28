#ifndef UNIDADE_H
#define UNIDADE_H

#include <vector>

class Caracteristica; //Previne Inclusao Circular

using namespace std;

class Unidade abstract{
	int pv;
	vector<Caracteristica*> Caracteristicas;
public: 
	
	bool addCaracteristica(Caracteristica * caracteristica);
};

#endif