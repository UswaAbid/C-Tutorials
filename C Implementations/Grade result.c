#include<stdio.h>
int main() 
{
   int a,b,c;
   printf("Enter subject marks:");
   scanf("%d\n%d\n%d",&a, &b, &c);

    int sum=a+b+c;
    printf("sum of marks is:");
    scanf("%d",&sum);
    
    int per=sum/150*100;
    printf("percentage is:");
    scanf("%.2d",&per);
    
    if(per>=90)
    printf("A+");
    
    else if(per>=80 && per<90)
   printf("A");
       
    else if(per>=70 && per<80)
    printf("B");
   
     else
    printf("C");
    return 0;
    getchar();
} 
       