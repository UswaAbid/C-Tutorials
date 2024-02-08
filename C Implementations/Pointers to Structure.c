#include <stdio.h>
#include <string.h>

struct student {

   char name[100];
   int rollno;
   float cgpa;
};

  int main()
{
 /* struct student s1;
   strcpy(s1.name, "Afeera");
   s1.rollno = 227704;
   s1.cgpa = 4.0; */

  struct student s1={"Afeera", 227704, 4.0};

  struct student *ptr= &s1;
  printf("student rollno = %d", (*ptr). rollno);
 
  return 0 ;


}





    