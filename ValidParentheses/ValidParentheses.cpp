#include "ValidParentheses.hpp"
#include <iostream>
#include <stack>
using namespace std;

 bool ValidParentheses::isValid(string s) {
     //I'm using the stack approach for this problem
     stack <char> st;

     for (int i=0; i<s.length();i++){
         //Only push opening parentheses to the stack
         if(s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '['){
             st.push(s.at(i));
         } else{
             //If we are here that means we have reacjed a closing parentheses
             //If our stack is empty there's no point on continuing we return false
             if(st.empty()){
                 return false;
             }
             //Track the top of the stack before deleting it
             char top = st.top();
             st.pop();
             //If we have a stack element and we have reached a closing parentheses that means
             //there has to be a match for the open p at the top of the stack
             //otherwise we have to return false.
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


