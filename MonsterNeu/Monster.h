//
// Created by JoachimWagner on 21.03.2024.
//

#pragma once
#include <string>
#include <ostream>

using namespace std;

class Monster {
    string name;
    int groesse;
    int power;
public:
    Monster();

    void essen();
    void kaempfen();

    const string &getName() const;

    void setName(const string &name);

    int getGroesse() const;

    void setGroesse(int groesse);

    int getPower() const;

    void setPower(int power);

    friend ostream &operator<<(ostream &os, const Monster &monster);
};
