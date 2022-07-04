/*Using pointers, write a function that receives a character string and a character as arguments and deletes all occurrence of this character in the string. The function should return the corrected string with no holes.*/
#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<string.h>
char* DeleteDuplicate(char s[],char ch)
 {
    int i,j;
    char t[100];//t is new string
    char *u=t;
    for(i=0,j=0;s[i]!=0;i++)
    {
       if(s[i]!=ch)
       {
           t[j]=s[i];
           j++;
       }
    }
    t[j]=0;
    return u;
}
void main()
{
    char string[100],ch;
    char *r;
    printf("Enter The String\n");
    scanf("%s",string);
    printf("Enter The Character : ");
    ch=getche();
    r=DeleteDuplicate(string,ch);
    puts(r);
}
