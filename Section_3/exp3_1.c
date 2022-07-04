/*write a program to compute the area of triangle given its three sides*/


#include<stdio.h>
#include<math.h>
void main()
{
    float s1,s2,s3,area,p,S; /*s1,s2,s3 denotes three sides of triangle and s is perimeter*/
    /*p is a variable to hold intermediate values*/
       printf("Enter s1=");
       scanf("%f" ,&s1);
       printf("Enter s2=");
       scanf("%f" ,&s2);
       printf("Enter s3=");
       scanf("%f" ,&s3);
       S=s1+s2+s3;
       p=S*(S-s1)*(S-s2)*(S-s3); /*formula = (p(p-a)(p-b)(p-C))^(1/2)*/
       area=sqrt(S);
       printf("Area of triangle is = %f", area);




}
