/*Write a program that takes as input an integer ‘n’ and computes the following series: 1 -
(2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!).*/
#include<stdio.h>

void main()
{
    int n,i,j,num,fac;
    float sum=1.0;
    printf("Enter the value of n : ");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        fac=1;
        for(j=2;j<=(i+1);j++)
        {
            fac=fac*j;
        }
        if(num%2==0)
        {
            sum=sum-((float)i/(float)(fac));
        }
        else
        {
            sum=sum+((float)i/(float)(fac));
        }

    }
    printf("Result of the series is : %f ",sum);
}

