#include<stdio.h>

void main()
{
int a ,b ,c ;

  printf("Enter a = \n");
  scanf("%d" , &a);
  printf("Enter b = \n");
  scanf("%d" , &b);
  c=a;
  a=b;
  b=c;
  printf("After swapping value of a = %d \n" ,a);
  printf("After swapping value of b = %d \n" ,b);
}
