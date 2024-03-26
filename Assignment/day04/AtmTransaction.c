#include<stdio.h> 
int main(){
    float balance = 1000.0;
    float withdrawAmount;

    printf("Enter the amount to withdraw:");
    scanf("%f", &withdrawAmount);

    if (withdrawAmount <= 0){
        printf("Invalid amount.\n");
    }
    else if (withdrawAmount > balance){
        printf("Insufficient funds");
    }
    else{
        balance -= withdrawAmount;
        printf("Withdrawal successful.");
    }
    return 0;
}