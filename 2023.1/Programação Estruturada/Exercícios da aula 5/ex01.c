// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 1. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0
até N em ordem crescente.*/
#include <stdio.h>

int main() {
    int num, cont;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (cont = 0; cont <= num; cont++) {
        printf("%d ", cont);
    }

    printf("\n");

    return 0;
}