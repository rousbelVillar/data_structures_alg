#include <iostream>
#include <stack>

#include "BaseballGame/BaseballGame.hpp"

int main() {
    BaseballGame game;
    std::vector<std::string> operations = {"5","2","C","D","+"};
    game.calpoints(operations);
    return 0;
};
