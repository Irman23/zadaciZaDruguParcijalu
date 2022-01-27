#include<iostream>
using namespace std;
Napišite program u kojem ćete upotrijebiti rekurzivnu funkciju čiji je zadatak računanje sume kvadrata od n do m(n i m su prirodni brojevi).

int sumaKvadrata(int n,int m)
{
	if (n == m)
		return m*m;
	else
		return pow((n,m),2) + sumaKvadrata(n, m - 1);
}
void main()
{
	int broj, suma, broj2;
	cout << "Unesite broj: "; cin >> broj;
	cout << "Unesite drugi broj: "; cin >> broj2;
	suma = sumaKvadrata(broj, broj2);
	cout << "Suma kvadrata iznosi: " << suma << endl;
}

 
	
	
