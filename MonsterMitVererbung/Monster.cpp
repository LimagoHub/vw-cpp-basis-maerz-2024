//
// Created by JoachimWagner on 21.03.2024.
//

#include "Monster.h"

Monster::Monster(int size, int power)  {
    Monster::size = size;
    Monster::power = power;
}

void Monster::fight() {
    power --;
}

void Monster::eat() {
    power ++;
}

int Monster::getSize() const {
    return size;
}

int Monster::getPower() const {
    return power;
}
