// program to check if product of digit of a number at even and odd places is equal
#include <stdio.h>

int main() {
    int number, digit, even_product = 1, odd_product = 1;
    int position = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;

        if (position % 2 == 0)
            even_product *= digit;
        else
            odd_product *= digit;

        position++;

        number /= 10;
    }

    if (even_product == odd_product)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
