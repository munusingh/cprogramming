//write a programm that finds the sum of diagonals of a square matrix.

#include<stdio.h>

void main()
{
    int m[20][20],i,j,n,sum=0;
    printf("\nEnter n for n*n square matrix : ");
    scanf("%d",&n);
    printf("Enter the elements of array : ");

    for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)

            {
              scanf("%d",&m[i][j]);
            }
     }
   printf("The matrix is :\n");
      for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
              printf("%3d",m[i][j]);
          }
          printf("\n");
      }


     //finding sum of diagonal elements
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
         {
             if(i!=j)
             continue;
             sum=sum+m[i][j];
         }

    }
    printf("\nThe sum of diagonal elements are %d",sum);
}
