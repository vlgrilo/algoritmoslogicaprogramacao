#include<stdio.h>



int main()
{
   float salbruto, salliquido;
   printf("\nInforme o salario bruto: ");
   scanf("%f",&salbruto);
   salliquido = salbruto * 1.25;
   printf("\nSalario liquido = %.2f",salliquido);
   return(0);
}
