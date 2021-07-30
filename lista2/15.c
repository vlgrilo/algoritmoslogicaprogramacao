#include <stdio.h>

struct Contas {
    int numero;
    float saldo;
};

int main()
{
    int i, n=0;
    int calc;
    float p;

    struct Contas c[10];

    printf("\nInforme 10 contas e seus saldos.\n");

    for (i=0; i <= 9; i++)
    {
        printf("\nNumero: ");
        scanf("%i", &c[i].numero);
        if (c[i].numero < 0)
        {
            return 0;
        }
        printf("Saldo: ");
        scanf("%f", &c[i].saldo);
        if (c[i].saldo < 0)
        {
            n += 1;
        }
    }

    calc = (n * 10);
    p = (calc * 0.1);

    for (i=0; i <= 9; i++)
    {
        if (c[i].saldo < 0)
        {
            printf("\n[Conta %i]\nNumero da conta: %i \nSaldo: %0.2f \t [Saldo Negativo]\n", i, c[i].numero, c[i].saldo);
        } else {
            printf("\n[Conta %i]\nNumero da conta: %i \nSaldo: %0.2f \t [Saldo Positivo]\n", i, c[i].numero, c[i].saldo);
        }
    }

    printf("\n\nPercentual de pessoas com saldo negativo: %1.0f%\n", p);

    return 0;
}
