/*Write a program that reads two strings and then compares them without using the strcmp()function.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int i,l1,l2;
    char st1[20],st2[20];
    puts("Enter st1 : ");
    gets(st1);
    puts("Enter st2 : ");
    gets(st2);
    l1=strlen(st1);
    l2=strlen(st2);

    if(l1!=l2)
    {
        puts("\n The strings are not equal");
    }
    else
    {
        for(i=0;st1[i]!='\0' && st2[i]!='\0';i++)
        {
            if(st1[i]==st2[i])
            {
                continue;
            }
            else
            {
                puts("\nThe srings are not equal");
                exit(0);
            }
        }
        puts("\nThe srings are equal");
    }
}


