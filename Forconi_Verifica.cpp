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
<<<<<<< HEAD
		contatore++; //incremento del contatore per la stampa
=======
		contatore++; //incremento del contatore
>>>>>>> FIX_BUG
	}
	system("pause");
	return 0;  //questa è la fine del programma e basta
}

