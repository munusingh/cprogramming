/*write a menu-based program that takes two liner arrays A and B as input and display the results of the following operation based on user's choice.

1.Traverse A
2.Traverse B.
3.Insert a new element in A (after insertion, the size of A should increase by 1).
4.Insert a new element in B (after insertion, the size of B should increase by 1).
5.Delete an element from A.
6.Delete an element from B.
7.Search an element in A.
8.Search an element in B.
9.Sort A (in ascending order).
10.Sort B (in ascending order).
11.Merge A and B to form a new array C.
*/
#include<stdio.h>

void main()
{
    int i,j,a,n1,n2,a1[20], a2[20], ch , pos , dig , found ,k, merge[40];

    printf("Enter no. of elements you want in 1st array - ");
    scanf("%d",&n1);

    printf("Enter Array elements - ");
    for(i=0;i<n1;i++)
    {
        scanf("%2d",&a1[i]);
        merge[i]=a1[i];
    }
    k = i ;
    printf("Enter no. of elements you want in 2nd array - ");
    scanf("%d",&n2);

    printf("Enter Array elements - ");
    for(i=0;i<n2;i++)
    {
        scanf("%2d",&a2[i]);
        merge[k]=a2[i];
        k++;
    }
    printf("Give value to ch according to qn -  ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("Traverse of 1st array - ");
            for(i=0;i<n1;i++)
            {
                printf("%2d",a1[i]);
            }
            break ;

        case 2:
            printf("Traverse of 2nd array -");
            for(i=0;i<n2;i++)
            {
                printf("%2d",a2[i]);
            }
            break ;
            //3.Insert a new element in A
        case 3:
            printf("Enter Position and Digit -");
            scanf("%d%d", &pos , &dig);
            for(i=n1-1;i>=pos-1;i--)
            {
                a1[i+1] = a1[i];
            }
            a1[pos]=dig;
            printf("Revised array - ");
            for(i=0;i<=n1;i++)
            {
                printf("%2d", a1[i]);
            }
            break ;
        case 4:
            printf("Enter Position and Digit -");
            scanf("%d%d", &pos , &dig);
            for(i=n2-1;i>=pos-1;i--)
            {
                a2[i+1] = a2[i];
            }
            a1[pos]=dig;
            printf("Revised array - ");
            for(i=0;i<=n2;i++)
            {
                printf("%2d", a2[i]);
            }
            break ;
        case 5:
            printf("Position where to delete -");
            scanf("%d",&pos);
            if(pos<=0 || pos>n1)
            {
                printf("Deletion is incomplete .");
            }
            else
            {
                for(i=pos-1;i<n1-1;i++)
                {
                    a1[i]=a1[i+1];
                }
            }
            n1--;
            for(i=0;i<n1;i++)
            {
                printf("%2d", a1[i]);
            }
            break ;
        case 6:
            printf("Position where to delete -");
            scanf("%d",&pos);
            if(pos<=0 || pos>n1)
            {
                printf("Deletion is incomplete .");
            }
            else
            {
                for(i=pos-1;i<n2-1;i++)
                {
                    a2[i]=a2[i+1];
                }
                n2--;
            }
            for(i=0;i<n2;i++)
            {
                printf("%2d", a2[i]);
            }
            break ;
        case 7:
            printf("Enter element to search - ");
            scanf("%d",&dig);
            found = 0;
            for(i=0;i<n1;i++)
            {
                if(a1[i]==dig)
                {
                    found=1;
                    break;
                }
            }
            if(found==1)
            {
                printf("%d is at position %d .",dig , i+1);
            }
            else
            {
                printf("%d is not found in array.",dig);
            }
            break;
        case 8:
            printf("Enter element to search - ");
            scanf("%d",&dig);
            found = 0;
            for(i=0;i<n2;i++)
            {
                if(a2[i]==dig)
                {
                    found=1;
                    break;
                }
            }
            if(found==1)
            {
                printf("%d is at position  %d .",dig , i+1);
            }
            else
            {
                printf("%d is not found in array.",dig);
            }
            break;
        case 9:
            for(i=0;i<n1;i++)
            {
               for(j=i+1;j<n1;j++)
               {
                   if(a1[i]>a1[j])
                   {
                       a=a1[j];
                       a1[j]=a1[i];
                       a1[i]=a;
                   }
               }
            }
            printf("Array in ascending order - ");
            for(i=0;i<n1;i++)
            {
                printf("%4d",a1[i]);
            }
            break;
        case 10:
            for(i=0;i<n2;i++)
            {
               for(j=i+1;j<n2;j++)
               {
                   if(a2[i]>a2[j])
                   {
                       a=a2[j];
                       a2[j]=a2[i];
                       a2[i]=a;
                   }
               }
            }
            printf("Array in ascending order - ");
            for(i=0;i<n2;i++)
            {
                printf("%4d",a2[i]);
            }
            break;
        case 11:
            printf("The new array after merging - ");
            for(i=0;i<k;i++)
            {
                printf("%4d",merge[i]);
            }
            break;
        default:
            printf("choose correct option");
    }

}
