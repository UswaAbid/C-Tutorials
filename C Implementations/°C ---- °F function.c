#include<stdio.h>
//Converting °C into °F

//function prototype/declaration 
float convertTemp(float celsius);

//function call 
int main()
{
  
  printf("fahrenheit is %f", convertTemp(0));

   return 0 ;
}

//recursive function

  float convertTemp(float celsius)
{   
  
float fahrenheit = celsius * (9/5) + 32;

return fahrenheit ;
}
    