#include<stdio.h>
int main ()
{
    int i,tabu,resp;
    printf("\nVer tabuada de: ");
    scanf("%i",&tabu);
    for (i = 1; i<= 10; i++)
    {
        resp = tabu * i;
        printf("%d x %d = %d\n", tabu,i,resp);
    }
    return (0);
}
