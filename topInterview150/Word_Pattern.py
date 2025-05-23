class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        words = s.split()  # Split the string into words
        if len(pattern) != len(words):
            return False  # Length mismatch
        
        char_to_word = {}
        word_to_char = {}
        
        for char, word in zip(pattern, words):
            if char in char_to_word:
                if char_to_word[char] != word:
                    return False
            else:
                if word in word_to_char:
                    return False
                char_to_word[char] = word
                word_to_char[word] = char
        
        return True

        
