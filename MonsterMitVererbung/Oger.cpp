//
// Created by JoachimWagner on 21.03.2024.
//
#include <iostream>
#include "Oger.h"
using namespace std;
Oger::Oger(int size, int power) : Monster(size, power) {}

void Oger::makeNoise() {
    cout << "WAAAAAAAHHH" << endl;
}
