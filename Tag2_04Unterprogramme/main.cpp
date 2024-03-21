#include <iostream>

#include <string>



using namespace std;

double berechneBruttoWert(double nettowert) {
    double result = nettowert * 1.19;
    return result;
}



int main() {



    double netto;
    cout << "Bitte Nettopreis eingeben: ";
    cin >> netto;
    double brutto = berechneBruttoWert(netto);
    cout << brutto << endl;
    return 0;
}
