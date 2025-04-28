#include <iostream> 
using namespace std; 
class Solution {
public:
    bool isPalindrome(int x) {
        // a negative number or a reversed 
        if (x< 0 or (x % 10 == 0 and x!= 0))
        {
            return false;
        }
        int reversed_half = 0 ; 
        while(x > reversed_half) 
        {
            reversed_half = reversed_half * 10 + x % 10 ; 
            x/= 10 ; 
        }
        // check if the original matches the reversed half
        return x == reversed_half or x == reversed_half / 10 ;
    }
};
