#include<stdio.h>

int main(){
    int i;
    int size;
    int even_position_sum = 0;
    int odd_position_sum = 0;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d element:\n", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);

        if(i%2 == 0){
            even_position_sum += arr[i];
           
        }
            
            else{
                odd_position_sum += arr[i];
            }
        }
        printf(" Sum of values at even positions: %d\n", even_position_sum);
        printf("Sum of values at odd positions: %d\n", odd_position_sum);
        return 0;
    }
    
        


