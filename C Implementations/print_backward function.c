#include <stdio.h>


void print_backward()
{
   char character;
   scanf("%c", &character);
   if(character != '.' )
   
   {
     print_backward();
     printf("%c", character);
   }

}
   int main ()
 {
  char c;
  printf("Enter characters: ");
  scanf("%c", &c);
  print_backward();
  return 0 ;


}








