//write a program that finds the sum of each row and sum of each column of a matrix.
#include<stdio.h>

void main()
{
    int m[10][10],i,j,sum_r =0,sum_c=0,r,c;
    printf("\nEnter the number of row in matrix : ");
    scanf("%d",&r);
    printf("\nEnter the number of column in matrix: ");
    scanf("%d",&c);
    printf("\nEnter the elements into matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    //finding sum of rows and columns
    for(i=0;i<r;i++)
    {
        sum_r=0;
        for(j=0;j<c;j++)
        {
            sum_r=sum_r+m[i][j];
        }
        printf("\nSum of %d row is %d",i+1,sum_r);
    }

    printf("\n\n");

    for(i=0;i<c;i++)
    {
        sum_c=0;
        for(j=0;j<r;j++)
        {
            sum_c=sum_c+m[j][i];
        }
        printf("\nSum of %d column is %d",i+1,sum_c);


    }

 }
