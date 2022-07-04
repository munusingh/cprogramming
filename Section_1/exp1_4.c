#include<stdio.h>

void main()

{

    float fahr , cel; /*variable declaration*/

    printf("Enter fahr in degree \n");
    scanf("%f" , &fahr);
    cel=(fahr-32)*5/9;
    printf("The degree cel is %f \n" , cel);
    fahr=(cel*9/5)+32;
    printf("The fahr is %f" , fahr);

    /*Programme Ends*/
}

