#include <stdio.h>
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int factorial_recursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}
int main() {
    int number; 
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int iterative_result = factorial_iterative(number);
        int recursive_result = factorial_recursive(number);
        printf("Factorial of %d (Iterative): %d\n", number, iterative_result);
        printf("Factorial of %d (Recursive): %d\n", number, recursive_result);
    }
    return 0; 
}


