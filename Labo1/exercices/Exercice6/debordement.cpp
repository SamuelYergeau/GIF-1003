/*
 * debordement.cpp
 *
 *  Created on: 2020-01-17
 *      Author: etudiant
 */
#include <iostream>
using namespace std;
int main(void){
	int x = 100;
	int y = 6;
	int i = 0;
	int puissance = x;
	while (i < y-1){
		puissance = puissance * x;
		i++;
	}
	return 0;
}



