#include "Mapa.h"

void Mapa::carregar(string nomeArq)
{
	ifstream arquivo;

	arquivo.open(nomeArq); 

	if (arquivo.is_open())
	{
		arquivo >> nLinhas >> nColunas;

		matriz = new char* [nColunas];

		for (int x = 0; x < nColunas; x++)
			matriz[x] = new char[nLinhas];

		for (int y = 0; y < nLinhas; y++)
			for (int x = 0; x < nColunas; x++)
				matriz[x][y] = arquivo.get();




		arquivo.close();
	}



}

void Mapa::exibirMatriz()
{
	for (int y = 0; y < nLinhas; y++)
	{
		for (int x = 0; x < nColunas; x++)
			cout << matriz[x][y];
	}
	
	cout << endl << endl;
}
