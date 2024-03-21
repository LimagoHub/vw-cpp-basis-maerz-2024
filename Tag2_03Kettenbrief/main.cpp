#include <iostream>
using namespace std;
int main() {
    unsigned long long weltbevoelkerung= 8'000'000'000;
    unsigned long long anzahlSpieler=1;
    unsigned char anzahlDerNachfolger=6;
    size_t anzahlDerRunden=0;

    while (anzahlSpieler< weltbevoelkerung) {
        anzahlDerRunden ++;
        anzahlSpieler *= anzahlDerNachfolger;
    }

    cout << "Anzahl der Runden ist " << anzahlDerRunden << endl;
    cout << "Anzahl der Spieler ist " << anzahlSpieler << endl;
    return 0;
}
