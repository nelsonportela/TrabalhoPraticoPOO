#include "Sala.h"


Sala::Sala() {
	total++;
	id = total;
	integridade = 100;
	oxigenio = 100;
}


void Sala::setIntegridade(int i){
	if (integridade + i <= 100) {
		integridade += i;
	}
	else {
		integridade = 100;
	}
}

void Sala::setOxigenio(int o) {
	if (oxigenio + o <= 100) {
		oxigenio += o;
	}
	else {
		oxigenio = 100;
	}
}

bool Sala::addUnidade(Unidade * unidade) {
	if (unidade == nullptr) {
		return false;
	}

	unidades.push_back(unidade);
	return true;
}