#include<stdio.h>

int main()
{
   int idade;
   printf("\nInforme a sua idade: ");
   scanf("%i",&idade);
   if(idade < 5)
   {
      printf("\nSem categoria");
   }
   if(idade >=5 && idade <= 7)
   {
      printf("\nCategoria: Infantil A");
   }
   if(idade >=8 && idade <= 10)
   {
      printf("\nCategoria: Infantil B");
   }
   if(idade >= 11 && idade <= 13)
   {
      printf("\nCategoria: Juvenil A");
   }
   if(idade >= 14 && idade <= 17)
   {
      printf("\nCategoria: Juvenil B");
   }
   if(idade >= 18)
   {
      printf("\nCategoria: Adulto");
   }

   return(0);
}
