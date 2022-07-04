/*Rewrite yhe program mentioned in Experiment2.2 .However,rename the data types 'float' to 'decimal' and 'int to 'integer' by using typedef statement.*/

#include<stdio.h>
#include<conio.h>
void main()
{
   typedef float decimal;
   typedef int integer;
   decimal P ,R , SI, CI ;/*p=principle amount,R= rate of interest,T=time duration, SI= simple interest, CI=compound interest*/
   integer T;
   printf("Enter principle amount : ");
   scanf("%f" , &P);
   printf("Enter rate of interest : ");
   scanf("%f" , &R);
   printf("Enter time duration : ");
   scanf("%d" , &T);
   SI = (P*T*R)/100; /*calculating simple interest*/
   printf("\nThe simple interest is : %f" ,SI);
   CI = P*(pow(1+(R/100),T)); /*compound interest = principle amount*((1+(rate of interest/100)^Time))*/
   printf("\nThe compound interest is : %f " ,CI);
   getch();
}

