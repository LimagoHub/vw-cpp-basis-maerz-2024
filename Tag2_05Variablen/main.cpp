#include <iostream>
#include <string>

using namespace std;

struct Schwein {
    string name;
    int gewicht;
    void fuettern(){
        gewicht ++;
    }
};

/*
void fuettern(Schwein &x) {
    x.gewicht ++;

}
 */

int main() {

    Schwein piggy;
    piggy.name = "Miss Piggy";
    piggy.gewicht = 10;

    piggy.fuettern();
    Schwein babe;
    babe.fuettern();
    std::cout << "Dieses Schwein heisst " << piggy.name << " und wiegt " << piggy.gewicht << std::endl;
    return 0;
}
