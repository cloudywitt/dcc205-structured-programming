// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 9)Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros
cada. Crie um novo array C calculando C = A – B. Mostre na tela os dados do array
C.*/
#include <stdio.h>

int main() {
    int a[10], b[10], c[10];
    int i;

    printf("Array A:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }

    printf("Array B:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &b[i]);
    }

    printf("Array C: ");
    for (i = 0; i < 10; i++) {
        c[i] = a[i] - b[i];

        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}