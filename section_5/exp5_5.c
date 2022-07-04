/*write a program to find the number of and sum of all integer greater than 100 and less than 200 are divisible by 7.*/

#include<stdio.h>
void main()
{
    int i,count=0,sum=0;
    for(i=100;i<200;i++)
    {
        if(i%7==0)
        {
            count++;
            sum=sum+i;
        }
        else
        {
            continue;
        }
    }
    printf("\nThere Present Total %d numbers divisible by 7 within 100 and 200\n",count);
    printf("\nSum of those numbers is : %d\n\n",sum);

}

