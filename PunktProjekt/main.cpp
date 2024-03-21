#include <iostream>
#include "Punkt.h"
using namespace std;

int main() {
    Punkt p;
    cout << p.toString() << endl;
    for (int i = 0; i < 20; ++i) {
        p.rechts();
        cout << p.toString() << endl;
    }
    return 0;
}
