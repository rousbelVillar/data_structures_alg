//
// Created by Rousbel Villar on 1/3/26.
//

#include "BaseballGame.hpp"

#include <iostream>
#include <ostream>
#include <queue>

using namespace std;

int BaseballGame::calpoints(vector<string> &operations) {
    int result = 0;
    vector<int> scores;
    queue<std::string> opQueque;
    for (string op : operations) {
        if (op == "+" || op == "D" || op == "C") {
            opQueque.push(op);
            cout<<opQueque.back()<<endl;
        }
        else {
            scores.push_back(stoi(op));
            cout<<scores.back()<<endl;
        }
    }
}
