/*Write a program using function to input a mxn matrix (of integers) and then transpose it.*/
#include<stdio.h>
int M=3;
int N=4;

void TransposeMattrix(int [M][N]);


void TransposeMattrix(int matrix[M][N])
{
    int i,j;
    printf("\nTranspose of the matrx is :\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%2d",matrix[j][i]);
        }
        printf("\n");
    }
}

void main()
{
    int matrix[M][N];
    int i,j;
    printf("\nEnter elements into a matrix of order %dX%d\n",M,N);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    TransposeMattrix(matrix);
}



