#include<stdio.h>

int main(){

    char clr;
    printf("\n Enter the color of the traffic light (R/O/G):");
    clr = getc(stdin);

    if((clr =='R')  ||  (clr == 'r'))
    {
        printf("\n Stop the vehicle until green light glows");
    }
    else if((clr == 'O')  ||  (clr == 'o'))
    {
        printf("\n Start the vehicle and proceed");
    }
    else if((clr == 'G') || (clr == 'g'))
    {
        printf("\nDrive....");
    }
    else{
        printf("\n Traffic lights are off.\n Hence move slowly considering the flow ");g
    }
    printf("\n Speed kills \n\n");
    return 0;

}