//Adivinha a soma de 5 n�meros
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	cout << "\nDigite o numero de ate 4 algarismos: " ;
	int x,r;
	cin >> x;
	r = 19998 + x;
	cout << "\nO resultado da soma e: " << r;
	cout << "\nDigite o segundo n�mero: ";
	cin >> x;
	cout << "\nO meu numero e: " << (9999 - x);
	cout << "\nDigite o quarto numero: ";
	cin >> x;
	cout << "\nO meu numero e: "<< (9999 - x) <<endl;
	
	return 0;
}