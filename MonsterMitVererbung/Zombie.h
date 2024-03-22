//
// Created by JoachimWagner on 21.03.2024.
//

#pragma once


#include "Monster.h"

class Zombie : public Monster{

public:
    Zombie(int size, int power);

    void makeNoise() override;
};
