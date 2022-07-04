/*write a program to read the price of an item in decimal form and put the output in paise.*/

#include<stdio.h>
void main()
{
    float price;
    printf("The price of the item = ");
    scanf("%f",&price);
    printf("The price of the item in paise is = %0.0fpaise",price*100);
}
