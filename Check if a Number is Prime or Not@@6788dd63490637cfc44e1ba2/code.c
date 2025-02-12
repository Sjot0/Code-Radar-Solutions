#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    // Handle the edge case for numbers less than or equal to 1
    if (num <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    // Loop to count the number of divisors
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    // If count is more than 0, the number is not prime
    if (count > 0) {
        printf("Not Prime\n");
    } else {
        printf("Prime\n");
    }

    return 0;
}
