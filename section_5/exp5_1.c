/*Write a program to print following structure
      *
    * * *
   * * * * *
 * * * * * * *

*/
#include<stdio.h>

void main()
{
int r,c,rows;
//r and c are the rows and columns and rows is the total no of rows we want in our pyramid

printf("\nEnter the number of rows : ");
scanf("%d" ,&rows);

 for(r=1;r<=rows;r++)
    {
        for(c=1;c<=(rows*2)-1;c++)
        {
            if(c>=rows-(r-1) && c<=rows+(r-1))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
