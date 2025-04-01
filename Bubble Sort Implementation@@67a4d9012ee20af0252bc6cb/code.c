#include <stdio.h>

// Function to implement Bubble Sort
// Bubble Sort works by repeatedly swapping adjacent elements if they are in the wrong order.
// This process is repeated until the array is fully sorted.
void bubbleSort(int arr[], int n) {
    // Outer loop runs (n-1) times since we need at most (n-1) passes to sort the array.
    for (int i = 0; i < n - 1; i++) {
        // Inner loop goes from 0 to (n-i-1), as the last i elements are already sorted.
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next element, swap them.
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
// Loops through the array and prints each element followed by a space.
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // New line after printing all elements.
}

int main() {
    // Read the number of elements from the user.
    int n;
    scanf("%d", &n);
    
    // Declare an array of size n.
    int arr[n];
    
    // Read n space-separated integers from input.
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Call Bubble Sort function to sort the array.
    bubbleSort(arr, n);
    
    // Print the sorted array.
    printArray(arr, n);
    
    return 0;
}
