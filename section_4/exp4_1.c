/*write a program to input three numbers and find out the smallest*/

#include<stdio.h>

void main()
{
    int x,y,z;
    printf("Enter X \n");
    scanf("%d",&x);
    printf("Enter y \n");
    scanf("%d",&y);
    printf("Enter z \n");
    scanf("%d",&z);

    if(x<y&&x<z)
    printf("smallest is = %d",x);
    if(y<x&&y<z)
    printf("smallest is = %d",y);
    if(z<x&&z<y)
    printf("smallest is = %d",z);


}


