#ifndef SALA_H
#define SALA_H

#include "Unidade.h"
#include <vector>

class Sala abstract{

	int id;
	int integridade;
	int oxigenio;
	static int total;
	vector <Unidade*> unidades;

public:
	Sala();

	static int quantasSalas() { return total; }

	int getID()const { return id; }

	int getIntegridade()const { return integridade; }
	void setIntegridade(int i);

	int getOxigenio()const { return oxigenio; }
	void setOxigenio(int o);

	bool addUnidade(Unidade * unidade);
};

#endif