//
// Created by JoachimWagner on 22.03.2024.
//

#pragma once


class Nimmspiel {

    int steine;
    void spielerzug();
    void computerzug();
    bool gameover();

public:
    explicit Nimmspiel(int steine = 23);
    void play();

};
