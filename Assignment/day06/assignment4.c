// Given an unsorted array of SIze N of non negative integers find a continous subarray which adds to a given number sum

#include<stdio.h>
int main(){
    int i;
    int n, sum;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum: ");
    scanf("%d", &sum);

    int currentSum = arr[0];
    int start = 0;
    int found = 0;

    for(i=1; i<=n; i++){
        while (currentSum > sum && start <i-1){
            currentSum -= arr[start];
            start++;
        }
        if (currentSum == sum){
            printf("Sum found between indexes %d and %d\n", start,i-1);
            found = 1;
            break;
        }
        if (i<n){
            currentSum += arr[i];
        }
    }
    if(!found){
        printf("No subarray found\n");
    }
    return 0;
}