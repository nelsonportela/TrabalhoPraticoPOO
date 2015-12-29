#include "Sala.h"
#include "Nave.h"


Sala::Sala(Nave * nave, string n) {
	total++;
	this->id = total;
	this->integridade = 100;
	this->oxigenio = 100;
	this->nome = n;
	this->nave = nave;

	nave->addSala(this);
};

void Sala::setIntegridade(int i){
	if (integridade + i <= 100) {
		integridade += i;
	}
	else {
		integridade = 100;
	}
};

void Sala::setOxigenio(int o) {
	if (oxigenio + o <= 100) {
		oxigenio += o;
	}
	else {
		oxigenio = 100;
	}
};

bool Sala::addUnidade(Unidade * unidade) {
	if (unidade == nullptr) {
		return false;
	}

	unidades.push_back(unidade);
	return true;
};