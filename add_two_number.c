#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");

    // Read the integers from the user
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0; // Indicate successful program execution
}