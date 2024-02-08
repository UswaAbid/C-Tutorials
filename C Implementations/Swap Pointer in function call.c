#include<stdio.h>

 
void swap(int a, int b);
void _swap(int *a, int *b);
 
int main()
{

  int x=3, y=5;
  _swap(&x, &y);
  printf("x=%d & y=%d\n", x, y);
  return 0 ;
}
   //call by value
 void swap(int a, int b)
{
   int c=a;
       a=b;
       b=c;
  printf("a=%d & b=%d\n", a, b);
}

  //call by reference 
 void _swap(int *a, int*b)
{
   int c=*a;
       *a=*b;
       *b=c; 
}


