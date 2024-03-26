// a program to sort the given list in a descending order


#include<stdio.h>
#define CAP 200

int main(){
    int arr[CAP];
    int n, i, j, temp;

    printf("Enter the number of elements in tha array", CAP);
    scanf("%d", &n);


    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0;i<n; i++){
        for(j=0; j<n-1; j++){
            if(arr[j] < arr[j+1]){
                //swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
       }
    }
    printf(" The array sorted in descending order is:\n");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;

}