Questão 12 


– Sistema de estoque simplificado: Uma loja possui oito produtos, e cada produto tem uma quantidade
disponível em estoque. Crie um programa que armazene essas quantidades em um vetor e implemente três
funções: calcularTotalEstoque, que retorne a soma das quantidades de todos os produtos; contarEstoqueBaixo,
que retorne quantos produtos possuem menos de cinco unidades; e buscarProduto, que receba o vetor e o código
de um produto e retorne sua posição quando encontrado ou -1 caso não exista. Considere que os produtos
possuem códigos de 1 a 8 e faça a conversão adequada dos códigos para os índices do vetor.

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

