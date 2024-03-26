// a program to read sum and products of digits in a given number
#include <stdio.h>

int main() {
    int number, digit, sum = 0, product = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        product *= digit;
        number /= 10;
    }

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}
