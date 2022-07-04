/*
Write a function using pointers to add two matrices and return the resultant matrix. Use
this function within the main function to add two matrices.
*/
#include <stdio.h>
#include <stdlib.h>

void add(int *a,int *b,int *v,int r,int c)
{
   int i,j;
   for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            *((v+i*c)+j)=*((a+i*c)+j)+*((b+i*c)+j);
        }
    }
}
void main()
{
    int r,c,i,j;
    printf("Enter Row & Column Of Matrices\n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],res[r][c];
    printf("Enter Elements in Matrix 1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Elements in Matrix 2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    add(a,b,res,r,c);
    printf("After Addition the resultant matrix is : \n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("%d ",res[i][j]);
       }
       printf("\n");
   }
}
