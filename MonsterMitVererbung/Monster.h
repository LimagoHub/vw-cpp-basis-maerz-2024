//
// Created by JoachimWagner on 21.03.2024.
//

#pragma once


class Monster {

    int size;
    int power;

public:
    Monster(int size, int power);
    void eat();
    void fight();
    virtual void makeNoise()=0;
    int getSize() const;

    int getPower() const;
};
