// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0
até N em ordem decrescente.*/
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (number; number >= 0; number--) {
        printf("%d ", number);
    }

    printf("\n");

    return 0;
}