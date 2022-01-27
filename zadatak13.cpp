#include<iostream>
using namespace std;

struct Nezaposleni
{
	char ime[25];
	char prezime[25];
	char spol[10];
	int GodinaRodjenja;
	float GodineStaza;

	void unos()
	{
		
		cin.ignore();
		cout << "Unesite ime: "; cin.getline(ime, 25);
		cout << "Unesite prezime: "; cin.getline(prezime, 25);
		
		cout << "Spol je: "; cin.getline(spol, 10);
		cout << "Unesite godinu rodjenja: "; cin >> GodinaRodjenja;
		cout << "Unesite godine staza: "; cin >> GodineStaza;
	}
	void ispis()
	{
		cout << "ime: " << ime << endl;
		cout << "prezime: " << prezime << endl;
		cout << "Spol je: " << spol << endl;
		cout << "Godina rodjenja: " << GodinaRodjenja << endl;
		cout << "Godine staza: " << GodineStaza << endl;
	}
};

int staz(Nezaposleni nezaposleni[], int size,int STAZ)
{
	int brojac = 0;
	for (int i = 0; i < size; i++)
	{
		if (nezaposleni[i].GodineStaza > STAZ)
			brojac++;
	}
	return brojac;

}
void zenske(Nezaposleni nezaposleni[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (nezaposleni[i].spol[0] == 'z')
			nezaposleni[i].ispis();
			//cout << nezaposleni[i].ime << " " << nezaposleni[i].prezime << endl;
	}
}
int main()
{
	Nezaposleni nezaposleni[5];
	float Staz;
	cout << "Unesite godine staza: "; cin >> Staz;
	

	for (int i = 0; i < 5; i++)
	{
		nezaposleni[i].unos();
	}
	for (int i = 0; i < 5; i++)
	{
		nezaposleni[i].ispis();
	}

	cout << "Broj nezaposlenih koji imaju veci broj godina nego sto je uneseno: " << staz(nezaposleni, 5, Staz) << endl;
	cout << "Zenske osobe medju nezaposlenim su: " << endl;
	zenske(nezaposleni, 5);


}