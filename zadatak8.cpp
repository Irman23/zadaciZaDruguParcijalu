#include<iostream>
using namespace std;
// Napišite program u kojem ćete deklarirati matricu 3x3 te definirati REKURZIVNE funkcije za :
// · unos elemenata matrice, x
// · ispis elemenata matrice, x
// · sumu glavne dijagonale, x
// · sumu sporedne dijagonale, x
// · ponalaženje najvećeg elementa u retku,
// · pronalaženje najvećeg elementa u koloni.

const int vel = 3;
int unos(int**& matrica, int red, int kolona)
{
	if (red >= vel)
		return 1;
	if (kolona >= vel)
		return 0;

	cout << "Unesite element[" << red << "][" << kolona << "]:\t";
	cin >> matrica[red][kolona];

	if (unos(matrica, red, kolona + 1) == 1)
		return 1;
	cout << endl;
	return unos(matrica, red + 1, 0);
}
---------------------------------------------------
int ispis(int** matrica, int red, int kolona)
{
	if (red >= vel)
		return 1;
	if (kolona >= vel)
		return 0;
	cout << matrica[red][kolona] << " ";

	if (ispis(matrica, red, kolona + 1) == 1)
		return 1;
	cout << endl;
	return ispis(matrica, red + 1, 0);
}
---------------------------------------------------
int sumaGD = 0;
int sumaGlavneDijagonale(int** matrica, int red, int kolona)
{
	if (red < 0)
		return 1;
	if (kolona < 0)
		return 0;

	if (sumaGlavneDijagonale(matrica, red, kolona - 1) == 1)
	{
		if (red == kolona)
			sumaGD += matrica[red][kolona];
		return 1;
	}
	if (red == kolona)
		sumaGD += matrica[red][kolona];

	return sumaGlavneDijagonale(matrica, red - 1, 2);
}
---------------------------------------------------------------------
int sumaSD = 0;
int sumaSporedneDijagonale(int** matrica, int red, int kolona)
{
	if (red < 0)
		return 1;
	if (kolona < 0)
		return 0;
	if (sumaSporedneDijagonale(matrica, red, kolona - 1) == 1)
	{
		if (red + kolona == (vel - 1))
			sumaSD += matrica[red][kolona];
		return 1;
	}
	if (red + kolona == (vel - 1))
		sumaSD += matrica[red][kolona];

	return sumaSporedneDijagonale(matrica, red - 1, 2);
}
------------------------------------------------------------------------------
int najveciR = 0;
int najveciuRedu(int** matrica, int red, int kolona, int r)
{
	if (red < 0)
		return 1;
	if (kolona < 0)
		return 0;

	if (najveciuRedu(matrica, red, kolona - 1, r) == 1)
	{
		if (red == r && matrica[red][kolona] > najveciR)
		{
			najveciR = matrica[red][kolona];
			return 1;
		}
	}
	if (red == r && matrica[red][kolona] > najveciR)
		najveciR = matrica[red][kolona];

	return najveciuRedu(matrica, red - 1, 2, r);
}
-------------------------------------------------------------------------------------
int najveciK = 0;
int najveciuKoloni(int** matrica, int red, int kolona, int k)
{
	if (red < 0)
		return 1;
	if (kolona < 0)
		return 0;
	if (najveciuKoloni(matrica, red, kolona - 1, k) == 1)
	{
		if (kolona == k && matrica[red][kolona] > najveciK)
		{
			najveciK = matrica[red][kolona];
			return 1;
		}
	}
	if (kolona == k && matrica[red][kolona] > najveciK)
		najveciK = matrica[red][kolona];

	return najveciuKoloni(matrica, red - 1, 2, k);
}
----------------------------------------------------------------------------------------------

void main()
{
	int red = 3, kolona = 3;
	int** matrica = new int* [vel];
	-----------------------------
	for (int i = 0; i < red; i++)
	{
		matrica[i] = new int[kolona];
	}
	------------------------------
	unos(matrica, 0, 0);
	ispis(matrica, 0, 0);
	------------------------------
	sumaGlavneDijagonale(matrica, red - 1, kolona - 1);
	cout << "Suma glavne dijagonale je: " << sumaGD << endl;
	sumaSporedneDijagonale(matrica, red - 1, kolona - 1);
	cout << "Suma sporedne dijagonale je: " << sumaSD << endl;
	------------------------------------------------------------------------------------------
	int redi = 0;
	do
	{
		cout << "Izaberite red: ";
		cin >> redi;
	} while (redi < 0 || redi>3);
	najveciuRedu(matrica, red - 1, kolona - 1, redi - 1);
	cout << "Najveci element u izabranom redu je: " << najveciR << endl;
	-------------------------------------------------------------------------------------------
	int kolonai = 0;
	do
	{
		cout << "Izaberite kolonu: ";
		cin >> kolonai;
	} while (kolonai < 0 || kolonai>3);
	najveciuKoloni(matrica, red - 1, kolona - 1, kolonai - 1);
	cout << "Najveci element u izabranoj koloni je: " << najveciK << endl;
	--------------------------------------------------------------------------------------------
	delete[]matrica;
	matrica=nullptr;


}
