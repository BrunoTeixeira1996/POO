#include <string>
#include <iostream>
#include <sstream>
#include "msg.h"
using namespace std;

MSG &teste() {
	MSG aux('y');

	return aux;
}


int main() {

	MSG a('a');
	MSG b;
	//MSG &c = b; // aqui nao � construido nada
	MSG d = b;
	string enter;

	

	//cout << "variavel b: " << b.getAsString() << "\n";
	
	//MSG &c = b; // o c nao � um objeto, o c refere-se ao objeto b

	//MSG d = b; // inicializa��o (construtor por c�pia) quando � criado por c�pia nao vemos a sua inicializa��o mas vemos a sua destrui��o

	//string enter;
	//getline(cin, enter);

	//cout << "variavel a: " << a.getAsString() << "\n";
	//a = b; // atribui��o
	//cout << "variavel a: " << a.getAsString() << "\n";

	//getline(cin, enter);

	//MSG mat[2] = {'e','f'}; // estamos a indicar a letra inicial de cada objeto

	getline(cin, enter);
	teste();
	getline(cin, enter);

	return 0;
}