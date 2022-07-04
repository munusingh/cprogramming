/*Write a program that will count the number of occurrences of a specific character in a given line of text.*/
#include<stdio.h>
void main()
{
    char string[50],letter;
    int i,count=0;
    puts("\nEnter a sentence : ");
    gets(string);
    puts("\nEnter a character to find its number of occurences : ");
    letter=getchar();
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==letter)
        {
            count++;
        }
    }
    printf("\n%c is present %d times in the sentence",letter,count);
}
