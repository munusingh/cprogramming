/*write a program to take a number as input and check whether it is even or odd using conditional operator*/

#include<stdio.h>
void main()
{
    int number;
      printf("Enter an integer : ");
      scanf("%d" , &number);
      (number%2 == 0)?printf("This is an EVEN number"):printf("This is an ODD number");


}
