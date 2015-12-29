#include "Tripulante.h"
#include "Tripulacao.h"
 
Tripulante::Tripulante(Sala *sala, int p):Unidade(sala, p) {
	tipo = "Tripulante";
}
