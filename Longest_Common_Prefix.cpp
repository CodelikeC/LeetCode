#include <iostream> 
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
        {
            return "";
        }
        string prefix = strs[0]; 

        for (int i = 1 ; i<strs.size(); ++i)
        {
            // reduce the prefix until it matches the start of each .. 
            while (strs[i].find(prefix) != 0)
            {
                prefix = prefix.substr(0, prefix.length() - 1); 
                if (prefix.empty())
                {
                    return ""; 
                }
            }
        }
        return prefix; 
    }
};
