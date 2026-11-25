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
