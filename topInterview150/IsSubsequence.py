class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        i, j = 0, 0  # Pointers for s and t
        while j < len(t):
            if i < len(s) and s[i] == t[j]:
                i += 1  # Move pointer in s if characters match
            j += 1  # Always move pointer in t
        return i == len(s)  # Check if all characters in s were matched


        
