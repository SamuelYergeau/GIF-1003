/*
 * cube.cpp
 *
 *  Created on: 2014-01-17
 *      Author: theud1
 */

#include <iostream>
using namespace std;

int main()
{


	/* Traduction de l'algorithme en C++
	 * La d�claration des variables pr�sentes dans votre algorithme doit �tre faite le plus pr�s de leur utilisation
	 * ...� compl�ter...*/
	int n;
	cin >> n;
	// A: n est un nombre entier > 0
	int cube = n^3;
	int s = 0;
	int p = 1;
	int k = 1;

	while (s != cube){
		if (s < cube){
			s += (2 * p - 1);
			p++;
		}
	}

	int premier = 2 * k - 1; 	// Le premier terme de la série
	int dernier = 2 * (p - 1);	// Le dernier terme de la série

	cout << cube << " = ";
	k = premier;

	while (k < dernier){
		cout << k << " + ";
		k += 2;
	}

	cout << dernier << endl;
	// A: affichage du développement du cube de n en une série de nombres inpairs consécutifs
	return 0;
}

