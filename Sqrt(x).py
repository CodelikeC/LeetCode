class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x < 2:
            return x  # Return the number itself for 0 or 1
        
        left, right = 0, x
        while left <= right:
            mid = (left + right) // 2
            if mid * mid == x:
                return mid  # Exact square root
            elif mid * mid < x:
                left = mid + 1  # Move to the right
            else:
                right = mid - 1  # Move to the left
        
        return right  # Return the largest integer whose square is <= x

# Example usage:
solution = Solution()
x1 = 4
x2 = 8
print("Example 1 Output:", solution.mySqrt(x1))  # Output: 2
print("Example 2 Output:", solution.mySqrt(x2))  # Output: 2

        
