#include <iostream>
#include <string>
using namespace std;
int main(void){
	int nombre;
	string phrase;
	cout << "Entrez un nombre" << endl;
	cin >> nombre;
	cout << "Entrez une phrase comprenant des espaces" << endl;
	cin.ignore();
	char buffer[256];
	cin.getline(buffer,256);
	cout << buffer << endl;
	return 0;
}



