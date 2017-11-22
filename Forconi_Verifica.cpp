// Verifica_Forconi.cpp : definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int contatore = 0;
	for (int i = 0; i<10; i++) {
		cout << contatore;
		contatore++; //incremento del contatore per la stampa
	}
	system("pause");
	return 0;  //questa è la fine del programma e basta
}

