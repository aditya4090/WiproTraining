#include <stdio.h>
#include <stdlib.h>

void dispList(int [], int);
void sortDesc(int [], int);
void disp1(int *, int);



int main()
{
    int *arr = NULL, *temp=NULL;
    int Size,i;// = sizeof(arr)/sizeof(arr[0]);
    printf("\nEnter the size of the list: ");
    scanf("%d",&Size);
    arr = (int *)malloc(sizeof(int)*Size);
    temp = arr;
    printf("\nEnter the %d no of elements of the list\n", Size);
    for(i=0;i<Size;i++,arr++)
        scanf("%d",arr);
    arr = temp;

    printf("\nBefore Sort\n");
    dispList(arr,Size);
    sortDesc(arr,Size);
    printf("\nAfter Sort\n");
    dispList(arr, Size);
    // printf("\n%d",arr[3]);
    printf("\n\n");
    return 0;
}

void sortDesc(int a[], int n)
{
    int i,j;
    int temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void dispList(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d->",a[i]);
    
    printf("\n");
}


// sort the elements of an array in desc order