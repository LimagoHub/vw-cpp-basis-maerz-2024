#include <iostream>
#include "Punkt.h"
#include "Kreis.h"

using namespace std;

int main() {
    Kreis p{-3.0, 5.0};
    p.setRadius(50);
    cout << p.toString() << endl;
    for (int i = 0; i < 25; ++i) {
        p.rechts(0.5);
        cout << p.toString() << endl;
    }
    return 0;
}
