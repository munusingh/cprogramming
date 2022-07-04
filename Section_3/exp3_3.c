/*write a program to take a character as input and check whether it is upper case or lower case using conditional operator*/

#include<stdio.h>
void main()
{
    char ch;
    int chr;
     printf("Enter a character  : ");
     scanf("%c" , &ch);
     chr=ch;
     (chr>=97&&chr<=122)?printf("LOWER CASE LETTER"):
     ((chr>=65&&chr<=90)?printf("UPPER CASE LETTER"):printf("This isn't a character from Alphabet series"));

}
