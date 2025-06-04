import java.util.Arrays;

class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m - 1;  // Pointer for nums1 (excluding extra spaces)
        int j = n - 1;  // Pointer for nums2
        int k = m + n - 1;  // Pointer for placing merged elements in nums1

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i]; // Place the larger element
                i--;
            } else {
                nums1[k] = nums2[j]; // Place the larger element
                j--;
            }
            k--;
        }

        // If nums2 has remaining elements, copy them to nums1
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
}
