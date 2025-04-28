#include <iostream> 
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), length = 0;
        // Start from the end and skip spaces
        while (n > 0 && s[n - 1] == ' ') {
            n--;
        }
        // Count the characters of the last word
        while (n > 0 && s[n - 1] != ' ') {
            length++;
            n--;
        }
        return length;
    }
};
