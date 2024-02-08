#include<stdio.h>

/* Ascending order */

int main()
{
   int a[5]={5,7,3,2,6};

   int temp;
   for(int i=0; i<=4; i++)
   {
    for(int j=0; j<4; j++)
     {
       if(a[j]>a[j+1])
      {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
      }
    }
  }
   for(int i=0; i<=4; i++)
   printf("%d\t", a[i]);
   return 0 ;
}

   