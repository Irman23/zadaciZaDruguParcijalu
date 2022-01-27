#include<iostream>
using namespace std;
//Napišite program koji će omogućiti kreiranje niza od 7 cijelih brojeva, te uz pomoć rekurzivnih
//funkcija omogućiti :
//· unos elemenata,
//· ispis elemenata,
//· izračunati sumu svih elemenata niza,
//· sumu pozitivnih elemenata niza,
//· sumu elemenata niza s parnim indeksom

int unos(int niz[], int vel)
{
	if (vel == 0)
		return 0;
	else
	{
		cout << "Unesite element niza: ";
		cin >> niz[vel - 1];
	}
	return unos(niz, vel - 1);
}
//-------------------------------------
int ispis(int niz[], int vel)
{
	if (vel == 0)
		return 0;
	else
		cout << niz[vel - 1] << " ";

	return ispis(niz, vel - 1);
}
//-------------------------------------

int sumaSvih(int niz[],int vel)
{
	if (vel == 0)
		return 0;
	else
		return niz[vel - 1] + sumaSvih(niz, vel - 1);
}
//---------------------------------------
int sumaP = 0;
int sumaPoz(int niz[], int vel)
{
	if (vel == 0)
		return 0;
	else
	{
		if (niz[vel - 1] > 0)
			sumaP += niz[vel - 1];
	}
	return sumaPoz(niz, vel - 1);
}
//----------------------------------------------
int sumaPar = 0;
int sumaParnih(int niz[], int vel)
{
	if (vel == 0)
		return 0;
	else
	{
		if ((vel - 1) % 2 == 0)
			sumaPar += niz[vel - 1];
	}
	return sumaParnih(niz, vel - 1);
}
//----------------------------------------------
void main()
{
	int niz[7];
	unos(niz, 7);
	ispis(niz, 7);
	//------------------------------
	cout << endl;
	//******************************
	cout << "Suma svih elemenata iznosi: " << sumaSvih(niz, 7) << endl;
	//-----------------------------------------------------------------
	sumaPoz(niz, 7);
	cout << "Suma pozitivnih elemenata iznosi: " << sumaP << endl;
	//-----------------------------------------------------------------
	sumaParnih(niz, 7);
	cout << "Suma svih elemenata sa parnim indeksom iznosi: " << sumaPar << endl;

}