#include <iostream>
#include "consola.h"

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

void main() {

	Consola c;

	constroiNave(c);
	salasFixas(c);

	c.gotoxy(10, 45);
	cout << "linha de escrita" << endl;

	//Nave nave;

	//for (int i = 0; i < 12; i++) {
	//	Sala *a = new Sala("cenas");
	//	nave.adicionaSala(*a);
	//}

}