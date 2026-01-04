#include "ValidParentheses.hpp"
#include <iostream>
#include <stack>

 bool ValidParentheses::isValid(std::string s) {
     std::stack <char> st;

     for (int i=0; i<s.length();i++){
         if(s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '['){
             st.push(s.at(i));
         } else{
             if(st.empty()){
                 return false;
             }
             char top = st.top();
             st.pop();
             if(s.at(i) == ')' && top != '(' ||
                s.at(i) == '}' && top != '{' ||
                s.at(i) == ']' && top != '['
             ){
                 return false;
             }
         }
     }
     return st.empty();
 }


