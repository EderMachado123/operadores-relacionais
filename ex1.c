#include <stdio.h>

main()
{
    /*1. Leia a idade e imprima se a pessoa é maior de idade*/

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Maior de idade");
    }
    else if (idade < 18)
    {
        printf("Menor de idade");
    }
}