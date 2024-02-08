#include<stdio.h>

/* Print GCD (greatest common factor) */

int gcd(int a, int b);

int main ()
{
  int i, j;
  printf("Enter numbers:");
  scanf("%d %d", &i, &j);
  
  printf("GCD of %d & %d is %d ", i, j, gcd(i, j));
  
  return 0;
}
  int gcd(int a, int b)
{
  int r;
  r=a%b;
  if(r==0)
  return b;
  else
  return gcd(b, r);
}