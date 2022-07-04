 #include<stdio.h>

void main()

{

    float fahr , cel; /*variable declaration*/

    printf("Enter degree in cel\n");
    scanf("%f" , &cel);
    //cel=(fahr-32)*5/9;
    //printf("The degree in cel is %f \n" , cel);
    fahr=(cel*9/5)+32;
    printf("The degree in fahr is %f" , fahr);

    /*Programme Ends*/
}
