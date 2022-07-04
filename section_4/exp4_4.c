/*Write a program that will read the value of x and evaluate the following function:


y={1 for x>0
   0 for x<0
  -1 for x<0
*/

#include<stdio.h>

 void main()
{
    float x;
    int y;
    printf("Enter value of x : ");
    scanf("%f",&x);
    if(x>0)
        {y=1;}
    else if(x<0)
        {y=-1;}
    else
        {y=0;}
    printf("\ny = %d\n" ,y);
}
