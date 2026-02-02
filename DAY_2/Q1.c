/*
Delete an Element from an Array

Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left
*/
#include <stdio.h>
int main() {
    int n, pos;
    
    // Read the number of elements
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the position to delete (1-based index)
    scanf("%d", &pos);
    
    // Convert to 0-based index
    int indexToDelete = pos - 1;
    
    // Shift elements to the left from the position to delete
    for (int i = indexToDelete; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Print the updated array
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}