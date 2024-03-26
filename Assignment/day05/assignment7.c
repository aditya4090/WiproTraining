// to check if the sum of distinct digits of two integers are equal.
#include <stdio.h>

int main() {
    int num1, num2;
    int digitCount1[10] = {0};
    int digitCount2[10] = {0};
    int sum1 = 0, sum2 = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    while (num1 > 0) {
        int digit = num1 % 10;
        digitCount1[digit]++;
        num1 /= 10;
    }

    while (num2 > 0) {
        int digit = num2 % 10;
        digitCount2[digit]++;
        num2 /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digitCount1[i] > 0)
            sum1 += i;
    }

    for (int i = 0; i < 10; i++) {
        if (digitCount2[i] > 0)
            sum2 += i;
    }

    if (sum1 == sum2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
