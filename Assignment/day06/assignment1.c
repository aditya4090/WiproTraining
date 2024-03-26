//program to find the greatest no. in a given list

#include<stdio.h>
#define CAP 200

int main(){

    int arr[CAP];
    int i,n;
    int max;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++){
        printf("Enter the elements %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("The greatets number in the array is : %d\n", max);
    return 0;

}
