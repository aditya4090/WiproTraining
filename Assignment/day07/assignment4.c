//program to reverse the array elements

#include <stdio.h>
#define CAP 100

int main(){
    int i;
    int numbers[CAP];

    for(i = 0; i<CAP; i++){
        numbers[i] = i+1;

    }
    printf("Original array:\n");
    for(i = 0;i<CAP; i++){
        printf("%d \n", numbers[i]);
        
    }
    printf("\n");

    int temp;
    for(i = 0; i<CAP / 2; i++){
        temp = numbers[i];
        numbers[i] = numbers[CAP -1 -i];
        numbers[CAP - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for(i = 0; i<CAP; i++){
        printf("%d\n", numbers[i]);
    }
    return 0;
}