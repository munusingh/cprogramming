/*write a program that requests two float type numbers from the user and the divides the first number with second number and display the results along with the numbers.*/

#include<stdio.h>
void main()
{
    float num1, num2 ;
     printf("Enter two float type number : \n");
     scanf("%f" , &num1);
     scanf("%f" , &num2);
     printf("\n%0.4f /%0.4f = %0.4f" ,num1,num2,num1/num2);

}
