// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 1. Faça um programa que leia dois números e mostre qual deles é o maior. */
#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    if (num1 > num2) {
        printf("Maior: %.1f\n", num1);
    }
    else if (num2 > num1) {
        printf("Maior: %.1f\n", num2);
    }

    return 0;
}