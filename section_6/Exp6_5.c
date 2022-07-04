//write a program to read 'n' numbers and find the frequency of occurance of each number.
#include<stdio.h>
void main()
{
    int arr[20],i,j,key,count=0,n;
    printf("\nEnter size of array : ");
    scanf("%d",&n);

    printf("\nEnter %d elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        count=0;
        for (j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                if(i!=j)
                {
                    arr[j]=' ';
                }
            }
        }
        if(arr[i]!=' ')
        {
            printf("\n%d is present %d times",arr[i],count);
        }
    }
}
