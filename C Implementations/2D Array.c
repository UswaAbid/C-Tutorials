#include<stdio.h>

/*Array for 2 students & subjects are 3*/
 
int main()
{
   int marks[2][3];
  
   marks[0][0]= 90;
   marks[0][1]= 89;
   marks[0][2]= 70;

   marks[1][0]= 87;
   marks[1][1]= 96;
   marks[1][2]= 78;


  printf("marks of student 1 are :phy=%d,chem=%d,  math=%d\n", marks[0][0],marks[0][1],marks[0][2]);

  printf("marks of student 2 are :phy=%d, chem=%d, math=%d\n", marks[1][0],marks[1][1],marks[1][2]);
  return 0;
}