#include <iostream>
#include "Mapa.h"

using namespace std;

int main()
{
	Mapa mapa;
	string nome;

	nome = "mapa.txt";

	mapa.carregar(nome);
	mapa.exibirMatriz();


	system("pause");
	return 0;
}