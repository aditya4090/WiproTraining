// a program to count number of ways to divide a number in 4 parts
#include <stdio.h>

int countDivisions(int n){
    int count = 0;
    int i,j,k;

    for(i=1; i<=n/4; i++){
        for(j=i; j<=n/3; j++){
            for(k=j; k <= n/2; k++){
                int fourthPart = n-(i+j+k);
                if(fourthPart >= k)
                count++;
            }
        }
    }
    return count;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        printf("%d\n",countDivisions(n));
    }
    return 0;
}