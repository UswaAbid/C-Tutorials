#include<stdio.h>

/* increment 1 at odd position & 2 at
  even position */

int main()
{

   int arr[5]={1,2,3,4,5};
   for(int i=0; i<=4; i++)
  {
     if(arr[i]%2==0)
     printf("\nEven becomes %d", arr[i]+=2);
   
     else
     printf("\nOdd becomes %d", arr[i]+=1);

   
  }
     return 0;
}