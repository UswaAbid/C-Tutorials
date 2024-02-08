#include<stdio.h>

 /*Array of 3 items with gst 18% */

int main()
{
  float price[3];
 
  printf("Enter 3 prices:");
  scanf("%f",&price[0]);
  scanf("%f",&price[1]);
  scanf("%f",&price[2]);

 printf("Total price 0 = %f\n", price[0]+(0.18*price[0]));
 printf("Total price 1 = %f\n", price[1]+(0.18*price[1]));
 printf("Total price 2 = %f\n", price[2]+(0.18*price[2]));


 return 0;

}


    