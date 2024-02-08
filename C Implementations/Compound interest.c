# include<stdio.h>
int main(){
	
int p,r,n;
printf("enter principle amount:");     
scanf("%d",&p);
 

printf("enter rate of interest:");
scanf("%d",&r);


printf("enter number of times interest is compounded per year: ");
scanf("%d",&n);

int c= p*pow((1+r/100),n)-p;
printf("compound interest is %d",c);



	return 0;
}
