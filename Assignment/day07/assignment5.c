//program to calculate sum of even and odd values in tha array

#include<stdio.h>
int main(){

    int size;
    int i;
    int even_sum = 0;
    int odd_sum = 0;

    printf("Enter the size of the array:");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements: ",size);
    for (i=0; i<size; i++){
        scanf("%d", & arr[i]);
        if(arr[i] % 2 == 0){
            even_sum += arr[i];
        }
        else{
            odd_sum += arr[i];
        }
    }
    printf("Sum of even numbers : %d\n",even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);
    return 0;


}