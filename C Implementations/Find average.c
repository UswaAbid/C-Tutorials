#include<stdio.h>
int main()
{
  int num;
  int avg;
  int sum=0;
  int count=0;
 printf("Enter number and 0 to exit:");

  do
  {
   scanf("%d", &num);
   sum=sum+num;
   count++;
   
   }
   while(num!=0);
   int c=count-1;
   avg=sum/c;
   printf("Average is %d",avg);


   return 0;
}
    