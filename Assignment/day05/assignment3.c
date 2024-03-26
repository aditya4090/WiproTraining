// c program to print alphabet triangle 
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Printing spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }

        for (j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}