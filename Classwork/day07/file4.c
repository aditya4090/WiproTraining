#include <stdio.h>

void swap2nos(int, int);

int main()
{
    int a=10,b=20;
    printf("\na=%d\tb=%d\n",a,b);
    swap2nos(a,b);
    printf("\na=%d\tb=%d\n",a,b);
    printf("\n\n");
    return 0;
}

void swap2nos(int x, int y)
{
    int t;
    t = x;
    x=y;
    y=t;
    printf("\na=%d\tb=%d\t(in function)\n",x,y);
}