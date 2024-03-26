/*
demo on command line arguments
argc => integer argument count (no of args)
argv=> 2d array of strings which can hold number of strings in it

2d array of chars
char stdNames[50][100];
50-> no of students
100-> lenght of each name of students

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int sum=0, a,b;
    printf("\nNo of args passed through cmd line: %d", argc);
    if(argc != 3)
    {
        printf("\nPlease check the no of args");
        exit(0);
    }
    for(i=0;i<argc;i++)
    {
        printf("\nargv[%d] = %s",i,argv[i]);
    }
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    sum = a+b;
    printf("\nSum = %d\n",sum);
    printf("\n\n");
    return 0;
}