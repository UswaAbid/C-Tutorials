#include<stdio.h>

/* Multiplication of matrices by 2D array  */

int main ()
{
  int row1,col1,row2, col2;
  printf("Enter number of rows for matrix A:");
  
   scanf("%d", &row1);

 printf("Enter number of columns for matrix A:");
  
   scanf("%d", &col1);

  printf("Enter number of rows for matrix B:");
  
   scanf("%d", &row2);
 
 printf("Enter number of columns for matrix B:");
  
   scanf("%d", &col2);
   
   if(col1==row2)
{
  printf("Compatible for multiplication!\n ");
}
 else
{
 printf("NOT Compatible for multiplication! ");
}
  
int A[row1][col1], B[row2][col2], C[row1][col2];
{
printf(" The values of matrix A are:\n");
for(int row1=0; row1<2; row1++)
{
for(int col1=0; col1<3; col1++)
{
  scanf("%d",&A[row1][col1]);
}
  printf("\n");
}
 printf(" The values of matrix B are:\n");
for(int row2=0; row2<3; row2++)
{
for(int col2=0; col2<2; col2++)
{
  scanf("%d",&B[row2][col2]);
}
  printf("\n");
}

printf(" Product of matrix A & B is:\n");
for(int i=0; i<2; i++)
{
for(int j=0; j<2; j++)
{
   C[i][j]=0;
 
for(int r=0; r<3; r++)
{
  C[i][j] += A[i][r] * B[r][j];
}
  printf("%d\t",C[i][j]);
}
  printf("\n"); 
}
return 0;
}
}
