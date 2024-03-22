#include <iostream>
using namespace std;
void fuellen(int *myarray, size_t groesse){
    for (int i = 0; i < groesse; ++i) {
        myarray[i] = i + 1;
    }
}

void mischen(int *myarray, size_t groesse){
    for (int i = 0; i < 1000; ++i) {
        int position1 = rand() % 49;
        int position2 = rand() % 49;

        /*int temp;
        temp = myarray[position1];
        myarray[position1] = myarray[position2];
        myarray[position2]= temp;
        */
        swap(myarray[position1],myarray[position2]);
    }
}

void ausgeben(int *myarray, size_t groesse) {
    for (int i = 0; i < groesse; ++i) {
        cout << myarray[i] << endl;
    }
}



int main() {
    srand(time(0));

    int lottozahlen[49];
    fuellen(lottozahlen, 49);
    ausgeben(lottozahlen,49);
    mischen(lottozahlen,49);
    ausgeben(lottozahlen,6);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
