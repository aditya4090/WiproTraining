// write a c program to find the smallest no. in a given list

#include<stdio.h>
#define CAP 200

int main(){

    int arr[CAP];
    int i,n;
    int min;


    printf("Enter the number of elements in the array: ", CAP);
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++){
        printf("Enter the elements %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for(i=1; i<n; i++){
        if(arr[i] < min){
            min= arr[i];
        }
    }

    printf("The smallest number in the array is : %d\n", min);
    return 0;

}