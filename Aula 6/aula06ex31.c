// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 31. Faça um programa que leia uma string e imprima as quatro primeiras letras dela.*/
#include <stdio.h>

int main() {
    char str[20];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("The string's first 4 letters: ");
    for (int i = 0; i < 4; i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}