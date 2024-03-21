//
// Created by JoachimWagner on 20.03.2024.
//

#include "Punkt.h"

double Punkt::getX() const {
    return x;
}

void Punkt::setX(double neuesX) {
    if(neuesX > 10) {
        neuesX = 10;
    }
    if(neuesX < -10) {
        neuesX = -10;
    }
    x = neuesX;
}

double Punkt::getY() const {
    return y;
}

void Punkt::setY(double neuesY) {
    if(neuesY > 10) {
        neuesY = 10;
    }
    if(neuesY < -10) {
        neuesY = -10;
    }
    y = neuesY;
}

Punkt::Punkt() {

    setX(0);
    setY(0);
}

void Punkt::rechts() {
    setX(getX() + 1);
}
void Punkt::links() {
    setX(getX() - 1);
}
void Punkt::oben() {
    setY(getY() + 1);
}
void Punkt::unten() {
    setY(getY() - 1);
}

std::string Punkt::toString() {
    return "Punkt: x = " + std::to_string(x) + ", y = " + std::to_string(y);
}
