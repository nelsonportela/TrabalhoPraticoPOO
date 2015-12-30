#ifndef ROBOT_H
#define ROBOT_H

#include "Tripulante.h"

class Robot :public Tripulante {

	string nome;
public:
	Robot(Sala *s, int p = 5, string n = "Robot");
};

#endif