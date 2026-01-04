#include <iostream>
#include <stack>

#include "ValidParentheses/ValidParentheses.hpp"

int main() {
    ValidParentheses valid_parenthesis;
    std::cout << valid_parenthesis.isValid("(){") <<std::endl;
    return 0;
}
