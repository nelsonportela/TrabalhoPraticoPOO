#ifndef SALA_H
#define SALA_H


#include <vector>

class Unidade;
class Nave;

using namespace std;

class Sala abstract{

	int id;
	int integridade;
	int oxigenio;
	string nome;
	Nave *nave;
	vector <Unidade*> unidades;

	static int total;
	
public:
	Sala(Nave * nave, string n);

	static int quantasSalas() { return total; }

	int getID()const { return id; }

	int getIntegridade()const { return integridade; }
	void setIntegridade(int i);

	int getOxigenio()const { return oxigenio; }
	void setOxigenio(int o);

	bool addUnidade(Unidade * unidade);

	vector <Unidade*> getVectorUnidades() { return unidades; }
};

#endif