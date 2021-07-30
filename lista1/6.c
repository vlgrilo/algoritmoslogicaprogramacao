#include<stdio.h>

int main ()

{
   float h1, f1, r1, total;
   printf("\nInforme quantidade de hamburger: ");
   scanf("%f",&h1);
   printf("\nInforme quantidade de fritas: ");
   scanf("%f",&f1);
   printf("\nInforme quantidade de refrigerante: ");
   scanf("%f",&r1);
   total = (3*h1) + (2.50*f1) + (1*r1);
   printf("\nConta final: %.2f",total);
   return (0);
}
