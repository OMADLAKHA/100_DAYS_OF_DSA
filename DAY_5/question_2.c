/**
 * LeetCode 88: Merge Sorted Array
 * https://leetcode.com/problems/merge-sorted-array/
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Merge nums2 into nums1 in-place.
 * nums1 has a length of m + n, where the last n elements are set to 0 and should be ignored.
 * nums2 has a length of n.
 */
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    // Work backwards from the end of both arrays
    int i = m - 1;           // Pointer for nums1 original elements
    int j = n - 1;           // Pointer for nums2 elements
    int k = m + n - 1;       // Pointer for nums1 total size
    
    // Merge from the back to avoid overwriting
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    
    // If there are remaining elements in nums2, copy them
    // (No need to copy remaining nums1 elements as they're already in place)
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    // Example 1: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
    // Output: [1,2,2,3,5,6]
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};
    int m = 3, n = 3;
    
    merge(nums1, 6, m, nums2, 3, n);
    
    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d", nums1[i]);
        if (i < m + n - 1) printf(" ");
    }
    printf("\n");
    
    return 0;
}
