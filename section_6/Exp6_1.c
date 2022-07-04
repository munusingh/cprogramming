/*Write a program to input ‘n’ numbers and sort them in descending order*/
#include<stdio.h>
void main()
{
    int arr[100],i,j,n,temp;
    printf("Enter the number of numbers you want : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter %d number : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nBefore sorting the numbers are : \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    printf("\nAfter sorting the numbers are : \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }

}
