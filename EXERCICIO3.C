Questão 3 
- Desenvolva uma função chamada maiorNumero que receba dois números inteiros e retorne o maior
deles. Caso os números sejam iguais, a função deverá retornar qualquer um dos valores.

#include <stdio.h>

int maiorNumero(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d%d", &x, &y);

    printf("Maior numero: %d\n", maiorNumero(x, y));

    return 0;
}

/*
