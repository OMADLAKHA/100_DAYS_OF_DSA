# Day 3 - Array Searching

## Overview
- **Category:** Introduction
- **Topics:** Array Searching
- **Status:** Unlocked

## Questions

### Question 1: Linear Search with Comparison Count (C Programming)
**Difficulty:** PRACTICE
**Link:** Internal

#### Problem Description
Implement a linear search algorithm that counts the number of comparisons made.

#### Logic Explanation
1. Iterate through each element of the array
2. Compare current element with the search key
3. If found, return the index
4. If not found after checking all elements, return -1
5. Count each comparison operation

#### Key Points
- Works on unsorted arrays
- Time complexity is O(n) in worst case
- Count comparisons to analyze performance

#### Solution (C)
```c
#include <stdio.h>

int main() {
    int n, k, comparisons = 0;
    int arr[100];
    int found = -1;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            found = i;
            break;
        }
    }
    
    if (found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("Not Found\n");
    }
    printf("Comparisons = %d\n", comparisons);
    
    return 0;
}
```

#### Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

### Question 2: Missing Number in Array (LeetCode)
**Difficulty:** EASY
**Platform:** GeeksforGeeks
**Link:** https://practice.geeksforgeeks.org/problems/missing-number-in-array/0

#### Problem Description
Given an array of n-1 distinct positive integers (from 1 to n), find the missing number.

#### Approach 1: Sum Formula
1. Calculate expected sum: n*(n+1)/2
2. Calculate actual sum of array
3. Difference is missing number

#### Approach 2: XOR Method
1. XOR all indices with all array values
2. Pairs cancel out, leaving missing number

#### Solution (C - Sum Formula)
```c
#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
    int n = numsSize;
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    
    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }
    
    return expectedSum - actualSum;
}

int main() {
    int nums[] = {3, 0, 1};
    int size = sizeof(nums)/sizeof(nums[0]);
    
    printf("Missing number: %d\n", missingNumber(nums, size));
    
    return 0;
}
```

#### Solution (C - XOR Method)
```c
#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
    int result = numsSize;  // XOR with n
    
    for (int i = 0; i < numsSize; i++) {
        result ^= i ^ nums[i];
    }
    
    return result;
}
```

#### Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## Learning Resources
- [GFG Video Solution](https://www.youtube.com/watch?v=WnPLSRLSANE)
- Array Searching Techniques
- Prefix Sum Concepts
- XOR Properties

## Next Steps
- Practice with variations (duplicates, custom range)
- Implement with different data structures
- Compare performance of different approaches
