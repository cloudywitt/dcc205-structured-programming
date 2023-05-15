// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 37. Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando se a segunda string lida está contida dentro da primeira.*/
#include <stdio.h>
#include <string.h>

int main() {
    char firstStr[20];
    char secondStr[20];

    printf("First string: ");
    fgets(firstStr, sizeof(firstStr), stdin);

    printf("Second string: ");
    fgets(secondStr, sizeof(secondStr), stdin);

    if (strstr(firstStr, secondStr)) {
        printf("The second string is in the first string.\n");
    } else {
        printf("The second string is not in the first string.\n");
    }

    return 0;
}