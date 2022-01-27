#include<iostream>
using namespace std;

struct datum
{
	int d, m, g;
	bool tacan(int d, int m, int g)
	{
		if (g > 2002 || g < 1960)
			return false;
		if (g % 4 == 0 && m == 2)
			if (d > 29 || d < 1)
				return false;
		if (g % 4 != 0 && m == 2)
			if (d > 28 || d < 1)
				return false;
		if (m < 1 || m>12)
			return false;
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			if (d > 31 || d < 1)
				return false;
		}
		else
			if (d > 30 || d < 1)
				return false;

		return true;
		

	}
	void unosD()
	{
		cout << "Unesite dan, mjesec i godinu: ";
		cin >> d >> m >> g;
		/*while (!tacan(d, m, g))
		{
			cout << "Unesite dan, mjesec i godinu: ";
			cin >> d >> m >> g;
		}
		*/
	}
};
struct student
{
	int IB;
	char ImeiPrezime[30];
	datum rodjenja;

	void ISPIS()
	{
		cout << "Redni broj: " << IB << endl;
		cout << "Ime i prezime: " << ImeiPrezime << endl;
		cout << "Datum rodjenja: " << rodjenja.d<<"."<<rodjenja.m <<"."<<rodjenja.g<< endl;
	}
};
void UNOS(student* studenti)
{
	cout << "Unesite IB: "; cin >> studenti->IB;
	cin.ignore();
	cout << "Unesite ime i prezime: "; cin.getline(studenti->ImeiPrezime,30);
	cout << "Unesite datum rodjenja"; studenti->rodjenja.unosD();


}

int provjera(student* studenti, int size)
{
	int brojac = 0;
	for (int i = 0; i < size; i++)
	{
		if (studenti->rodjenja.tacan(studenti->rodjenja.d, studenti->rodjenja.m, studenti->rodjenja.g) == false)
			brojac++;
		studenti++;
	}
	return brojac;
}
student* prvi(student* studenti, int size)
{
	for (int i = 0; i < size; i++)
	{
		if ((studenti+i)->rodjenja.tacan((studenti+i)->rodjenja.d, (studenti+i)->rodjenja.m, (studenti+i)->rodjenja.g) == false)
			return (studenti + i);
	}
}
void main()
{
	int size = 5;
	student* studenti = new student[size];
	for (int i = 0; i < 5; i++)
	{
		UNOS(studenti+i);
	}
	for (int i = 0; i < 5; i++)
	{
		(studenti+i)->ISPIS();
	}
	
	cout << "Pogresan unos datuma: " << (provjera(studenti,size))<< " ucenik/a" << endl;

	cout << "Prvi sa pogresnim unosom datuma je: " << endl;
	prvi(studenti, size)->ISPIS();

	


	delete[]studenti;
	studenti = nullptr;


}