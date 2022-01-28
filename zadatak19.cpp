#include<iostream>
using namespace std;

//Napišite program u kojem ćete kreirati niz od 5 studenata.
//Kreirajte funkcije :
//· za unos obilježja studenta – neka funkcija prima pokazivač na student;
//· za ispis obilježja studenta – neka funkcija prima pokazivač na student;
//· za validacija unesenog datuma rođenja – funkcija prima pokazivač na datum a vraća true ako
//je datum validan(npr. 2.2.2002.) ili vraća false ako datum nije validan(npr. 17.23.100000.);
//· za prebrojavanje studenata čiji datum rođenja nije validan – funkcija prima pokazivač na
//student;
//· pronalaženje prvog studenta(u nizu) čiji datum rođenja nije validan; funkcija prima i vraća
//pokazivač na student;
//· pozvati sve prethodne funkcije preko pokazivača;

struct datum
{
	int d, m, g;
	void unosD()
	{
		cin >> d >> m >> g;
	}
	void ispisD()
	{
		if (d < 10)
			cout << 0 << ".";
		else
			cout << d << ".";
		if (m < 10)
			cout << 0 << m << ".";
		else
			cout << m << ".";
		cout << g << ".";
	}
};
//--------------------------------------------------
bool validacijaD(datum* date)
{
	if (date->g < 1940 || date->g>2002)
		return false;
	if (date->g % 4 == 0 && date->m == 2)
		if (date->d < 1 || date->d>29)
			return false;
	if (date->g % 4 != 0 && date->m == 2)
		if (date->d < 1 || date->d>28)
			return false;
	if (date->m < 1 || date->m>12)
		return false;
	if (date->m == 4 || date->m == 6 || date->m == 9 || date->m == 11)
		if (date->d < 1 || date->d>30)
			return false;
	if (date->m == 1 || date->m == 3 || date->m == 5 || date->m == 7 || date->m == 8 || date->m == 10 || date->m == 12)
		if (date->d < 1 || date->d>31)
			return false;
	return true;
}
//--------------------------------------------------
struct Student
{
	int IB;
	char ImeiPrezime[30];
	datum rodjenja;
	datum* datumptr = &rodjenja;
};
//--------------------------------------------------
void unosS(Student* student)
{
	cout << "Unesite IB studenta: ";
	cin >> student->IB;
	cin.ignore();
	cout << "Unesite ime i prezime studenta: ";
	cin.getline(student->ImeiPrezime, 30);
	cout << "Unesite datum rodjenja studenta: ";
	student->rodjenja.unosD();
}
void ispisS(Student* student)
{
	cout << "IB: " << student->IB << endl;
	cout << "Ime i prezime: " << student->ImeiPrezime << endl;
	cout << "Datum rodjenja: ";
	student->rodjenja.ispisD();
	cout << endl;

}
//--------------------------------------------------
int prebrojavanje(Student* student, int vel)
{
	int brojac = 0;
	for (int i = 0; i < vel; i++)
	{
		if (!validacijaD((student + i)->datumptr))
			brojac++;
	}
	return brojac;
}
//---------------------------------------------------
Student* pronalazenje(Student* student, int vel)
{
	for (int i = 0; i < vel; i++)
	{
		if (!validacijaD((student + i)->datumptr))
			return student + i;
	}
	return nullptr;
}
void main()
{
	Student niz[5];
	for (int i = 0; i < 5; i++)
	{
		unosS(niz + i);
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		ispisS(niz + i);
	}
	cout << endl;
	//----------------------------------------------------------------------------------------------
	if (pronalazenje(niz, 5) == nullptr)
		cout << "Svi studenti imaju validan datum rodjenja." << endl;
	else
	{
		cout << "Broj studenata sa nevalidnim datumom rodjenja: " << prebrojavanje(niz, 5) << endl;
		cout << endl;
		cout << "Prvi student sa nevalidnim datumom rodjenja: " << pronalazenje(niz, 5)->ImeiPrezime << endl;
	}

}