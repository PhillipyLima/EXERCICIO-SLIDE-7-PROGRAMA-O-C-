Questão 7 

- Crie uma função chamada calcularMedia que receba três notas e retorne a média aritmética. Em
seguida, crie uma função chamada verificarSituacao que receba a média e exiba a situação do aluno,
considerando aprovado quem obtiver média maior ou igual a 7,0 e reprovado quem obtiver média inferior a 7,0. No
programa principal, leia as três notas, calcule a média e apresente a situação do aluno

#include <stdio.h>

float calcularMedia(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3;
}

void verificarSituacao(float media)
{
    if(media >= 7)
        printf("Aprovado");
    else
        printf("Reprovado");
}

int main()
{
    float n1,n2,n3,media;

    scanf("%f%f%f",&n1,&n2,&n3);

    media = calcularMedia(n1,n2,n3);

    printf("Media: %.2f\n", media);

    verificarSituacao(media);

    return 0;
}

