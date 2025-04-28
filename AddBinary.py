class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        # Convert binary strings to integers using base 2
        num1 = int(a, 2)
        num2 = int(b, 2)
        
        # Perform addition
        result = num1 + num2
        
        # Convert the sum back to a binary string
        return bin(result)[2:]  # Remove the '0b' prefix from the binary representation

# Example usage
solution = Solution()
a1 = "11"
b1 = "1"
print("Example 1 Output:", solution.addBinary(a1, b1))  # Output: "100"

a2 = "1010"
b2 = "1011"
print
