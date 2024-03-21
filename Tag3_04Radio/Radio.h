//
// Created by JoachimWagner on 20.03.2024.
//

#pragma once


class Radio {


    short lautstaerke;
public:
    Radio();
    ~Radio();
    void lauter();
    void leiser();
    short getLautStaerke();

};
