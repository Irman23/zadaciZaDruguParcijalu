#include<iostream>
using namespace std;
//Kreirajte strukturu kompleksni broj(nadam se da znate iz matematike sta je kompleksni broj).
//Kreirajte funkcije za sve računske operacije nad kompleksnim brojevima(zbrajanje, oduzimanje,
//	množenje i dijeljenje).Za svaku od operacija kreirajte zasebnu funkciju.
//	Vaš program treba omogućiti unos dva kompleksna broja i primjenu svih navedenih funkcija, kako i
//	ispis vrijednosti koje funkcije računaju

//r*r2+i*i2/r2^2 + i2^2
//i*r2-r*i2/r2^2 + i2^2

struct Kompleksni
{
	float realan;
	float imaginaran;

	void unos()
	{
		cout << "Unesite realan broj: "; cin >> realan;
		cout << "Unesite imaginaran broj: "; cin >> imaginaran;
	}
	void ispis()
	{
		cout << "Kompleksan broj: " << endl;
		if (realan == 0 && imaginaran != 0)
			cout << imaginaran << "i" << endl;
		else if (realan != 0 && imaginaran == 0)
			cout << realan << endl;
		else if (realan == 0 && imaginaran == 0)
			cout << "0" << endl;
		else
			if (imaginaran < 0)
				cout << realan << imaginaran << "i" << endl;
			else
				cout << realan << "+" << imaginaran << "i" << endl;
	}
	void zbrajanjeR(int r, int r2, int i, int i2)
	{
		float realan = r + r2;
		float imaginaran = i + i2;
		cout << "Kompleksan broj: " << endl;
		if (realan == 0 && imaginaran != 0)
			cout << imaginaran << "i" << endl;
		else if (realan != 0 && imaginaran == 0)
			cout << realan << endl;
		else if (realan == 0 && imaginaran == 0)
			cout << "0" << endl;
		else
			if (imaginaran < 0)
				cout << realan << imaginaran << "i" << endl;
			else
				cout << realan << "+" << imaginaran << "i" << endl;
	}
	void mnozenje(int r, int r2, int i, int i2)
	{
		float realan = (r*r2)-(i*i2);
		float imaginaran = (r*i2)+(r2*i);
		cout << "Rezultat mnozenja je: " << endl;
		if (realan == 0 && imaginaran != 0)
			cout << imaginaran << "i" << endl;
		else if (realan != 0 && imaginaran == 0)
			cout << realan << endl;
		else if (realan == 0 && imaginaran == 0)
			cout << "0" << endl;
		else
			if (imaginaran < 0)
				cout << realan << imaginaran << "i" << endl;
			else
				cout << realan << "+" << imaginaran << "i" << endl;
	}

};

void main()
{

	Kompleksni kompleksni;
	Kompleksni kompleksni2;

	kompleksni.unos();
	kompleksni2.unos();
	kompleksni.ispis();
	kompleksni.zbrajanjeR(kompleksni.realan,kompleksni2.realan,kompleksni.imaginaran,kompleksni2.imaginaran);
	kompleksni.mnozenje(kompleksni.realan, kompleksni2.realan, kompleksni.imaginaran, kompleksni2.imaginaran);
}