#include <vector>
#include <string> 
class Solution {
public:
    string getPermutation(int n, int k) 
    {
        // create a list of numbers : 
        vector<int> numbers; 
        int factorial = 1 ; 
        for (int i = 1 ; i <= n ; ++i)
        {
            numbers.push_back(i);
            factorial *= i; 
        }
        // adjust k to be zero index .. // 
        k-= 1 ; 

        // Build the k-th permutation..// 
        string result = ""; 
        for (int i = 0 ; i < n ; ++i)
        {
            factorial /= (n - i); 
            int index = k / factorial; 
            result += to_string(numbers[index]); 
            numbers.erase(numbers.begin() + index); 
            k %= factorial; 
        }
        return result; 
    }

};
