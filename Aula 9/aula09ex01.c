// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 1. Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida,
mostre na tela quantas linhas esse arquivo possui.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getStr(char *str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

FILE* openFile(char *name, const char * restrict mode) {
    FILE* fname = fopen(name, mode);

    if (fname == NULL) {
        printf("File not found\n");

        exit(1);
    }

    return fname;
}

int main() {
    // Input
    char fileName[30];

    printf("Enter a file name (with extension): ");
    getStr(fileName, sizeof(fileName));

    // File operation
    FILE* userFile = openFile(fileName, "r");

    char buffer[255];
    int linesCount = 0;

    while (fgets(buffer, sizeof(buffer), userFile) != NULL) {
        linesCount++;
    }

    fclose(userFile);

    // Output
    printf("The file has %d lines\n", linesCount);

    return 0;
}