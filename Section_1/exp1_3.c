#include<stdio.h>
int main()

{
   int phy, chem, math, Bio , result;
   float per;
   int total=400;

    printf("phy mark is=");
    scanf("%d",&phy);
    printf(" \nchem mark is=");
    scanf("%d" ,&chem);
    printf(" \nmath mark is=");
    scanf("%d" ,&math);
    printf("\nBio mark is=");
    scanf("%d" ,&Bio);


   result=(phy+chem+math+Bio);
   printf("result=%d \n" ,result);
   per=(float)result/total*100.0;
   printf("percentage= %f \n", per);
   if(per<30)
   {
       printf("fail");
   }
   if(per>=30 && per<=49)
   {
       printf("3rd division");
   }
   if(per>=50 && per<=69)
   {
       printf("2nd division");
   }
   if(per>=70)
   {
       printf("1st division");
   }
   return 0;
}
