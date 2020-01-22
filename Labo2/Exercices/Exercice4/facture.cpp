/*
 * facture.cpp
 *
 *  Created on: 2020-01-22
 *      Author: etudiant
 */
#include <iostream>
#include <string>
using namespace std;

int main(void){
	int client = 1;
	int kwh = 0;
	int sommeclient = 0;
	double sommefacture = 0;

	while (client != 0){
		cout << "entrer une valeur" << endl;
		cin >> client >> kwh;
		//cout << "entré: " << client << " , " << kwh << endl;
		if (client == 0){
			cout << "nombre total de clients: " << sommeclient << endl;
			cout << "comme total des factures: " << sommefacture << endl;
			return 0;
		}
		sommeclient++;
		sommefacture += 25;
		for (int i = 1; i <= kwh; i++){
			if (i <= 100){
				sommefacture += 0.5;
			}
			else if (i <= 250){
				sommefacture += 0.35;
			}
			else{
				sommefacture += 0.2;
			}
		}
		//cout << "somme: " << sommefacture << endl;
	}
}



