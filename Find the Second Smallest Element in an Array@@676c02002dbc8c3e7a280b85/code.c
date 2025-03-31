#include <stdio.h>
#include <limits.h>  // For INT_MAX

int main() {
    int n, i;
    
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // If there are fewer than 2 elements, there's no second smallest number
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[n];
    
    // Input the array elements
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize smallest and second smallest as INT_MAX
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    // Traverse the array to find the smallest and second smallest
    for (i = 0; i < n; i++) {
        // Update the smallest and second smallest
        if (arr[i] < smallest) {
            second_smallest = smallest; // Update second smallest
            smallest = arr[i];          // Update smallest
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];   // Update second smallest
        }
    }

    // If there is no second smallest (all elements are the same)
    if (second_smallest == INT_MAX) {
        printf("-1");
    } else {
        printf("%d", second_smallest);
    }

    return 0;
}
