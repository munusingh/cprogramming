/*write a program to compute the area of triangle given its base and height*/

#include<stdio.h>
void main()
{
    float height ,base ,area;

     printf("The height of triangle = ");
     scanf("%f" , &height);
     printf("The base of  triangle = ");
     scanf("%f" ,&base);
     area=(height*base)/2;
     printf("\nThe area of the triangle having height : %0.4f , base : %0.4f is %0.4f" , height,base,area);

}
