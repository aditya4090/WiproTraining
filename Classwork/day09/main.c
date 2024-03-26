#include <stdio.h>
#include <emp.h>

int main()
{
    EMP e,e1;
    printf("\nAddress of e in main: %u",&e);
    getDetails(&e); //pass by address/reference
    //e1 = e; //not possible with assignement op
    // copying from one st to another can be done
    // by copying element by element values
    printDetails(e); //pass by value

    printf("\n\n");
    return 0;
}

