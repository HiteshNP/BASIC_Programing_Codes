#include <stdio.h>

int main ()
{
   char grade;
   printf("Enter your grade: ");
   scanf("%c",&grade);
   switch(grade)
   {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
          printf("Keep it up!\n");
          break;
      case 'C' :
         printf("Well done!\n" );
         break;
      case 'D' :
         printf("You passed!\n" );
         break;
      case 'F' :
         printf("Better luck next time\n" );
         break;
      default :
         printf("Invalid grade\n" );
   }
      return 0;
}
