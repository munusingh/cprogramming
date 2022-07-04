/*Write a program to count the number of digits in a number*/
#include<stdio.h>
void main()
{
    int num,count=0;
    //count is a variable which acts as a counter
    printf("Enter an integer value : ");
    scanf("%d",&num);
    while(num!=0)
    {
        count++;
        num=num/10;
    }
    printf("Number Of Digits Present is : %d ",count);
}
