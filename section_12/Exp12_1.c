/*An item is represented by the following attributes:
  -Either a model number(string) or an item code(string)
  -Name (string)
  -price(float)
  Write a program using union to read the information for 5items from the keyboard and print the same on the screen.
 */

 #include<stdio.h>

 union Model
 {
     char modelNumber[30];
     char itemcode[30];
 };

 struct product
 {
     union Model m;
     char name[30];
     float price;
 };

 void main()
 {

  struct product p;
  int choice;
  printf("Enter model number or an item\npress 1 for model number\npress 2 for item code\n");
  if(choice==1)
  {
   printf("Enter Model number of the product :\n");
   scanf("%s",&p.m.modelNumber);
  }

  else
  {
     printf("Enter item number of the product :\n");
     scanf("%s",&p.m.itemcode);
  }

  printf("Enter the Name :");
  scanf("%s", p.name);

  printf("Enter the price of the product :");
  scanf("%f",&p.price);

  printf("-------------------------------------------------------\n");
  if(choice==1)
  {
      printf("Enter the Model number of the product:\n",p.m.modelNumber);
  }
  else
  {
      printf("The item code of the product is %s \n",p.m.itemcode);

  }
  printf("The Name of the customer: ");
  puts(p.name);
  printf("The price of the product : %f", p.price);
  printf("\n--------------------------------------------------------\n");
 }









