/*write a program to print a four digit integer and print sum of its digit*/

#include<stdio.h>
void main()
{
  int num,n,sum=0;
  printf("Enter a four digit integer : ");
  scanf("%d" ,&num);
  n=num;
  while(num!=0)
      {
        sum=sum+(num%10);
        num=num/10;
      }

  printf("Answer is : %d\n" ,sum);


}
