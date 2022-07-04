#include<stdio.h>

 void main()
 {
   int x, y ,z;
   printf("Enter x \n");
   scanf("%d" , &x);
   printf("Enter y \n");
   scanf("%d" , &y);
   printf("Enter z \n");
   scanf("%d" , &z);

   if(x<y&&x<z)
   printf("smallest is x = %d" , x);
   if(y<x&&y<z)
   printf("smllest is y = %d" ,y);
   if(z<x&&z<y)
   printf("smallest is z = %d" ,z);

   return 0;
 }

