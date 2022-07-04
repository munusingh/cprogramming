/*Write a program to input a number and check whether it is Armstrong or not
(An Armstrong number is an integer such that the sum of the cubes of its digits is equal
 to the number itself. For example, 371 is an Armstrong number since 33+ 73+ 13= 371).*/
 #include<stdio.h>
 void main()
 {
    int n,num,rem,result=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    num=n;
    while(n != 0)
    {
        rem=n%10;
        result=result+ (rem * rem * rem);
        n=n/10;
    }

    if(num ==result)
    {
        printf("\n\n%d is an armstrong number",num);
    }
    else
    {
        printf("\n\n%d is not an armstrong number",num);
    }

 }

