//
// Created by JoachimWagner on 20.03.2024.
//
#include <iostream>
#include "Radio.h"
using namespace std;
Radio::Radio() {

    cout << "Radio an" << endl;

    lautstaerke = 2;
}

void Radio::lauter() {
    if(lautstaerke < 20)
        lautstaerke ++;
}

void Radio::leiser() {
    if(lautstaerke > 0)
        lautstaerke --;
}

short Radio::getLautStaerke() {
    return lautstaerke;
}

Radio::~Radio() {
    cout << "Radio aus" << endl;
}

