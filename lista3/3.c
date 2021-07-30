#include<stdio.h>

int main()
{
    float vetor[10],soma,media;
    int i;
    soma=0.0;
    for(i=0;i<=9;i++)
    {
        printf("Informe um numero: ");
        scanf("%f",&vetor[i]);
        fflush(stdin);
        soma = soma + vetor[i];
    }
    printf("\nSoma dos valores do vetor = %.0f",soma);
    media = soma/10;
    printf("\nMedia dos 10 numeros = %.2f\n",media);
    return(0);
}
