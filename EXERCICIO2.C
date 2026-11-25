#include <stdio.h>

int calcularDobro(int numero)
{
    return numero * 2;
}

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Dobro: %d\n", calcularDobro(n));

    return 0;
}

/*
PROCESSO:
1. Recebe um número.
2. Multiplica por 2.
3. Retorna o resultado.
*/
