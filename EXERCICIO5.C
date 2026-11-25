Questão 5 
- Crie uma função chamada ehPar que receba um número inteiro e retorne 1 caso ele seja par ou 0
caso seja ímpar. No programa principal, leia um número e informe se ele é par ou ímpar utilizando o resultado da
função.


#include <stdio.h>

int ehPar(int numero)
{
    if(numero % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(ehPar(n))
        printf("Numero par\n");
    else
        printf("Numero impar\n");

    return 0;
}

