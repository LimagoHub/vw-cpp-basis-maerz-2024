//
// Created by JoachimWagner on 21.03.2024.
//

#include "Kreis.h"

Kreis::Kreis(double x, double y) : Punkt(x, y) {
    radius = 0;
}

double Kreis::getRadius() const {
    return radius;
}

void Kreis::setRadius(double radius) {
    if(radius <0){
        radius = 0;
    }
    Kreis::radius = radius;
}

std::string Kreis::toString() {
    return Punkt::toString() + ", Radius = " + std::to_string(radius);
}
