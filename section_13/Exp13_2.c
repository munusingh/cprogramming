/*Write a program to input ‘n’ numbers (the value of ‘n’ is specified at runtime) in an array and display the largest and largest among them. */
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size,i,j , *ptr ;
    printf("Enter size of array :\n");
    scanf("%d", &size);

    ptr = (int *)malloc(size*sizeof(int));
    printf("Enter %d number of element : \n", size);
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
            {
                if( (ptr[i]) < (ptr[j]))
                    {
                        int temp = (ptr[j]);
                        (ptr[j]) = (ptr[i]);
                        (ptr[i])  =  temp;
                    }
            }
    }
    printf("\n Largest : %d",*(ptr));
    printf("\n Smallest : %d",*(ptr+(size-1)));

}
