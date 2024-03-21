//
// Created by JoachimWagner on 20.03.2024.
//
#include <iostream>
#include "MyMath.h"

double wurzel(double quadratzahl/* parameter */) {
    double schaetzwert = quadratzahl / 2.0;
    for (size_t i = 0; i < 10; ++i) {
        schaetzwert = 0.5 * ( schaetzwert + quadratzahl/schaetzwert);
    }
    return schaetzwert;
}
