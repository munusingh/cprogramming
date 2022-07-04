/*Write a program using function to input a m x n matrix (of integers) and then find the largest, the 2nd largest, the smallest, and the 2nd smallest numbers in it.*/
#include<stdio.h>

#define m 2
#define n 3

void largestsmallest(int matrix[m][n])
{
 int i,j,k,temp;
 for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(matrix[i][j]<matrix[i][k])
                {
                    temp=matrix[i][j];
                    matrix[i][j]=matrix[i][k];
                    matrix[i][k]=temp;
                }
            }
        }
    }
}
void main()
{
    int matrix[m][n],i,j,k,temp;
    printf("Enter Elements into an %dX%d matrix\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&matrix[i][j]);
        }
    }
    largestsmallest(matrix);
    printf("\nThe Largest Number is %d",matrix[0][0]);
    printf("\nThe Second Largest Number is %d",matrix[0][1]);
    printf("\nThe Smallest Number is %d",matrix[1][2]);
    printf("\nThe Second Smallest Number is %d",matrix[1][1]);

}
