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
    Punkt(double startX=0, double startY=0);

    void rechts(double weite = 1);
    void links();
    void oben();
    void unten();



    double getX() const;
    double getY() const;

    virtual std::string toString();

};
