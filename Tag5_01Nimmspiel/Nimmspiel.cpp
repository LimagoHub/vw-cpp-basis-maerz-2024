//
// Created by JoachimWagner on 22.03.2024.
//
#include <iostream>
#include "Nimmspiel.h"
using namespace std;
Nimmspiel::Nimmspiel(int steine)  {
    Nimmspiel::steine = steine;
}

void Nimmspiel::play() {
    while( ! gameover()) {
        spielerzug();
        computerzug();
    }
}

bool Nimmspiel::gameover() {
    return steine < 1;
}

void Nimmspiel::spielerzug() {
    int zug;
    while(true) {
        cout << "Es gibt " << steine << " Steine. Bitte nehmen Sie 1,2 oder 3" << endl;
        cin >> zug;
        if(zug >= 1 && zug  <=3) break;
        cout << "Unerlaubter Zug" << endl;
    }
    steine -= zug;
}

void Nimmspiel::computerzug() {
    int zuege[] = { 3,1,1,2};
    int zug;
    if(gameover()){
        cout << "Spieler hat verloren" << endl;
        return;
    }
    if(steine == 1){
        steine = 0;
        cout << "Spieler hat gewonnen" << endl;
        return;
    }
    /*switch (steine % 4) {
        case 0: zug = 3; break;
        case 3: zug = 2; break;
        default: zug = 1; break;
    }*/
    zug = zuege[steine % 4];
    cout << "Computer nimmt " << zug << " Steine." << endl;
    steine -= zug;
}
