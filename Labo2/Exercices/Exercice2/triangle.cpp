/*
 * triangle.cpp
 *
 *  Created on: 2020-01-22
 *      Author: etudiant
 */
#include <iostream>
using namespace std;

int main(void){
	// Demander à l'usager la hauteur du triangle
	cout << "combien de lignes ?" << endl;
	int l;
	cin >> l;

	for (int i = 1; i <= l; i++){
		int j;
		for(j = 0; j <= (l - i); j++){
			cout << " ";
		}
		for(j = 0; j < ((2 * i) - 1); j++){
			cout << "*";
		}
		for(j = 0; j <= (l - i); j++){
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}


