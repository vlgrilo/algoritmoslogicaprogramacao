#include <stdio.h>

struct Fabrica{
    char nome_produto[50];
    int qt_produzida, qt_vendida, qt_estoque;
};

int main()
{
    int i, maior_estoque=0;
    int maior_produto;
    struct Fabrica f[3];

    for(i=0; i <= 2; i++)
    {
        printf("\nProduto %i\n", i);
        printf("Nome: ");
        scanf("%s", &f[i].nome_produto);
        printf("\nQuantidade produzida: ");
        scanf("%i", &f[i].qt_produzida);
        printf("\nQuantidade vendida: ");
        scanf("%i", &f[i].qt_vendida);

        f[i].qt_estoque = f[i].qt_produzida - f[i].qt_vendida;
    }

    for (i=0; i <= 2; i++)
    {
        if (f[i].qt_estoque < 50)
        {
            printf("\nNome Produto: %s", f[i].nome_produto);
            printf("\nQuantidade estoque: %i \t Produto com menos de 50 itens no estoque.\n", f[i].qt_estoque);
        } else {
            printf("\nNome Produto: %s", f[i].nome_produto);
            printf("\nQuantidade estoque: %i\n", f[i].qt_estoque);
        }

        if (f[i].qt_estoque > maior_estoque)
        {
            maior_estoque = f[i].qt_estoque;
            maior_produto = i;
        }
    }

    printf("\n\n[ Produto com maior estoque ]\nNome Produto: %s\nQuantidade estoque: %i \n", f[maior_produto].nome_produto, maior_estoque);

    return 0;
}
