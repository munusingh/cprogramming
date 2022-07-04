/*An employee is represented by the following attributes:
-Employee ID
-Name
-Date of joining(DD MM YY)
-salary
write  program to read the information of five employees from the keyboard and write it in a file "Employeesinfo.txt",and again read the same information
from the file"Employeesinfo.txt" and display it on the screen.*/
#include <stdio.h>
#include <stdlib.h>
struct date
{
    int dd;
    int mm;
    int yy;
};
struct employee
{
    int Id;
    char name[30];
    struct date Date;
    float salary;
};
void main()
{
    char c;
    struct employee emp[5];
    printf("Enter Employee Details (For 5 Employees)\n");
    for (int i = 0; i < 5; i++)
    {
        printf("For Employee %d : \n", i + 1);
        printf("Employee ID :\n");
        scanf("%d", &emp[i].Id);
        printf("\nName : ");
        scanf("%s",emp[i].name);
        printf("\nJoining Date : ");
        scanf("%d %d %d", &emp[i].Date.dd,&emp[i].Date.mm,&emp[i].Date.yy);
        printf("Salary : ");
        scanf("%f", &emp[i].salary);
    }
    FILE *fp;
    fp = fopen("EmployeesInfo.txt", "w");

    if(fp==NULL)
    {
        printf("File can't be created .");
        exit(0);
    }
    else
    {
      printf("\nFile successfully created.");
    }
    if(ferror(fp))
    {
        printf("Can't write in the file.");
        exit(0);
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(fp, "Details of Employee %d : \n", i + 1);
        fprintf(fp, "Employee Id : %d\nName : %s\nJoining Date : %d %d %d\nSalary : %.2f", emp[i].Id, emp[i].name, emp[i].Date.dd,emp[i].Date.mm,emp[i].Date.yy, emp[i].salary);
    }
    fclose(fp);

    fp = fopen("EmployeesInfo.txt","r");
    c = fgetc(fp);

    while(c != EOF)
    {
        printf("%c",c);
        c = fgetc(fp);
    }
    fclose(fp);
}

