//#include<iostream>
//using namespace std;
//////Napišite program koji će omogućiti kreiranje matrice 3x3 cijelih brojeva, te uz pomoć rekurzivnih
//////funkcija omogućiti:
//////· unos elemenata,
//////· ispis elemenata,
//////· izračunati sumu svih elemenata matrice,
//////· sumu pozitivnih elemenata matrice,
//////· sumu elemenata matrice s parnim indeksima.
//const int vel = 3;
////----------------------------------------------------
//int unos(int**& matrica, int red, int kolona)
//{
//	if (red >= vel)
//		return 1;
//	if (kolona >= vel)
//		return 0;
//
//	cout << "Unesite elemente [" << red << "][" << kolona << "]:\t";
//	cin >> matrica[red][kolona];
//
//	if (unos(matrica, red, kolona + 1) == 1)
//		return 1;
//	cout << endl;
//	return unos(matrica, red + 1, 0);
//}
////-----------------------------------------------------
//int ispis(int** matrica, int red, int kolona)
//{
//	if (red >= vel)
//		return 1;
//	if (kolona >= vel)
//		return 0;
//
//	cout << matrica[red][kolona] << " ";
//	if (ispis(matrica, red, kolona + 1) == 1)
//		return 1;
//
//	cout << endl;
//	return ispis(matrica, red + 1, 0);
//}
////-----------------------------------------------------
//int sumaS = 0;
//int sumaSvih(int** matrica, int red, int kolona)
//{
//	if (red < 0)
//		return 1;
//	if (kolona < 0)
//		return 0;
//
//	if (sumaSvih(matrica, red, kolona - 1) == 1)
//	{
//		sumaS += matrica[red][kolona];
//		return 1;
//	}
//
//	sumaS += matrica[red][kolona];
//	return sumaSvih(matrica, red - 1, 2);
//}
////-------------------------------------------------------------
//int sumaP = 0;
//int sumaPozitivnih(int** matrica, int red, int kolona)
//{
//	if (red < 0)
//		return 1;
//	if (kolona < 0)
//		return 0;
//
//	if (sumaPozitivnih(matrica, red, kolona - 1) == 1)
//	{
//		if (matrica[red][kolona] > 0)
//		{
//			sumaP += matrica[red][kolona];
//			return 1;
//		}
//	}
//	if (matrica[red][kolona] > 0)
//		sumaP += matrica[red][kolona];
//
//	return sumaPozitivnih(matrica, red - 1, 2);
//}
////----------------------------------------------------------------
//int sumaPIndeksa = 0;
//int sumaParnihIndeksa(int** matrica, int red, int kolona)
//{
//	if (red < 0)
//		return 1;
//	if (kolona < 0)
//		return 0;
//
//	if (sumaParnihIndeksa(matrica, red, kolona - 1) == 1)
//	{
//		if ((red % 2 == 0) && (kolona % 2 == 0))
//		{
//			sumaPIndeksa += matrica[red][kolona];
//			return 1;
//		}
//	}
//	if ((red % 2 == 0) && (kolona % 2 == 0))
//	{
//		sumaPIndeksa += matrica[red][kolona];
//	}
//
//	return sumaParnihIndeksa(matrica, red - 1, 2);
//}
////------------------------------------------------------------------
//void main()
//{
//	int red = 3, kolona = 3;
//	int** matrica = new int* [red];
//	for (int i = 0; i < red; i++)
//	{
//		matrica[i] = new int[kolona];
//	}
//	//--------------------------------
//	unos(matrica, 0, 0);
//	/*system("cls");*/
//	ispis(matrica, 0, 0);
//	//--------------------------------
//	sumaSvih(matrica, red - 1, kolona - 1);
//	cout << "Suma svih elemenata matrice je: " << sumaS << endl;
//	//----------------------------------------------------------
//	sumaPozitivnih(matrica, red - 1, kolona - 1);
//	cout << "Suma pozitivnih elemenata matrice je: " << sumaP << endl;
//	//----------------------------------------------------------------
//	sumaParnihIndeksa(matrica, red - 1, kolona - 1);
//	cout << "Suma elemenata sa parnim indeksom iznosi: " << sumaPIndeksa << endl;
//	//--------------------------------------------------------------------------
//	delete[]matrica;
//	matrica = nullptr;
//}