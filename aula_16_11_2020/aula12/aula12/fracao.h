#ifndef FRACAO_H
#define FRACAO_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Fracao
{
	int numerador;
	int denominador;
public:
	Fracao(int nu = 0, int den = 1);


	int getNumerador()const { return numerador; }
	int getDenominador()const { return denominador; }
	string getAsstring()const;

	void setNumerador(int n) {
		numerador = n;
	}
	bool setDenominador(int d);

	Fracao operator*(const Fracao& a); // fun��o membro (esta � a escolhida caso haja uma fun��o nao membro)
	Fracao &operator*=(const Fracao& a);
	operator int()const { return numerador / denominador; }

};

Fracao operator*(const Fracao& a, const Fracao& b); // fun��o nao membro

#endif


