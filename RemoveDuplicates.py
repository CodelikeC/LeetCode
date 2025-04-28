class Solution:
    def removeDuplicates(self, nums):
        if not nums:
            return 0

        # Initialize the second pointer
        j = 1

        # Iterate with the first pointer
        for i in range(1, len(nums)):
            # If a new unique element is found
            if nums[i] != nums[i - 1]:
                # Place it at the second pointer's position
                nums[j] = nums[i]
                # Move the second pointer
                j += 1

        return j

# Example test case 1
nums1 = [1, 1, 2]
expectedNums1 = [1, 2]

# Example test case 2
nums2 = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
expectedNums2 = [0, 1, 2, 3, 4]

# Create an instance of Solution
solution = Solution()

# Testing the first example
k1 = solution.removeDuplicates(nums1)
print("Output 1:", k1, nums1[:k1])  # Output should be 2, [1, 2]

# Testing the second example
k2 = solution.removeDuplicates(nums2)
print("Output 2:", k2, nums2[:k2])  # Output should be 5, [0, 1, 2, 3, 4]
