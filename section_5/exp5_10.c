/*Write a program that takes an integer‘n’ as input and prints the Fibonacci series
up to ‘n’.(Hint: Fibonacci series: 1 1 2 3 5 8 13 21 ...)*/

# include <stdio.h>
# include <conio.h>
void main()
{
int n, i, fib1=0, fib2=1, fib;
printf("\n\nEnter the value of n: ");
scanf("%d", &n);
for(i=1; i<=n-2; i++)
{
fib = fib1+fib2;
fib1 = fib2;
fib2 = fib;
}
printf("\nThe %dth Fibonacci number is: %d", n, fib);
getch();
}
