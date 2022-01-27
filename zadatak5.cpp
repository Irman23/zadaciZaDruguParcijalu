//#include <iostream>
//
//using namespace std;
//
//float kamata(float godine, float ulaganje, float postotak);
//
//int main() {
//    int g{};
//    float p{}, u{};
//
//    do {
//        cout << "Unesite broj godina stednje: ";
//        cin >> g;
//    } while (g < 1);
//
//    do {
//        cout << "Unesite pocetno ulaganje: ";
//        cin >> u;
//    } while (u <= 0);
//
//    do {
//        cout << "Unesite kamatu: ";
//        cin >> p;
//    } while (p <= 0);
//
//    cout << kamata(g, u,p);
//
//    return 0;
//}
//
//float kamata(float godine, float ulaganje, float postotak) {
//    ulaganje = ulaganje - ulaganje * (postotak / 100.);
//    godine--;
//
//    if (godine == 0)
//        return ulaganje;
//    else
//        return kamata(godine,ulaganje,postotak);
//
//    
//}