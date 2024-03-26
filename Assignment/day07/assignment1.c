// program to find nth number made of prime digits
#include<stdio.h>
#include<stdbool.h>


bool isPrime(int n){
    if(n<=1)
        return false;
    for(int i=2; i*i <=n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

 int findnthPrimeDigitNumber(int n){
    int count = 0;
    int num = 2;

    while(count < n){
        int temp = num;
        bool is_prime_digit = true;
        while(temp>0){
            int digit = temp % 10;
            if (!isPrime(digit)){
                is_prime_digit = false;
                break;
            }
            temp /= 10;
        }
        if (is_prime_digit)
            count++;
        num++;
    }
    return num -1;
 }
 int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d",&n);

        int nth_prime_digit_number = findnthPrimeDigitNumber(n);
        printf("%d\n", nth_prime_digit_number);
    }
    return 0;
 }