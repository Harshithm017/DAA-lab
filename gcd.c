#include <stdio.h>

// Function to find GCD of two numbers using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    int result = gcd(num1, num2);

    // Print the result
    printf("GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
