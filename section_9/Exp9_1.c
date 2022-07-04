//Write a program using pointers to input 4X5 matrix and then display it.
#include<stdio.h>

void main()

{
    int i,j;
    int a[50][50];
    printf("\nEnter the elements of 4X5 matrix : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nDisplay the matrix : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%2d",*(*(a+i)+j));
        }
        printf("\n");
    }

}
