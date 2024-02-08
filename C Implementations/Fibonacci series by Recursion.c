#include<stdio.h>

/* Print Fibonacci series by recursion */

int fib(int n);

int main ()
{
  int i, j;
  printf("Enter number of terms:");
  scanf("%d", &i);
  if(i<0)
  {
     printf("Error-Number of terms can't be negative");
 }   
  else
  printf("Fibonacci series of %d terms is:\n ", i);
  for(int j=1; j<=i; ++j)
  printf("%d\t", fib(j));
  return 0;
}
  int fib(int n)
{
  if(n<=2)
  return 1;
  else
  return(fib(n-1)+fib(n-2));

}