// to find the leaders in the array.

#include<stdio.h>

int main(){
    int i;
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[n-1];
    printf("Leaders in the array: %d", maxRight);


    for(i=n-2; i>=0; i--){
        if (arr[i] > maxRight){
            printf("%d",arr[i]);
            maxRight = arr[i];
        }
    }
    printf("\n");
    return 0;
}