// store array from 1 to 100

#include <stdio.h>
#define CAP 100

int main(){

    int arr[CAP];
    int i;

    for(i=0; i<CAP; i++){
        arr[i] = i+1;

    }

    printf("Array elements from 1 to 100:\n");
    for(i=0; i<CAP; i++){
        printf("%d,", arr[i]);
    }
    printf("\n");

    return 0;
}