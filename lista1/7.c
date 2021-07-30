#include<stdio.h>
int main ()
{
   float q1, v1, total;
   char nome;
   printf("\nNome do vendedor: ");
   scanf("%s",&nome);
   printf("\nQuantidade de carros vendidos: ");
   scanf("%f",&q1);
   printf("\nValor total das vendas: ");
   scanf("%f",&v1);
   total = 500 + (q1 * 50) + (v1 * 1.05);
   printf("\nSalario = %.2f",total);
   return (0);
}
