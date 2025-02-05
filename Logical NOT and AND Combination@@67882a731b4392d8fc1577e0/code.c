#include <stdio.h>

int main() {
    int num1, num2;  // Declare two integer variables
    scanf("%d %d", &num1, &num2);  // Read two space-separated integers from input

    // Check if neither number is greater than zero using '!' and '&&'
    if (!(num1 > 0) && !(num2 > 0)) {
        printf("True");  // If both are <= 0, output "True"
    } else {
        printf("False");  // Otherwise, output "False"
    }

    return 0;  // Return 0 to indicate successful execution
}
