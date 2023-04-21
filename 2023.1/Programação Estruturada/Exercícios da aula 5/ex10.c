// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 10. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/
#include <stdio.h>

int main() {
    int numeroDigitado, somaPositivos = 0, quantidadePositivos = 0;
    float media;

    while (quantidadePositivos < 10) { // quantidade < 10
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numeroDigitado);

        if (numeroDigitado > 0) {
            somaPositivos += numeroDigitado;
            quantidadePositivos++;
        }
    }

    media = (float) somaPositivos / quantidadePositivos;

    printf("A média dos inteiros positivos digitados é %.1f\n", media);

    return 0;
}