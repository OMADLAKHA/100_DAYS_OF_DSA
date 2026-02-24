// LeetCode 283: Move Zeroes
// https://leetcode.com/problems/move-zeroes/

#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;
    
    // First pass: move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }
    
    // Second pass: fill the rest with zeros
    while (insertPos < numsSize) {
        nums[insertPos++] = 0;
    }
}

int main() {
    // Example 1: [0,1,0,3,12] -> [1,3,12,0,0]
    int arr1[] = {0, 1, 0, 3, 12};
    int size1 = 5;
    
    printf("Before: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    moveZeroes(arr1, size1);
    
    printf("After: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    return 0;
}
