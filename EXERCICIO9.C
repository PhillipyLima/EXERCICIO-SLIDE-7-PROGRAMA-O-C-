Questão 9 

- Crie uma função chamada mostrarTabuada que receba um número inteiro e exiba sua tabuada de 1 a
10. No programa principal, leia o número informado pelo usuário e chame a função para apresentar a tabuada
completa

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

