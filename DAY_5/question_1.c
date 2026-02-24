#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[100], arr2[100], result[200];
    
    // Read first array
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Read second array
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Merge two sorted arrays using two-pointer technique
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    
    // Copy remaining elements from arr1
    while (i < n1) {
        result[k++] = arr1[i++];
    }
    
    // Copy remaining elements from arr2
    while (j < n2) {
        result[k++] = arr2[j++];
    }
    
    // Print the merged sorted array
    for (int i = 0; i < k; i++) {
        printf("%d", result[i]);
        if (i < k - 1) printf(" ");
    }
    printf("\n");
    
    return 0;
}
