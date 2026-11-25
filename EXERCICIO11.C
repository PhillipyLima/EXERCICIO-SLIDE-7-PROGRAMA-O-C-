#include <stdio.h>

float calcularMediaTurma(float notas[])
{
    int i;
    float soma = 0;

    for(i=0;i<10;i++)
        soma += notas[i];

    return soma/10;
}

float encontrarMaiorNota(float notas[])
{
    int i;
    float maior = notas[0];

    for(i=1;i<10;i++)
    {
        if(notas[i] > maior)
            maior = notas[i];
    }

    return maior;
}

int contarAprovados(float notas[])
{
    int i, cont = 0;

    for(i=0;i<10;i++)
    {
        if(notas[i] >= 7)
            cont++;
    }

    return cont;
}

void exibirResultados(float media, float maior, int aprovados)
{
    printf("Media: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Aprovados: %d\n", aprovados);
}

int main()
{
    float notas[10];
    int i;

    for(i=0;i<10;i++)
    {
        scanf("%f",&notas[i]);
    }

    exibirResultados(
        calcularMediaTurma(notas),
        encontrarMaiorNota(notas),
        contarAprovados(notas)
    );

    return 0;
}

