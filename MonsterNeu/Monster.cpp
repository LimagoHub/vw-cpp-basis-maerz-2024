//
// Created by JoachimWagner on 21.03.2024.
//

#include "Monster.h"

const string &Monster::getName() const {
    return name;
}

void Monster::setName(const string &name) {
    Monster::name = name;
}

int Monster::getGroesse() const {
    return groesse;
}

void Monster::setGroesse(int groesse) {
    Monster::groesse = groesse;
}

int Monster::getPower() const {
    return power;
}

void Monster::setPower(int power) {
    Monster::power = power;
}

ostream &operator<<(ostream &os, const Monster &monster) {
    os << "name: " << monster.name << " groesse: " << monster.groesse << " power: " << monster.power;
    return os;
}

Monster::Monster() {
    name = "Nobody";
    groesse =100;
    power = 10;
}

void Monster::essen() {
    power ++;
}

void Monster::kaempfen() {
    power --;
}
