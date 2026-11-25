#include <stdio.h>

int ehPrimo(int n)
{
    int i;

    if(n < 2)
        return 0;

    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    if(ehPrimo(n))
        printf("Primo");
    else
        printf("Nao primo");

    return 0;
}

