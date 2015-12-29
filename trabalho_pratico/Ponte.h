#ifndef PONTE_H
#define PONTE_H

#include "Sala.h"

class Ponte :public Sala {

public:
	Ponte(Nave *nave, string n = "Ponte");
};

#endif