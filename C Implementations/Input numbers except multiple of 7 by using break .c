#include<stdio.h>
int main()
{
  int n;
 do
{
  printf("Enter number :");
  scanf("%d",&n); 
  printf("%d \n", n);

 if(n%7==0 )//n is multiple of 7
 break;
 

}while(1);
printf("number is multiple of 7, Thank you");
return 0;








}