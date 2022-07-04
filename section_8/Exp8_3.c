/*Write a program that takes as input a string and two numbers n1 and n2 and find the substring between these two positions. For example, let the string is “Welcome” and the numbers are n1=2 and n2=5 then the substring will be: “lcom”.*/
#include<stdio.h>
#include<string.h>

void main()
{
  int n1,n2,i,l;
  char string[20];
  puts("\nEnter the text : ");
  gets(string);
  printf("Enter two numbers to find substring : ");
  scanf("%d %d",&n1,&n2);

  l=strlen(string);

  if(n1<l && n2<l && n1<n2)
  {
      printf("\nThe substring between %d and %d is\n :", n1,n2);

      for(i=n1;i<n2;i++)
      {
          printf("%c",string[i]);
      }
  }
   else
   {
       printf("\nEnter a valid position :");
   }
}



