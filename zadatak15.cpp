#include<iostream>
using namespace std;

void main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int* niz[5];
	niz[0] = &a;
	niz[1] = &b;
	niz[2] = &c;
	cout << *niz[0] << endl;
	cout << *niz[1] << endl;
	cout << *niz[2] << endl;
	
}