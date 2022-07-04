/*Write a program to input a number and check whether it is prefect or not
(A number is called perfect if the sum of its divisors is equal to the number itself.
For example, 28 is a perfect number since 1+2+4+7+14=28)*/
#include<stdio.h>
void main()
{
    int number,dvsr,total=0;
    printf("Enter a number : ");
    scanf("%d",&number);
    for(dvsr=1;dvsr<=number/2;dvsr++)
    {
        if(number%dvsr == 0)
        {
            total=total+dvsr;
        }
    }
    if(number==total)
    {
        printf("\n\n%d is a perfect number ",number);
    }
    else
    {
        printf("\n\n%d is not a perfect number ",number);
    }
}
