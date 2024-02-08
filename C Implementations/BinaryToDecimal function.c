#include<stdio.h>

int binaryToDecimal(int n );

int main()
{
   int num=101010;
   printf("%d", binaryToDecimal(num));
   return 0;
}


int binaryToDecimal(int n )
{
  int num=n;
  int decimal_value=0;
  int base=1;
  int temp=num;
  while(temp)
{
  int last_digit=temp%10;
      temp=temp/10;
      decimal_value+= last_digit*base;
      base=base*2;
    
}
   return decimal_value;
}










