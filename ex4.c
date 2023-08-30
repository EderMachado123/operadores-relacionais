
#include <stdio.h>

int main()
{
    /*4. Leia o peso e imprima se é menor que 60kg8*/

    float peso;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if (peso < 60)
    {
        printf("Menor");
    }
    else if (peso > 60)
    {
        printf("Maior");
    }
}