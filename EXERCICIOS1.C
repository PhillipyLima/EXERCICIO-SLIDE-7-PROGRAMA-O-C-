Questão 1 -
Crie uma função chamada mostrarSaudacao() que exiba a mensagem “Bem-vindo ao mundo das
funções em C!”. No programa principal (main), chame essa função três vezes.

#include <stdio.h>

// Função que exibe a saudação
void mostrarSaudacao()
{
    printf("Bem-vindo ao mundo das funcoes em C!\n");
}

int main()
{
    mostrarSaudacao();
    mostrarSaudacao();
    mostrarSaudacao();

    return 0;
}

/*
PROCESSO:
1. Criamos uma função chamada mostrarSaudacao().
2. Dentro dela usamos printf().
3. No main chamamos a função 3 vezes.
*/
