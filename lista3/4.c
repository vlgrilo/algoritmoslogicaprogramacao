#include<stdio.h>

int main()
{
    float vetor[4],soma,media;
    int i;
    soma=0;
    for(i=0;i<=3;i++)
    {
        printf("Informe a %i nota: ",i + 1);
        scanf("%f",&vetor[i]);
        fflush(stdin);
        soma = soma + vetor[i];
        media = soma/4;
    }
    printf("\nSoma das 4 notas: %.2f",soma);
    printf("\nMedia: %.2f",media);
    if (media < 3)
    {
        printf("\nReprovado");
    }
    if (media >= 3 && media < 7)
    {
        printf("\nExame");
    }
    if (media >= 7)
    {
        printf("\nAprovado");
    }
    printf("\n");
    return(0);
}
