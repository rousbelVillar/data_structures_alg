#include <iostream>
#include <stack>

#include "NimGame/NimGame.hpp"
using namespace std;

int main() {
    NimGame game;
    cout<<game.canWinNim(4)<<endl;

    return 0;
};
