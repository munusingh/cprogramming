/*Write a program using function to determine wheather a year is a leap year or not.*/

#include<stdio.h>
int year,leapyear();//function prototype.

int main()
{
   printf("\nEnter the year : ");
   scanf("%d",&year);


   leapyear(year);//function call
   getch();
}

int leapyear(int year) //function defination
{
    if(year%4==0 && year%100!=0||year%400==0)
    {
        printf("%d is a leap year",year);

    }
    else
    {
        printf("%d is not a leap year",year);
    }

}

