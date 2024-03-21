//
// Created by JoachimWagner on 20.03.2024.
//

#pragma once
#include <string>

class Punkt {
    double x;
    double y;
    void setX(double x);
    void setY(double y);
public:
    Punkt();

    void rechts();
    void links();
    void oben();
    void unten();



    double getX() const;
    double getY() const;

    std::string toString();

};
