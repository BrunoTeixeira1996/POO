#include <iostream>
#include <random>
#include <ctime>
#include "Aquario.h"
#include "Peixe.h"
#include "Piranha.h"

using namespace std;

double getRealUniform() {
	default_random_engine e(time(0));
	uniform_real_distribution<double> d(0.0, 1.0);

	return d(e);
}

int main() {

	Peixe* p1 = new Piranha("Nemo", "laranja");
	Peixe* p2 = new Peixe("Dory");
	Peixe* p3 = new Peixe("Bolhas", "amarelo");
	Peixe* p4 = new Piranha("Bruno");

	Aquario *a = new Aquario();

	a->addPeixe(p1);
	a->addPeixe(p2);
	a->addPeixe(p3);
	a->addPeixe(p4);

	cout << *a << endl;
	

	delete a;


	/*Aquario a;
	Peixe *p1 = new Peixe("Nemo","laranja");
	Peixe *p2 = new Peixe("Dory");
	Peixe* p3 = new Peixe("Bolhas", "amarelo");

	a.addPeixe(p1);
	a.addPeixe(p2);
	a.addPeixe(p3);*/

	//p1->come(50);
	//p2->come(50);
	//p3->come(50);

	/*cout << a << endl;
	
	a.alimentaPeixes(50);

	cout << a << endl;*/
}