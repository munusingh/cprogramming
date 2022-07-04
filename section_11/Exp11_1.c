/*A student is represented by the following attributes:
− Roll number (int)
− Name (string)
− Mark in subject 1 (float)
− Mark in subject 2 (float)
− Mark in subject 3 (float)
Write a program using structure to create data for 50 students and then find the total marks for each student and average mark of all students.*/
#include<stdio.h>
struct Student
{
    int rollNumber;
    char name[20];
    float subject1;
    float subject2;
    float subject3;
};

void main()
{
    struct Student st[50];
    int i;
    float personalTotal,totalMarks=0,average;
    //printf("\nEnter data as per asked : \n");
    for(i=0;i<3;i++)
    {
        printf("\nRoll Number : ");
        scanf("%d",&st[i].rollNumber);
        printf("Name : ");
        scanf("%s",st[i].name);
        printf("Subjet 1 :");
        scanf("%f",&st[i].subject1);
        printf("Subjet 2 :");
        scanf("%f",&st[i].subject2);
        printf("Subjet 3 :");
        scanf("%f",&st[i].subject3);
    }

    for(i=0;i<3;i++)
    {
        printf("\nRoll Number : %d",st[i].rollNumber);
        printf("\nName : %s",st[i].name);
        printf("\nSubject 1 : %f",st[i].subject1);
        printf("\nSubject 2 : %f",st[i].subject2);
        printf("\nSubject 3 : %f",st[i].subject3);
        personalTotal=st[i].subject1+st[i].subject2+st[i].subject3;
        printf("\nTotal marks secured : %f",personalTotal);
        totalMarks=totalMarks+personalTotal;
    }
    average=totalMarks/i;
    printf("\nAverage marks : %f",average);
}
