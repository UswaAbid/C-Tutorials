#include<stdio.h>
//factorial of n number by using
//recursive function 
//function prototype/declaration 
int fact(int n);

//function call 
int main()
{
  printf("factorial is %d", fact(5));

   return 0 ;
}

//recursive function

  int fact(int n)
{   
  if(n==0)
 {
   return 1;
  }
   

  int factN=fact(n-1) * n ;
  return factN;



}
    