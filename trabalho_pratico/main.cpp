#include <iostream>
#include <vector>

#include "consola.h"
#include "Nave.h"
//----------------------Unidades
#include "Membro.h"
#include "Robot.h"
//----------------------Caracteristicas
#include "Caracteristica.h"
#include "Operador.h"
//----------------------Salas
#include "Sala.h"
#include "Ponte.h"
#include "SuporteVida.h"
#include "ControloEscudo.h"
#include "SalaMaquinas.h"
#include "Propulsor.h"

#include "Beliches.h"

using namespace std;

void constroiNave(Consola &c) {

	c.setScreenSize(200, 200);

	//LINHAS-------------------------------------------<<
	for (int j = 0, linha = 9, crt = 203; j <= 2; j++) {
		for (int i = 10; i <= 90; i++) {
			if (i % 10 == 0 && (i / 10) % 2 != 0) {
				c.gotoxy(i, linha);
				cout << (char)crt;
			}
			else {
				cout << (char)205;
			}
		}
		linha += 30;
		crt = 202;
		j++;
	}

	for (int j = 0, linha = 19; j <= 2; j++) {
		for (int i = 10; i <= 110; i++) {
			if (i % 10 == 0 && (i / 10) % 2 != 0) {
				c.gotoxy(i, linha);
				cout << (char)206;
			}
			else {
				cout << (char)205;
			}
		}
		linha += 10;
		j++;
	}

	//COLUNAS-------------------------------------------<<
	for (int j = 0, linha = 10; j <=56; j++) {
		for (int i = 10; i <= 90; i++) {
			if (linha >= 20 && linha <=29) {
				if (i % 10 == 0 && (i / 10) % 2 != 0) {
					c.gotoxy(i+20, linha);
					cout << (char)186;
				}
			}
			else {
				if (i % 10 == 0 && (i / 10) % 2 != 0) {
					c.gotoxy(i, linha);
					cout << (char)186;
				}
			}
		}
		linha++;
		j++;
	}

	//CANTOS-------------------------------------------<<
	c.gotoxy(10, 9);
	cout << (char)201;
	c.gotoxy(90, 9);
	cout << (char)187;

	c.gotoxy(10, 19);
	cout << (char)200;
	c.gotoxy(110, 19);
	cout << (char)187;

	c.gotoxy(10, 29);
	cout << (char)201;
	c.gotoxy(110, 29);
	cout << (char)188;

	c.gotoxy(10, 39);
	cout << (char)200;
	c.gotoxy(90, 39);
	cout << (char)188;
}

void salasFixas(Consola &c) {
	c.gotoxy(11, 10);
	cout << "Propulsor";

	c.gotoxy(11, 30);
	cout << "Propulsor";

	c.gotoxy(31, 20);
	cout << "Sala Maquinas";

	c.gotoxy(51, 20);
	cout << "Suporte de Vida";

	c.gotoxy(71, 20);
	cout << "Controlo de Escudo";

	c.gotoxy(91, 20);
	cout << "Ponte";
}

void turno() {

	//Caracteristica::TrataInicioTurno();

	//Ordens, mover tripulantes entre salas caso assim se deseje.

	//Caracteristica::TrataFinalTurno();

	//Eventos, por exemplo a nave ser danificada por atravessar campo de  asteroides
}

//Defini��o de Vari�veis Est�ticas
int Sala::total = 0;
int Unidade::total = 0;

void main() {

	Consola c;

	constroiNave(c);
	salasFixas(c);

	c.gotoxy(0, 45);

//-----------------------------------------TESTES---------------------------


	Nave *nave = new Nave;

	Sala * propulsor_1 = new Propulsor(nave);
	Sala * salaMaquinas = new SalaMaquinas(nave);
	Sala * suporteVIda = new SuporteVida(nave);
	Sala * controleEscudo = new ControloEscudo(nave);
	Sala * ponte = new Ponte(nave);
	Sala * propulsor_2 = new Propulsor(nave);


	int escolha;
	int i = 0;
	int n = 0;

	while (n<3)
	{
		cout << "selecione a unidade" << endl;
		cout << "\n1: Membro da Tripulacao" << "\n2: Robot" << "\n3: Capitao" << endl;
		cout << "->";
		cin >> escolha;

		switch (escolha)
		{
		case 1: new Membro(ponte);
			i++;
			n++;
			break;
		case 2: new Robot(ponte);
			i++;
			n++;
			break;
		default:
			cout << "Nao e possivel adicionar unidade" << endl;
			i++;
			n++;
			break;
		}
	}


	//Unidade * membro_1 = new Membro(ponte);
	//Unidade * membro_2 = new Membro(ponte);
	//Unidade * membro_3 = new Membro(ponte);
	//Unidade * membro_4 = new Membro(ponte);

	//cout << membro_3->getID();

	c.getch();
}