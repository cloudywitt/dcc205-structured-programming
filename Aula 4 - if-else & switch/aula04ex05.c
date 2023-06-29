// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado. */
#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("%.1f² = %.1f\n", num, pow(num, 2));
        printf("√%.1f = %.1f\n", num, sqrt(num));
    }

    return 0;
}