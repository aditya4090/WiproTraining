// to check whether product of digits at even places is divisible by sum of digits at odd place of a number
# include<stdio.h>

int checkDivisiblity(int num){
    int evenProduct = 1, oddSum = 0, position = 1;
    while (num>0){
        int digit = num % 10;
        if (position % 2 ==1)
            oddSum += digit;
        else
            evenProduct *= digit;
        num /= 10;
        position++;    
    }
    return evenProduct % oddSum == 0;

}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    printf("%s\n", checkDivisiblity(num) ? "True" : "False");

    return 0;
}