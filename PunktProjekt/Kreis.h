//
// Created by JoachimWagner on 21.03.2024.
//

#pragma once


#include "Punkt.h"

class Kreis: public Punkt {

    double radius;
public:
    Kreis(double x= 0, double y=0);

    double getRadius() const;

    void setRadius(double radius);

    std::string toString() override;
};
