#include<stdio.h>

//declaration, function prototype

 int sum(int a, int b);


//function call

int main()
{
  int a, b;
  printf("Enter first number :");
  
 scanf("%d", &a);
printf("Enter second number :");
 scanf("%d", &b);
 
int s=sum(a, b);
printf("sum is %d", s);

return 0;

}
     
   //function definition
 

 int sum(int a, int b)
{
   return a+b;
}