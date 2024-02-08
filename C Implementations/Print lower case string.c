#include<stdio.h>

/*  */

int main()
{
   char str[50];
   printf("Enter lower case string: ");
   scanf("%[a-z]", str);
   printf("%s", str);
   return 0;
}