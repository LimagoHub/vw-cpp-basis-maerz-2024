//
// Created by JoachimWagner on 21.03.2024.
//

#pragma once


#include "Monster.h"

class Oger: public Monster{
public:
    Oger(int size, int power);

    void makeNoise() override;
};
