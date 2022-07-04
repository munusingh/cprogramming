/*write a number program to input a number and check whether it is a palindrome or not*/

 #include<stdio.h>

    void main()
    {
        int num,temp,sum=0,r;
        printf("Enter a number =");
        scanf("%d",&num);
        temp=num;
        while(num>0)

        {
            r=(num%10);
            sum=(sum*10)+r;
            num=(num/10);
        }
        if(temp==sum)
        {
            printf("\npalindrome number");
        }
        else
        {
            printf("\nNot a palindrome number");
        }
    }

