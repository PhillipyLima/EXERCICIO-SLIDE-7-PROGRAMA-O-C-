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

