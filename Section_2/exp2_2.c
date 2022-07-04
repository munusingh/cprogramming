/*Writes a program that takes as input ,the principal,rate of interest,and time and then calculate the simple interest and compound interest*/

#include<stdio.h>
#include<math.h>
void main()
{
   float P ,R ,T , SI, CI ;/*p=principle amount,R= rate of interest,T=time duration, SI= simple interest, CI=compound interest*/
   printf("Enter principle amount : ");
   scanf("%f" , &P);
   printf("Enter rate of interest : ");
   scanf("%f" , &R);
   printf("Enter time duration : ");
   scanf("%f" , &T);
   SI = (P*T*R)/100; /*calculating simple interest*/
   printf("\nThe simple interest is : %f" ,SI);
   CI = P*(pow(1+(R/100),T)); /*compound interest = principle amount*((1+(rate of interest/100)^Time))*/
   printf("\nThe compound interest is : %f " ,CI);

}
