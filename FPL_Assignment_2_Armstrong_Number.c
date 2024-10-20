#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0, temp = 1;
    int i;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        n++; 
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        temp = 1;

        for (i = 0; i < n; i++) {
            temp *= remainder;
        }

        result += temp;
        originalNumber /= 10;
    }

    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

