/*Write a program to read ‘n’ characters and then delete the duplicate characters.*/
#include<stdio.h>

void main()
{
    int arr[20],i,j,n;

    printf("\nEnter number of elements you want in array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter %d elements into the array :",i+1);
        scanf("%d",&arr[i]);
    }


    printf("\nAfter deleting the duplicate numbers the elements are : ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=arr[j+1];
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%2d",arr[i]);
    }

}


