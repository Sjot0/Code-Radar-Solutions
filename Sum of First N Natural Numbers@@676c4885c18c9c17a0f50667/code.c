#include <stdio.h>

int main(){
    int a;
    int sum = 0; // Initialize sum to 0

    scanf("%d", &a);

    for (int i = 1; i <= a; i++){  // Start loop from 1 to 'a'
        sum += i;  // Accumulate the sum of numbers
    printf("%d ", sum);  // Print the current sum
    }
    
    return 0;
}
