#include<stdio.h>

int main(){
    int idade = 18;
    float salario = 1250.75;
    double porcentagem_desconto = 2.5;
    char genero = 'F';
    float altura = 1.63;

    printf("\n Idade: %d",idade);
    printf("\n Salário: %f",salario);
    printf("\n Desconto (%): %f", porcentagem_desconto);
    printf("\n Gênero: %c",genero);
    printf("\n Altura: %.3f",altura);
    return 0;
}
