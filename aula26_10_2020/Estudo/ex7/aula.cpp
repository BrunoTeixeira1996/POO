#include "MSG.h"

MSG &teste() {
	MSG aux('y');

	return aux;
}

int main() {

	//MSG a('a');
	MSG b;
	string enter;
	//MSG d = b;

	//MSG &c = b; //aqui n�o � criado nenhum objeto, � apenas uma refer�ncia para o b

	//MSG d = b; //aqui estamos a criar um objeto e conseguimos ver o Objeto d a ser destruido (contrutor por c�pia)

	//cout << "a variavel a: " << a.getAsString() << "\n";
	//a = b; //aqui estamos atribuir o Objeto "b" ao Objeto "a" (atribui��o)
	//cout << "a variavel a: " << a.getAsString() << "\n";


	//string enter;
	//getline(cin, enter);

	////MSG mat[2]; //aqui s�o criados 2 objetos
	////MSG mate[2] = { 'e' , 'f'}; //aqui s�o criados dois objetos com a letra "e" e letra "f"
	getline(cin, enter);

	teste();
	getline(cin, enter);
	/*cout << "a variavel a: " << a.getAsString() << "\n";
	cout << "a variavel b: " << b.getAsString() << "\n";*/



	return 0;
}