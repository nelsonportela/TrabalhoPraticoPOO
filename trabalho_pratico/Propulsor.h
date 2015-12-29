#ifndef PROPULSOR_H
#define PROPULSOR_H

#include <string>
#include "Sala.h"

class Propulsor:public Sala {

public:
	Propulsor(Nave *nave, string n = "Propulsor");
};

#endif