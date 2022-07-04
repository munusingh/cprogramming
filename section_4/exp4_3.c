/*Admission to professional course is subject to the any one of the following conditions:
  a) Marks in mathematics>=60 & in physics>=50 marks in chemistry >=40
  b) Total in all three subject>=200
  write a program that takes as input the marks in three subjects and displays "Admitted" if the student is admitted else displays "NOT ADMITTED".*/

#include<stdio.h>
void main()
{
    float M,P,C,MPC,MP;
    /*M,P,c denotes the marks secured in mathematics,physics and chemistry respectively MPC represents total marks in three subjects and MP is total mark in maths and physics*/

    printf("Enter marks of mathematics : ");
    scanf("%f" ,&M);
    printf("Enter marks of physics : ");
    scanf("%f" ,&P);
    printf("Enter marks of chemistry : ");
    scanf("%f" ,&C);
    MPC = M+P+C;
    MP =M+P;
  if((M>=60) && (P>=40) &&(C>=40) && (MPC>=200 || (MP>=150)))
    {
        printf("\nAdmitted\n");
    }
  else
     {
         printf("\nNot Admitted\n");
     }

}

