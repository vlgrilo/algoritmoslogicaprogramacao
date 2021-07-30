#include<stdio.h>

int main ()

{
   float base, altura, area;
   printf("\nInforme a base: ");
   scanf("%f", &base);
   printf("\nInforme a altura: ");
   scanf("%f", &altura);
   area = (base * altura) / 2;
   printf("\nArea = %.2f", area);
   return (0);
}

