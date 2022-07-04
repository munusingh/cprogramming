#include<stdio.h>
void main()
{
  int a , b ;
    printf("Enter a = \n");
    scanf("%d" , &a);
    printf("Enter b = \n");
    scanf("%d" , &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the value of a is = %d \n" ,a);
    printf("After swapping the value of b is = %d \n" ,b);

}
