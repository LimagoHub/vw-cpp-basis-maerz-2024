#include <iostream>
#include "Monster.h"
#include "Zombie.h"
#include "Oger.h"

using namespace std;
int main() {
    Zombie zombie {200, 100};
    Oger oger {1000, 600};

    zombie.eat();
    cout <<  zombie.getSize() << endl;

    cout <<  oger.getSize() << endl;

    zombie.makeNoise();
    oger.makeNoise();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
