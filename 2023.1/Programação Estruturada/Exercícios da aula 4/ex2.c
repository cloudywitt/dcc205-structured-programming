// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 2. Faça um programa que leia dois números e mostre o maior deles. Se, por acaso,
os dois números forem iguais, imprima a mensagem “Números iguais”.*/
#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    if (num1 > num2) {
        printf("Maior: %.1f\n", num1);
    } else if (num2 > num1) {
        printf("Maior: %.1f\n", num2);
    } else {
        printf("Números iguais.\n");
    }

    return 0;
}