#include <iostream>
#include "Radio.h"
using namespace std;
int main() {
    Radio alexa;

    alexa.lauter();

    cout << alexa.getLautStaerke() << endl;
    return 0;
}
