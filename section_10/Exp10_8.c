


#include<stdio.h>

int identicalMatrix(int* a1,int* a2,int r,int c)
{
    for(int i=0;i<r*c;i++)
    {
        if(*(a1+i) !=(*(a2+i)))
           {
               return 0;
           }
    }
    return 1;
}
void main()
{
    int i , j;
    int r,c,a1[i][j],a2[i][j];
    printf("\nEnter row and column of matrix: ");
    scanf("%d %d",&r,&c);

    printf("\nEnter the elements into the matrix 1: ");
    for( i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }

    printf("\nEnter the elements into the matrix 2: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    if(identicalMatrix(&a1[0][0],&a2[0][0],r,c))
    {
        printf("Both the matrix are identical");
    }
    else
    {
        printf("Both the matrix are not identical");
    }
}

