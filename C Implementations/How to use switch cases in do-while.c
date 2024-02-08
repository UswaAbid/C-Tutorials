#include<stdio.h>
int main() 
{ 
    int value1, value2;
     char c;
     printf("enter value1 and value2:");
     scanf("%d %c %d", &value1,&c, &value2);
      
    do
    {
     
      
     
    switch(c)
    {
    case '+' :
    
    printf("%d\n",value1+value2);
    break;
   
    case'-':
    
    printf("%d\n",value1-value2);
    break;
    
    case '*':
    
    printf("%d\n",value1*value2);
    break;
   
    case '/':
    
    if(value2==0)
    printf("infinity");
    else
    printf("%d\n",value1/value2);
    break;
   
    case '%':
    
    printf("%d\n",value1%value2);
    break;
    
    default:
    printf("invalid");
    break;
    }
    }
   
 while(value1==0 && value2==0);
return 0;
}