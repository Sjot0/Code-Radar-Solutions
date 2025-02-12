#include <stdio.h>

int main() {
    int a, b;
    char c;  // Use a single char instead of an array
    scanf("%d %d %c", &a, &b, &c);  // Read integers and a single character

    if (c == '*') {  // Corrected to use '==' for comparison
        int product = a * b;
        printf("%d", product);
    } else if (c == '/') {  // Corrected to use '==' for comparison
        if (b != 0) {  // Check for division by zero
            int div = a / b;
            printf("%d", div);
        } else {
            printf("Division by zero error");
        }
    } else if (c == '+') {  // Corrected to use '==' for comparison
        int sum = a + b;
        printf("%d", sum);
    } else if (c == '-') {  // Corrected to use '==' for comparison
        int sub = a - b;
        printf("%d", sub);
    } else {
        printf("Invalid");
    }

    return 0;
}
