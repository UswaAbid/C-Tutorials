#include<stdio.h>

 /* Array as function argument */
 //1.
void printNumbers(int arr[], int n);

 //2.
int main()
{
  int arr[]={1,2,3,4,5,6};

  printNumbers(arr, 6);
  return 0;
}
 //3.
void printNumbers(int arr[], int n)
{
  for(int i=0; i<n; i++)
{
  printf("%d\t", arr[i]);
}
  printf("\n");
}

/*    arr[] can be written as 
      *arr(in pointer form)      */

