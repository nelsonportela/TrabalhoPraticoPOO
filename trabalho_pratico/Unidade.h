#ifndef UNIDADE_H
#define UNIDADE_H

#include <vector>

class Caracteristica; //Previne Inclusao Circular

using namespace std;

class Unidade abstract{
	int pv;
public: 
	vector<Caracteristica>Caracteristicas;

};

#endif