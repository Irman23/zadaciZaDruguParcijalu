#include<iostream>
using namespace std;

//Napišite program u kojem ćete omogućiti deklaraciju kvadratne matrice 4x4 i provjeriti je li riječ o
//magičnom kvadratu.Upotrijebite barem jednu rekurzivnu funkciju.
//Magični kvadrat je kvadratna tablica(matrica) veličine nxn sa prirodnim brojevima od 1 do n2 kod
//koje su sume elemenata po recima, stupcima i dijagonalama jednaki.

void unos (int** matrica, int size)
{
	for (int i = 0; i < size; i++)
	{
		matrica[i] = new int[size];
		for (int j = 0; j < size; j++)
		{
			cin >> matrica[i][j];
		}
	}
}
void ispis(int** matrica, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrica[i][j] << " ";
		}
		cout << endl;
	}
}
int sumaRedova(int** matrica, int size, int R)
{
	int suma = 0;
	for (int i = 0; i < size; i++)
	{
		for (int R = 0; R < size; R++)
		{

			suma += matrica[R][i];
		}
	}
	return suma;
}
int sumaKolona(int** matrica, int size, int K)
{
	int suma = 0;
	for (int j = 0; j < size; j++)
	{
		for (int K = 0; K < size; K++)
		{
			suma += matrica[j][K];
		}
	}
	return suma;
}
int glavnaD(int** matrica, int size)
{
	int suma = 0;
	for (int i = 0; i < size; i++)
	{
		suma += matrica[i][i];
	}
	return suma;
}
int sporednaD(int** matrica, int size)
{
	int suma = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((i + j) == (size - 1))
			{
				suma += matrica[i][j];
			}
		}
	}
	return suma;
}
void main()
{
	int size = 4;
	int** matrica = new int*[size];

	unos(matrica,size);
	system("cls");
	ispis(matrica,size);
	cout << "Suma redova iznosi: " << sumaRedova(matrica, size, size) << endl;
	cout << "Suma kolona iznosi: " << sumaKolona(matrica, size, size) << endl;
	cout << "Suma glavne dijagonale iznosi: " << glavnaD(matrica, size) << endl;
	cout << "Suma glavne dijagonale iznosi: " << sporednaD(matrica, size) << endl;
	if (sumaRedova(matrica, size, size) == sumaKolona(matrica, size, size))
		cout << "Suma kolona je jednaka sumi redova." << endl;

	if (glavnaD(matrica, size) == sporednaD(matrica, size))
		//cout << "Suma sporedne dijagonale je jednaka glavnoj." << endl;




}