// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha.
Use um único comando printf() para isso. */
#include <stdio.h>

int main() {
    char primeiroCaracter, segundoCaracter, terceiroCaracter;

    printf("Digite 3 caracteres: ");
    scanf("%c %c %c", &primeiroCaracter, &segundoCaracter, &terceiroCaracter);

    printf("Primeiro caracter: %c\nSegundo caracter: %c\nTerceiro caracter: %c\n", primeiroCaracter, segundoCaracter, terceiroCaracter);

    return 0;
}