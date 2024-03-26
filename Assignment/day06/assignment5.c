// to find the position where equlibrium occurs first in the array

#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Enter the size of the array :");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(i =0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    int totalSum = 0;
    int leftSum = 0;
    int equlibriumIndex = -1;

    for(i=0; i<n; i++){
        totalSum += arr[i];
    }

    for(i=0; i<n; i++){
        totalSum -= arr[i];
        if (leftSum == totalSum){
            equlibriumIndex = i;
            break;
        }
        leftSum += arr[i];
    }
    if (equlibriumIndex != -1){
        printf("Equlibrium index is: %d\n", equlibriumIndex);
    }
    else{
        printf("No equlibrium index is found.\n");
    }
    return 0;
}