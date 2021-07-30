#include<stdio.h>

int main ()

{
   int c, f;
   printf("\nTemperatura em C: ");
   scanf("%i",&c);
   f = (9 * c / 5 ) + 32;
   printf("\nTemperatura em F: %i" ,f);
   return (0);
}
