#include <stdio.h>

int main() {
    int n;
    int arr[100];
    
    // Read size of array
    scanf("%d", &n);
    
    // Read sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Use two pointers: slow and fast
    // slow tracks the position of unique elements
    // fast scans through the entire array
    int slow = 0;
    
    for (int fast = 1; fast < n; fast++) {
        // If current element is different from previous unique element
        if (arr[fast] != arr[slow]) {
            slow++;
            arr[slow] = arr[fast];
        }
    }
    
    // Print unique elements only (from index 0 to slow)
    for (int i = 0; i <= slow; i++) {
        printf("%d", arr[i]);
        if (i < slow) printf(" ");
    }
    printf("\n");
    
    return 0;
}
