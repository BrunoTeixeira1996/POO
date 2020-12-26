#ifndef AVISO_H
#define AVISO_H
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include "prego.h"

/*Precisamos de nos referir ao Prego mas sem fazer uma c�pia para a nossa class*/

class Aviso
{
	string texto;
	//Prego &a;
	Prego *a;

	/*Prego const *a  (o ponteiro seria constante (n�o muda)) */

	/*const Prego *a  dizemos que o ponteiro aponta sempre para Ponteiros constantes
	s� podiamos invocar os m�todos constantes do Prego*/

	/*const Prego const * a (o ponteiro n�o muda e o Prego tambem n�o)*/

	/*Referencia*/
	/*Prego &a que � uma refer�ncia para um Prego*/
	/*const Prego &a que � uma refer�ncia para um prego constante*/

public:
	//Aviso(string t, Prego &p);
	Aviso(string t, Prego *p);
	~Aviso();

	string getAsString()const;
	string getLocal()const;
};

#endif

