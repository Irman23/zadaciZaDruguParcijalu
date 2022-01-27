//#include<iostream>
//using namespace std;
////Napišite program koji će omogućiti unos rednog broja, prezimena i imena za 3 učenika, te broj
////opravdanih i neopravdanih sati.Ispisati redni broj, ime i prezime, te broj opravdanih i neopravdanih
////sati za svakog učenika.Izračunati i ispisati ukupan broj opravdanih i neopravdanih sati(za sve
////učenike), te ime i prezime učenika s najmanjim brojem neopravdanih i ime i prezime učenika s
//////najvećim brojem opravdanih sati.Koristite funkcije.Pokušajte kreirati niz objekata ucenik.
//
//struct Ucenik
//{
//	int RedniBroj;
//	char Ime[25];
//	char Prezime[25];
//	int Opravdani;
//	int Neopravdani;
//
//	void unos()
//	{
//		cout << "Unesite redni broj: "; cin >> this->RedniBroj;
//		cin.ignore();
//		cout << "Unesite ime: "; cin.getline(this->Ime,25);
//		cout << "Unesite prezime: "; cin.getline(this->Prezime, 25);
//		cout << "Unesite opravdane: "; cin >> Opravdani;
//		cout << "Unesite neopravdane: "; cin >> Neopravdani;
//	}
//	void ispis()
//	{
//		cout << "Redni broj: " << RedniBroj << endl;
//		cout << "Ime: " << Ime << endl;
//		cout << "Prezime: " << Prezime << endl;
//		cout << "Opravdani " << Opravdani << endl;
//		cout << "Neopravdani " << Neopravdani << endl;
//	}
//};
//int brojOpravdanih(Ucenik ucenici[], int size)
//{
//	int suma = 0;
//	for (int i = 0; i < size; i++)
//	{
//		suma += ucenici[i].Opravdani;
//	}
//	return suma;
//}
//int brojNeopravdanih(Ucenik ucenici[], int size)
//{
//	int suma = 0;
//	for (int i = 0; i < size; i++)
//	{
//		suma += ucenici[i].Neopravdani;
//	}
//	return suma;
//}
//Ucenik najveciOpravdani(Ucenik ucenici[], int size)
//{
//	int max = 0;
//	int indeks;
//	for (int i = 0; i < size; i++)
//	{
//		if (max < ucenici[i].Opravdani)
//		{
//			max = ucenici[i].Opravdani;
//			indeks = i;
//		}
//	}
//	return ucenici[indeks];
//}
//Ucenik najmanjiNeopravdani(Ucenik ucenici[], int size)
//{
//	int min = INT_MAX;
//	int indeks;
//	for (int i = 0; i < size; i++)
//	{
//		if (min > ucenici[i].Neopravdani)
//		{
//			min= ucenici[i].Neopravdani;
//			indeks = i;
//		}
//	}
//	return ucenici[indeks];
//}
//void main()
//{
//	Ucenik ucenici[3];
//
//	for (int i = 0; i < 3; i++)
//	{
//		ucenici[i].unos();
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		ucenici[i].ispis();
//	}
//
//	cout << "Ukupan broj opravdanih iznosi: " << brojOpravdanih(ucenici, 3) << endl;
//	cout << "Ukupan broj neopravdanih iznosi: " << brojNeopravdanih(ucenici, 3) << endl;
//
//	cout << "Najveci broj opravdanih: " << najveciOpravdani(ucenici, 3).Ime << " " << najveciOpravdani(ucenici, 3).Prezime << endl;
//	cout << "Najmanji broj neopravdanih: " << najmanjiNeopravdani(ucenici, 3).Ime << " " << najmanjiNeopravdani(ucenici, 3).Prezime << endl;
//
//
//	
//	
//}