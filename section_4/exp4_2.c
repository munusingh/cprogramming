//write a program to input a number and print "ODD" if the number is odd and "EVEN"if the number is even
#include<stdio.h>
void main()
{
    int number;
    printf("Enter an integer : ");
    scanf("%d" , &number);
    if(number%2==0)
    {
        printf("\nEVEN\n");
    }
    else
    {
       printf("\nODDn\n");

    }
}

