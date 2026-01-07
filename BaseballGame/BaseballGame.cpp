//
// Created by Rousbel Villar on 1/3/26.
//

#include "BaseballGame.hpp"

#include <iostream>
#include <ostream>
#include <sstream>

using namespace std;

int BaseballGame::calpoints(vector<string> &operations) {
    int result = 0;
    string charOperations;
    vector<int> scores;

    for (string op : operations) {
        if (op == "+") {
            int val1 = scores[scores.size()-1];
            int val2 = scores[scores.size()-2];
            scores.push_back(val1 + val2);
        } else if (op == "D") {
            int val1 = scores[scores.size()-1] * 2;
            scores.push_back(val1);
        }else if (op == "C") {
            scores.pop_back();
        }
        else {
            scores.push_back(stoi(op));
        }
    }

    for (int score : scores) {
        result += score;
    }
    return result;
}
