// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 1. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0
até N em ordem crescente.*/
#include <stdio.h>

int main() {
    int number, count;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (count = 0; count <= number; count++) {
        printf("%d ", count);
    }

    printf("\n");

    return 0;
}