#include<stdio.h>

int main ()

{
   float altura, peso, pesoideal;
   char sexo; /* char = caracter alfanumerico so reconhece um caracter */

   printf("\nInforme o sexo M/m - Masculino ou F/f - Feminino: ");
   scanf("%c",&sexo);
   printf("\nInforme sua altura: ");
   scanf("%f",&altura);
   printf("\nInforme seu peso: ");
   scanf("%f",&peso);

   if(sexo == 'F' || sexo == 'f')
   {
      pesoideal = (62.1 * altura) -44.7;
      printf("\nSeu peso = %.2f",peso);
      printf("\nSeu peso ideal = %.2f",pesoideal);
   }
   if(sexo == 'M' || sexo == 'm')
   {
      pesoideal = (72.7 * altura) -58;
      printf("\nSeu peso = %.2f",peso);
      printf("\nSeu peso ideal = %.2f",pesoideal);
   }
   return (0);
}
