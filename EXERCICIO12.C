#include <stdio.h>

int calcularTotalEstoque(int estoque[])
{
    int i, total = 0;

    for(i=0;i<8;i++)
        total += estoque[i];

    return total;
}

int contarEstoqueBaixo(int estoque[])
{
    int i, cont = 0;

    for(i=0;i<8;i++)
    {
        if(estoque[i] < 5)
            cont++;
    }

    return cont;
}

int buscarProduto(int estoque[], int codigo)
{
    if(codigo >= 1 && codigo <= 8)
        return codigo - 1;

    return -1;
}

int main()
{
    int estoque[8];
    int i, codigo;

    for(i=0;i<8;i++)
    {
        printf("Quantidade produto %d: ", i+1);
        scanf("%d",&estoque[i]);
    }

    printf("Total estoque: %d\n", calcularTotalEstoque(estoque));
    printf("Produtos com estoque baixo: %d\n",
            contarEstoqueBaixo(estoque));

    printf("Digite codigo: ");
    scanf("%d",&codigo);

    printf("Posicao: %d\n",
            buscarProduto(estoque,codigo));

    return 0;
}

