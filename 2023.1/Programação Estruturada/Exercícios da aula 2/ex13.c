// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 13. Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere
lido for a letra A, deverá ser impresso “A”. */
#include <stdio.h>

int main(){
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Caractere digitado: \"%c\"\n", caractere);

    return 0;
}