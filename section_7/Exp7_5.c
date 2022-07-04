/* Write a menu-based program that takes two matrixes A and B as input and displays the
results of the following operations based on the user’s choice.
1. A + B         2. A - B       3. B - A           4. A × B
*/
#include<stdio.h>


void main()
{
    int row,col,i,j,ch,A[50][50],B[50][50],sum[50][50],sub[50][50],mul[50][50];
    printf("Enter the no of row and column for  matrix A : ");
    scanf("%d%d",&row,&col);
    printf("\nEnter the elements to matrix A : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the no of row and column for matrix B : ");
    scanf("%d%d",&row,&col);
    printf("\nEnter the elements to matrix B : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d", &B[i][j]);

        }
    }
    printf("\nEnter your choice according to question :");
    scanf("%d",&ch);

    switch(ch)
    {

    case 1:


         for(i=0;i<row;i++)
        {
             for(j=0;j<col;j++)
             {
                sum[i][j]=A[i][j]+B[i][j];
             }

        }

         printf("A+B: \n");


        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%2d",sum[i][j]);

            }
        printf("\n");

        }

    break;


    case 2:

        for(i=0;i<row;i++)
        {
             for(j=0;j<col;j++)
             {
                sub[i][j]=A[i][j]-B[i][j];
             }

        }

         printf("A -B: \n");


        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%2d",sub[i][j]);

            }
        printf("\n");

        }

    break;
    case 3:
        for(i=0;i<row;i++)
        {
             for(j=0;j<col;j++)
             {
                sub[i][j]=B[i][j]-A[i][j];
             }

        }

         printf("B-A : \n");


        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%2d",sub[i][j]);

            }
        printf("\n");

        }

    break;
    case 4:
        for(i=0;i<row;i++)
        {
             for(j=0;j<col;j++)
             {
                mul[i][j]=A[i][j]*B[i][j];
             }

        }

         printf("A*B : \n");


        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%2d",mul[i][j]);

            }
        printf("\n");

        }

      break;
    }

 }



