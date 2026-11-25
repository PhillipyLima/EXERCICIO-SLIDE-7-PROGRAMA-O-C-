#include <stdio.h>

void mostrarTabuada(int n)
{
    int i;

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

int main()
{
    int numero;

    scanf("%d",&numero);

    mostrarTabuada(numero);

    return 0;
}

