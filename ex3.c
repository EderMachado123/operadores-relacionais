#include<stdio.h>

int main(){

/*3. Leia a altura e imprima se é maior que 1.8m*/

    float altura;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if(altura > 1.8){
        printf("Maior");
    }else if(altura < 1.8){
        printf("Menor");
    }
}