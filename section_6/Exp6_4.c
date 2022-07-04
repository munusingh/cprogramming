/*Write a program to read ‘n’ real numbers and then insert a new real number at a given position (after insertion, the array size should increase by 1).*/
#include<stdio.h>
void main()
{
    int arr[20],i,position,n,new_num;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter %d elements into the array :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe array elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }


    printf("\nEnter the position where you want to add another number : ");
    scanf("%d",&position);
    printf("\nEnter the new number you want to enter : ");
    scanf("%d",&new_num);

    for(i=n-1;i>=position-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position]=new_num;
    n=n+1;

    printf("\nNow the array size is : %d",n);
    printf("\nAfter entry the numbers are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}

