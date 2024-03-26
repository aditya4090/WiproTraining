#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1=NULL, *fp2=NULL;
    int a=10;
    float b= 11.5;
    char Name[20]= "Bhima";

    int x;
    float y;
    char z[20];


    fp1 = fopen("test1.txt","r+");
    if(fp1 == NULL)
    {
        perror("fopen()");
        exit(-1);
    }

    fprintf(fp1,"%d %f %s\n",a,b,Name);

    fclose(fp1);

    return 0;
}
