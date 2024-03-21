#include <iostream>
using namespace std;
int main() {

    int a;
    int b;
    long ergebnis=0;

    cout << "bitte Wert fuer a eingeben: ";
    cin >> a;
    cout << "bitte Wert fuer b eingeben: ";
    cin >> b;

    if(a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = 0; i < b; ++i) {
        ergebnis += a;
    }

    cout << ergebnis<< endl;

    return 0;
}
