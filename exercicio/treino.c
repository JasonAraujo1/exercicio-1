#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome [50];
    int matricula;
    
    printf("\n Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("nome: %s , matricula: %d, idade: %d , altura: %f", nome, matricula, idade, altura);


    return 0;
}