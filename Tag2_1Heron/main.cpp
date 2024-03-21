#include <iostream>
using namespace std;
int main() {
    double quadratZahl;
    double schaetzwert;

    cout << "Bitte Quadratzahl eingeben: ";
    cin >> quadratZahl;

    schaetzwert = quadratZahl / 2.0;

    for (int i = 0; i < 10; ++i) {
        schaetzwert = 0.5*(schaetzwert + quadratZahl/schaetzwert);
    }

    cout << "Wurzel ist " << schaetzwert << endl;
    return 0;
}
