#include<stdio.h>
int main() 
{ 
    int age;
    printf("\nEnter your age to display and -1 to quit");
    
    scanf("%d",&age);
    
    while(age!=-1)
    {
    

   printf("\nEnter your age:");

printf("\nyour age is %d", age);
   scanf("%d",&age);
    
    
    }
   return 0;
}