// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 3. Escreva um programa para converter o conteúdo de um arquivo texto em caracteres
maiúsculos. O programa deverá ler do usuário o nome do arquivo a ser convertido e o
nome do arquivo a ser salvo.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

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

void convertToUpper(FILE* file, FILE* fileUpper) {
    while (true) {
        char c = fgetc(file);

        if (feof(file)) {
            break;
        }

        fputc(toupper(c), fileUpper);
    }
}

int main() {
    // Get user input
    char fileName[30];

    printf("Enter the text file name (with extension): ");
    getStr(fileName, sizeof(fileName));

    char fileUppercaseName[30];

    printf("Enter the output text file name (with extension): ");
    getStr(fileUppercaseName, sizeof(fileUppercaseName));

    // File operation
    FILE* filePtr = openFile(fileName, "r");
    FILE* fileUppercasePtr = openFile(fileUppercaseName, "w");

    convertToUpper(filePtr, fileUppercasePtr);

    fclose(filePtr);
    fclose(fileUppercasePtr);
    
    return 0;
}