Questão 10 

- Uma loja deseja analisar as vendas realizadas durante cinco dias. Crie um programa que leia os
valores das vendas e implemente três funções: calcularTotal, que receba os valores e retorne a soma das vendas;
calcularMedia, que receba o total e a quantidade de dias e retorne a média diária; e contarVendasAcimaDaMedia,
que receba os valores das vendas e a média e retorne quantos dias tiveram vendas acima da média. Ao final,
apresente o total vendido, a média diária e a quantidade de dias acima da média.

#include <stdio.h>

float calcularTotal(float vendas[])
{
    int i;
    float total = 0;

    for(i=0;i<5;i++)
        total += vendas[i];

    return total;
}

float calcularMedia(float total, int dias)
{
    return total / dias;
}

int contarVendasAcimaDaMedia(float vendas[], float media)
{
    int i, cont = 0;

    for(i=0;i<5;i++)
    {
        if(vendas[i] > media)
            cont++;
    }

    return cont;
}

int main()
{
    float vendas[5];
    float total, media;
    int i, acima;

    for(i=0;i<5;i++)
    {
        printf("Venda %d: ", i+1);
        scanf("%f",&vendas[i]);
    }

    total = calcularTotal(vendas);
    media = calcularMedia(total,5);
    acima = contarVendasAcimaDaMedia(vendas,media);

    printf("Total: %.2f\n", total);
    printf("Media: %.2f\n", media);
    printf("Acima da media: %d\n", acima);

    return 0;
}

