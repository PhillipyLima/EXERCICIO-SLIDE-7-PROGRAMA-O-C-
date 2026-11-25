Questão 11 

– Análise de notas de uma turma: Uma turma possui 10 alunos, e o professor deseja analisar suas
notas finais. Desenvolva um programa que armazene as notas em um vetor e implemente as seguintes funções:
calcularMediaTurma, que retorne a média das notas; encontrarMaiorNota, que retorne a maior nota registrada;
contarAprovados, que retorne a quantidade de alunos com nota maior ou igual a 7,0; e exibirResultados, que
apresente os resultados calculados. As funções responsáveis pelos cálculos devem retornar os valores, sem
imprimir diretamente os resultados.

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

