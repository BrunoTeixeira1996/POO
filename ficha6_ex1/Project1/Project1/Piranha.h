#ifndef PIRANHA_H
#define PIRANHA_H
#include "Peixe.h"
#include <sstream>
#include <iostream>


class Piranha : public Peixe
{
	size_t comprimento; // size_t é usado normalmente para tamanhos
public:
	Piranha(string es, string co = "branco", size_t cp = 12) : 
		Peixe(es + "Piranha", co), comprimento(cp){}

	size_t getComprimento()const { return comprimento; }
};

ostream& operator<<(ostream& os, const Piranha& p);


#endif

