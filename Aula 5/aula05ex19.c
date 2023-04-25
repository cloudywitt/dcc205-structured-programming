// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 19. Faça um programa que calcule e escreva o valor de S: 1 / 1 + 3 / 2 + 5 / 3 + 7 / 4 + ... + 99 / 55.*/
#include <stdio.h>

int main() {
    int numerador = 1, denominador = 1;
    float somaDasFrações;

    while (numerador <= 99 && denominador <= 55) {
        somaDasFrações += (float) numerador / denominador;
        numerador += 2;
        denominador++;
    }

    printf("O valor da expressão S é %f\n", somaDasFrações);
}