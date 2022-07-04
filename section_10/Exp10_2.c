/*Write a program using function to take a string as input and then convert all lowercase characters to its uppercase equivalent.*/
#include<stdio.h>
#include<string.h>

void ConvertToUppercase(char []);//function prototype
void main()
{
    char sentence[10];
    printf("\nEnter a sentence : ");
    gets(sentence);
    ConvertToUppercase(sentence);//function call

}

//function defination

void ConvertToUppercase(char sentence[])
{
    int i;
    for(i=0;sentence[i]!='\0';i++)
    {
        if(sentence[i]>='a' && sentence[i]<='z')
        {
            sentence[i]=sentence[i]-32;
        }
    }
    puts("\nThe uppercase sentence is :");
    puts(sentence);
}
