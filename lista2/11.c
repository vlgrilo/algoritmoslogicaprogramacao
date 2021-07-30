#include<stdio.h>
int main()
{
   int vetor[10], i, mp=0, mi=0, sp=0, si=0, maior=0, menor=1000000;
   float rp, ri, media, soma=0;
   for(i=0;i<=9;i++)
   {
       printf("\nInforme um numero: ");
       scanf("%i",&vetor[i]);
       fflush(stdin);
       soma = soma + vetor[i];
       media = soma/10;
       if (vetor[i]%2==0)
       {

           sp = sp + vetor[i];
           mp = mp + 1;
           rp = sp/mp;
           if (vetor[i] > maior )
           {
               maior = vetor[i];
           }
       }
       else
       {
           si = si + vetor[i];
           mi = mi + 1;
           ri = si/mi;
           if (vetor[i] < menor)
           {
               menor = vetor[i];
           }
       }
   }
   printf("\nSoma de todos os numeros: %.0f",soma);
   printf("\nMedia de todos os numeros: %.2f\n",media);
   printf("\nQuantidade de numeros pares: %i",mp);
   printf("\nSoma dos pares: %i",sp);
   printf("\nMedia dos numeros pares: %.2f",rp);
   printf("\nMaior numero par: %i\n",maior);
   printf("\nQuantidade de numeros impares: %i",mi);
   printf("\nSoma dos impares: %i",si);
   printf("\nMedia dos numeros impares: %.2f",ri);
   printf("\nMenor numero impar: %i\n",menor);
   return(0);
}
