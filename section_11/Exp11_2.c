/*Write a program to create a structure COMPLEX to represent a complex number. Using the structure write a program to add two complex numbers and display their sum.*/
#include<stdio.h>
struct complexNumber
{
    int realNumber;
    int imaginaryNumber;
};
void main()
{
    struct complexNumber cn1,cn2,result;
    printf("\na + bi is a complex number");
    printf("\nEnter a for 1st complex number : ");
    scanf("%d",&cn1.realNumber);
    printf("Enter b for 1st complex number : ");
    scanf("%d",&cn1.imaginaryNumber);
    printf("Enter a for 2nd complex number : ");
    scanf("%d",&cn2.realNumber);
    printf("Enter b for 2nd complex number : ");
    scanf("%d",&cn2.imaginaryNumber);

    result.realNumber=cn1.realNumber+cn2.realNumber;
    result.imaginaryNumber=cn1.imaginaryNumber+cn2.imaginaryNumber;

    printf("\nSum of the complex numbers is : %d + %di ",result.realNumber,result.imaginaryNumber);

}

