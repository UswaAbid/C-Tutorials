#include<stdio.h>
//Calculating fabnocci sequence of n

//function prototype/declaration 
int fab(int n);

//function call 
int main()
{
   printf("fab of n is %d", fab(6));
   return 0 ;
}

//recursive function

  
  int fab(int n)
{
   if(n==0){
   return 0;
}
  if(n==1){
  return 1;
}
  int fabNm1=fab(n-1);
  int fabNm2=fab(n-2);
  int fabN=fabNm1+fabNm2;
  
  return fabN;
}
    