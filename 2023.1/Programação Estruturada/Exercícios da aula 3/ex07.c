// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 7. Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares*/
#include <stdio.h>

int main() {
    float real, cotacaoDolar, dolar;

    printf("Digite um valor em R$: ");
    scanf("%f", &real);

    printf("Digite a cotação atual do dólar: ");
    scanf("%f", &cotacaoDolar);

    dolar = real / cotacaoDolar;

    printf("R$%.2f = $%.2f\n", real, dolar);

    return 0;
}