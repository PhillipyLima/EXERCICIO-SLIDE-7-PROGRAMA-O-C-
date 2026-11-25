Questão 2 
- Crie uma função chamada calcularDobro que receba um número inteiro como parâmetro e retorne o
seu dobro. No programa principal, leia um número, chame a função e exiba o resultado.

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


