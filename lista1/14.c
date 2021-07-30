#include<stdio.h>

int main()
{
   float n1, n2, media;
   printf("\nInforme a nota 1: ");
   scanf("%f",&n1);
   printf("\nInforme a nota 2: ");
   scanf("%f",&n2);
   media = (n1*2 + n2*3)/(2+3);
   printf("\nMedia = %.1f",media);

   if(media >= 5)
   {
      printf("\n\nAluno Aprovado");
   }

   if(media < 5)
   {
      printf("\n\nAluno Reprovado");
   }
   return(0);
}
