// rotate every kth element of array
#include <stdio.h>

void reverse(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){

    int n,k,i;
    printf("Enter the no. of elements in then list:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:");
    for (i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("k = ");
    scanf("%d", &k);

    for(i=0; i<n; i +=k){
        int start = i;
        int end = (i+k-1<n) ? i+k-1: n-1;
        reverse (arr, start, end);
    }

    printf("Output:");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;


}