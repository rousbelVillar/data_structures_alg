//
// Created by Rousbel Villar on 1/7/26.
//

#include "NimGame.hpp"

#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;

bool NimGame::canWinNim(int n) {
    bool turnPlayer1 = true;

    while (true) {
        int range = n <= 3 ? 2 : 3;


        if (turnPlayer1) {
            const int randomPickPlayer1 = rand() % range + 1;
            n -= randomPickPlayer1;
            if (n<=1) {
                return turnPlayer1;
            }
            turnPlayer1 = false;
        }else {
            const int randomPickPlayer2 = rand() % range + 1;
            n -= randomPickPlayer2;
            if (n<=1) {
                return turnPlayer1;
            }
            turnPlayer1 = true;
        }
    }
};

