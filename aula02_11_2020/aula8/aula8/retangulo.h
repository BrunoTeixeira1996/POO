#ifndef RETANGULO_H
#define RETANGULO_H
#include "ponto.h"


class Retangulo
{
	Ponto cse; // canto superior esquerdo (agrega��o)
	double altura;
	double largura;
public:
	Retangulo(Ponto canto, double a, double l); //Ponto canto est� a ser passado por c�pia  (agrega��o)
	string getAsString()const;
	Ponto getCSE() const { return cse; }
	double getAltura() const { return altura; }
	double getLargura() const { return largura; }
	double getArea() const { return altura*largura; }
	bool intersecta(const Retangulo &r)const { return false; } // falta implementar corretamente
	
	
};

#endif
