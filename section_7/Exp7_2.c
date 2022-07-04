//write a program to input a square matrix(a matrix of order n X n) and then print its upper triangular matrix.

#include<stdio.h>

int main()

{
    int i,j,m[10][10],n;
    printf("Enter n for n*n square matrix : ");
    scanf("%d",&n);
    printf("Enter the elements to matrix :");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

     //printing upper triangular matrix
    printf("\nThe upper triangular matrix is\n\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=i)
            {
                printf("%d\t",m[i][j]);

            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
