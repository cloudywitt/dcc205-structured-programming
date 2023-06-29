// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 19. Faça um programa que calcule e escreva o valor de S: 1 / 1 + 3 / 2 + 5 / 3 + 7 / 4 + ... + 99 / 55.*/
#include <stdio.h>

int main() {
    int numerator = 1, denominator = 1;
    float sumFractions;

    while (numerator <= 99 && denominator <= 55) {
        sumFractions += (float) numerator / denominator;
        numerator += 2;
        denominator++;
    }

    printf("S = %f\n", sumFractions);
}