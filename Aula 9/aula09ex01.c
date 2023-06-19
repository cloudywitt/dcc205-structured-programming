// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 1. Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida,
mostre na tela quantas linhas esse arquivo possui.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE* openFile(char* name, const char * restrict mode) {
    FILE* fname = fopen(name, mode);

    if (fname == NULL) {
        printf("Error while oppening %s\n", name);

        exit(1);
    }

    return fname;
}

int fcountLines(char* fname, int size) {
    FILE* userFile = openFile(fname, "r");

    char buffer[255];
    int linesCount = 0;

    while (fgets(buffer, sizeof(buffer), userFile) != NULL) {
        linesCount++;

        if (feof(userFile)) {
            break;
        }
    }

    fclose(userFile);

    return linesCount;
}

void getStr(char* str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}


int main() {
    char fileName[30];

    printf("Enter a file name (with extension): ");
    getStr(fileName, sizeof(fileName));

    int linesCount = fcountLines(fileName, sizeof(fileName));
    
    printf("%s has %d lines\n", fileName, linesCount);

    return 0;
}