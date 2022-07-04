#include<stdio.h>
#define PI 3.141

  void main()
{
    printf("The radius of circle =");
    float rad,perimeter,area;
    scanf("%f" ,&rad);
    perimeter=2*PI*rad;
    area=PI*rad*rad;
    printf("perimeter of a circle of %0.3f is = %f" ,rad,perimeter);
    printf("\nArea of a circle of %0.3f is = %f " ,rad,area);

}
