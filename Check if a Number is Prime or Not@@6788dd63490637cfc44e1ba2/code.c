#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check for number less than 2 (they are not prime)
    if (num < 2) {
        printf("Not Prime\n");
        return 0;
    }

    int i;
    for (i = 2; i * i <= num; i++) {  // Only check up to sqrt(num)
        if (num % i == 0) {
            printf("Not Prime\n");
            return 0;  // If divisible, it's not prime
        }
    }

    printf("Prime\n");  // If no divisors were found, it's prime
    return 0;
}
