#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Mapa
{
public:
	void carregar(string nomeArq);
	void reconhecer();
	void exibirMatriz();
	void exibirElementos();



private:
	int nLinhas, nColunas;
	char** matriz;

};

