#include <iostream>
using namespace std;
int main() {

    srand(time(0));

    for (int i = 0; i < 10; ++i) {
        int zufallszahl = rand() % 49 + 1 ;
        cout << zufallszahl << endl;
    }



    return 0;
}
