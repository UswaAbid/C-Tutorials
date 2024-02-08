#include<stdio.h>

//declaration, function prototype

 
 void calculatePrice(float value);


//function call

int main()
{
  float value;
  printf("Enter value :");
  
 scanf("%f", &value);

  calculatePrice(value); 
// argument,actual parameter
  return 0;

}
     
   //function definition

 void calculatePrice(float value)
 // parameter or formal parameter 
{
   value=value+(0.18*value);//gst tax
   printf("final price is %f", value);
}









    