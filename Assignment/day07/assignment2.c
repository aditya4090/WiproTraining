// check wheather the given number can be expressed as the sum of two prime no.
#include <stdio.h>
int isPrime(int num){
    int i;
    if (num<=1)
        return 0;

    for (i=2; i*i <= num; i++){
        if (num%i ==0)
            return 0;
    }
    return 1; 
}

int main(){
    int n;
    int i;
    printf(" Enter a number:");
    scanf("%d", &n);

    printf("%d \n", n);
    int count = 0;
    for(i =2; i<=n/2; i++){
        if (isPrime(i) && isPrime(n-i)){
            printf("%d + %d\n", i,n-i);
            count++;
        }
    }
    printf("No of ways = %d\n", count);
    return 0;
}