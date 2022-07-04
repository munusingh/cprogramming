/*Write a program to print following structure
   4 3 2 1 2 3 4
     3 2 1 2 3
       2 1 2
         1
*/
#include<stdio.h>
#include<conio.h>

void main()
{
int r,c,rows;
printf("\nEnter the number of rows : ");
scanf("%d" ,&rows);


    for(r=rows;r>=1;r--)
    {
       for(c=(rows*2)-1;c>=1;c--)
        {
          if(c>=rows-(r-1) && c<=rows+(r-1))
             {
              if((rows-c)<0)
                {
                 printf(" %d ",((rows-c)*-1)+1);
                }
                else
                {
                    printf(" %d ",(rows-c)+1);
                }
              }
                else
                {
                   printf("   ");
                }
        }
        printf("\n");
    }
}







