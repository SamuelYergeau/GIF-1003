/*
 * Conversion.cpp
 *
 *  Created on: 2020-01-17
 *      Author: etudiant
 */
#include <iostream>
using namespace std;
int main(void){
	int n = 5;
	int p = 9;
	int q;
	float x;
	q = n < p;
	cout << "n < p: " << q << endl;
	q = n == p;
	cout << "n == p: " << q << endl;
	q = n % n + p > n;
	cout << "n % n + p > n: " << q << endl;
	x = p / n;
	cout << "p / n: " << x<< endl;
	x = (float) p / n;
	cout << "(float) p / n: " << x << endl;
	x = (p + 0.5) / n;
	cout << "(p + 0.5) / n: " << x << endl;
	x = (int)(p + 0.5) / n;
	cout << "(int)(p + 0.5) / n: " << x << endl;
	q = n * (p > n ? n : p);
	cout << "n * (p > n ? n : p): " << q << endl;
	q = n * (p < n ? n : p);
	cout << "n * (p > n ? n : p): " << q;
}



