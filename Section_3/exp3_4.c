/*write a program to take a character as input and check whether it is vowel or consonanat using conditional operator*/

#include<stdio.h>
#include<conio.h>

void main()
{
    char c;
     printf("Enter a character : ");
     scanf("%c" ,&c);

        (c==65||c==69||c==73||c==79||c==85||c==97||c==101||c==105||c==111||c==117)?printf("It is a vowel"):printf("it is a consonanat");
          getch();




}
