// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 33. Faça um programa que leia uma string e a imprima de trás para a frente.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = strlen(str); i > -1; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}