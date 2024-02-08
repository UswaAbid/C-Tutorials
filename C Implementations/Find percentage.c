#include<stdio.h>
int main() 
{ 
    int a, b, c, sum=0;
    
    float percentage;
    
    printf("Enter maths marks:");
    scanf("%d", &a);
    
    printf("Enter phy marks:");
    scanf("%d", &b);
    
    printf("Enter eng marks:");
    scanf("%d", &c);
     
    sum=a+b+c;
    
    percentage=(sum*100)/300;
    
    printf("percentage is %f", percentage);
     
    
    
    
    return 0;
}