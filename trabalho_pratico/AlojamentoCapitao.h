#ifndef ALOJAMENTOCAPITAO_H
#define ALOJAMENTOCAPITAO_H

#include "Sala.h"

class AlojamentoCapitao :public Sala {

public:
	AlojamentoCapitao(Nave *nave, string n = "Alojamentos do Capitao");
};

#endif