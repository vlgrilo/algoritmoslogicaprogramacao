#include<stdio.h>

int main()

{
    int fatorial, resposta;
    printf("\nInforme o numero: ");
    scanf("%i", &fatorial);
    resposta = 1;

    for ( ; fatorial >= 1; --fatorial)
    {
        resposta *= fatorial; // mesmo que resposta = resposta * fatorial
    }
    printf("\nO valor fatorial e: %i", resposta);

    return (0);
}
