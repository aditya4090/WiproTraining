/* Wile loop which is treated as an entry controlled looping statement change it in such a way that it should behave like exit controlled looping statement*/
#include <stdio.h>

int main()
{

    int i = 1;
    while (1)
    {
        printf("current number is :%d\n", i);
        i++;
        if (i > 10)
        {
            break;
        }
    }
    return 0;
}