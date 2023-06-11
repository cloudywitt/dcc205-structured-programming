// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 1. Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida,
mostre na tela quantas linhas esse arquivo possui.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char fileName[30];

    printf("Enter a file name + extension: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';

    FILE *userFile = fopen(fileName, "r");

    if (userFile == NULL) {
        printf("File not found.\n");

        exit(1);
    }

    char buffer[255];
    int linesCount = 0;

    while (fgets(buffer, sizeof(buffer), userFile) != NULL) {
        linesCount++;
    }

    printf("The file has %d lines\n", linesCount);

    fclose(userFile);

    return 0;
}