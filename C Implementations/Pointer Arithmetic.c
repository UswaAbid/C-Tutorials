#include<stdio.h>

 /*Pointer Arithmetic */

int main()
{ 
  int age= 22;
  int *ptr= &age;
  
 printf("ptr=%u\n", ptr);
 ptr++;
 printf("ptr=%u\n", ptr);
 ptr--;
 printf("ptr=%u\n", ptr);
  
 return 0;

}
/* ptr++ means 4 bytes added incase of 
   int, 1 byte added incase of char, 
   4 byte added incase of float, 8 bytes
   incase of double */
    