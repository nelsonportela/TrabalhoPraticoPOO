#include "Robot.h"

Robot::Robot(Sala * s, int p, string n) :Tripulante(s, p) {
	this->nome = n;
};
