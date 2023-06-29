// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 32. Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos
caracteres ela possui.*/
#include <stdio.h>

int main() {
    char str[20];
    int strlen;
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        strlen++;
        i++;
    }

    printf("The string has %d characters.\n", strlen);

    return 0;
}