#include <iostream>
using namespace std;
int main() {

    int lottenzahlen []= {13,27,31,23,42,49};

   /* lottenzahlen[0] = 13;
    lottenzahlen[1] =  27;

   */ lottenzahlen[5] =  27;

   int maxWert = lottenzahlen[0];
   int summe = lottenzahlen[0];

    for (int i = 1; i < 6; ++i) {
        if(lottenzahlen[i]>maxWert){
            maxWert = lottenzahlen[i];
        }
        summe += lottenzahlen[i];
    }
    cout << maxWert << endl;
    cout << summe << endl;
    cout << summe / 6.0  << endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
