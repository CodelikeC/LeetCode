#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                // Push opening brackets onto the stack
                st.push(c);
            } else {
                // Check if the stack is empty or the top doesn't match the closing bracket
                if (st.empty() || !isMatchingPair(st.top(), c)) {
                    return false;
                }
                st.pop(); // Remove the matching opening bracket
            }
        }
        
        // If the stack is empty, all brackets were valid
        return st.empty();
    }

private:
    bool isMatchingPair(char open, char close) {
        return (open == '(' && close == ')') ||
               (open == '{' && close == '}') ||
               (open == '[' && close == ']');
    }
};
