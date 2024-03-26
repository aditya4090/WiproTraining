#include <stdio.h>

void demoRec();

int main()
{
    printf("\nRecurrisve started");
    demoRec();
    printf("\nRec Done\n\n");
    return 0;
}

void demoRec()
{
    printf("\nIn Rec");
    demoRec();
    printf("\nOut Rec");
}