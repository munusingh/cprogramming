/*Write a program to find out the HCF and LCM of two numbers*/

#include<stdio.h>
void main()
{
    int num1,num2,i,gcd;

    printf("Enter two numbers: ");
    scanf("%d %d" ,&num1,&num2);
    for(i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd = i;
        }

    }
  printf("gcd of these number is %d \n",gcd);
  printf("lcm of these number is %d" ,(num1*num2/gcd));
}
