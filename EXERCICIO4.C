Questão 4 -

Crie uma função chamada celsiusParaFahrenheit que receba uma temperatura em graus Celsius e
retorne o valor convertido para Fahrenheit. Utilize a fórmula F = (9 × C) / 5 + 32. O programa principal deverá
solicitar a temperatura ao usuário e apresentar o resultado com duas casas decimais.

#include <stdio.h>

float celsiusParaFahrenheit(float c)
{
    return (9 * c) / 5 + 32;
}

int main()
{
    float c;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    printf("Fahrenheit: %.2f\n", celsiusParaFahrenheit(c));

    return 0;
}

/*
