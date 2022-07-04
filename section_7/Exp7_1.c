//write a program to input a square matrix(a matrix of order n x n and check wheather it is symmetric or not(A matrix A=(aij) is symmetric if aij=aij,for all i and j).
#include<stdio.h>
#include<conio.h>

void main()
  {
      int i,j,m[10][10],n;
      printf("\nEnter n for n*n square matrix : ");
      scanf("%d",&n);
      printf("Enter the elements of the matrix : ");

      for(i=0;i<n;i++)
        {
         for(j=0;j<n;j++)

            {
              scanf("%d",&m[i][j]);
            }
        }

     for(i=0;i<n;i++)
       {
         for(j=0;j<n;j++)
         {
            if(m[i][j]!=m[j][i])
            {break;}
         }
       }
    if(i==n && j==n)
    {
        printf("\nThis is a symetric matrix\n");
    }
    else
    {
        printf("\nThis is not a symetric matrix\n");
    }

}



