#include <iostream>
#include <stack>
using namespace std;
#include "BaseballGame/BaseballGame.hpp"

int main() {
    BaseballGame game;
    std::vector<std::string> operations = {"1","C"};
    cout<<game.calpoints(operations);
    return 0;
};
