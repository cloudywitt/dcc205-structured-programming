// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 40. Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre
65 e 90.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            printf("%c", str[i] + 32);
        } else {
            printf("%c", str[i]);
        }
    }

    return 0;
}