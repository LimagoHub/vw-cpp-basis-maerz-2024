#include <iostream>
using namespace std;
int main() {

    int zufallszahl = 623;
    int versuch;

    do {
        cout << "Bitte geben Sie Ihren Versuch ein: ";
        cin >> versuch;

        if(versuch > zufallszahl) {
            cout << "Ihr Versuch ist zu gross" << endl;
        }

        if(versuch < zufallszahl) {
            cout << "Ihr Versuch ist zu klein" << endl;
        }

    } while(zufallszahl != versuch);
    cout << "Sie haben die Zahl geraten" << endl;

    return 0;
}
