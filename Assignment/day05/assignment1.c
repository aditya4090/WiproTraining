// logic to implement squarred numbered pattern
#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", num++);
            if (j != n - 1) {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
