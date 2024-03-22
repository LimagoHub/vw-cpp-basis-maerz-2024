//
// Created by JoachimWagner on 21.03.2024.
//
#include <iostream>
#include "Zombie.h"
using namespace std;
Zombie::Zombie(int size, int power) : Monster(size, power) {}

void Zombie::makeNoise() {
    cout << "ARRRRGGGGH" << endl;
}
