//write a program using pointer to read an array of integer and print its elements in reverse order.
#include<stdio.h>
#define N 10

int main()
{
    int a[N],*p;
    printf("\nEnter the %d no of elements into the array : ",N);
    for(p=a;p<=a+N-1;p++)
    {
        scanf("%d",p);
    }


    printf("\nElements in reverse order : \n");
    {
        for(p=a+N-1;p>=a;p--)
        {
            printf("%2d",*p);
        }
    }
    return 0;
}
