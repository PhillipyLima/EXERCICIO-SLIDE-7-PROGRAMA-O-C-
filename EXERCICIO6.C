Questão 6 

- Desenvolva uma calculadora que realize as quatro operações matemáticas básicas: adição,
subtração, multiplicação e divisão. Implemente uma função para cada operação, recebendo dois números como
parâmetros e retornando o resultado. O programa deverá ler dois números e uma opção de operação, chamar a
função correspondente e exibir o resultado. Na divisão, verifique se o divisor é diferente de zero antes de realizar a
operação.

#include <stdio.h>

float soma(float a, float b)
{
    return a + b;
}

float subtracao(float a, float b)
{
    return a - b;
}

float multiplicacao(float a, float b)
{
    return a * b;
}

float divisao(float a, float b)
{
    return a / b;
}

int main()
{
    float n1, n2;
    int op;

    printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
    scanf("%d", &op);

    printf("Digite dois numeros: ");
    scanf("%f%f", &n1, &n2);

    switch(op)
    {
        case 1:
            printf("Resultado: %.2f", soma(n1,n2));
            break;

        case 2:
            printf("Resultado: %.2f", subtracao(n1,n2));
            break;

        case 3:
            printf("Resultado: %.2f", multiplicacao(n1,n2));
            break;

        case 4:
            if(n2 != 0)
                printf("Resultado: %.2f", divisao(n1,n2));
            else
                printf("Divisao por zero nao permitida.");
            break;
    }

    return 0;
}
