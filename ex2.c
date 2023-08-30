#include <stdio.h>

int main()
{

    /*2. Leia o salário e imprima se ganha mais que o mínimo*/

    float salario;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if (salario >= 1.320)
    {
        printf("Ganha mais que o minimo");
    }
    else if (salario < 1.320)
    {
        printf("Ganha menos que o minimo");
    }
}
