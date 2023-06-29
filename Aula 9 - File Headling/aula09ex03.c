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

FILE* openFile(char* name, const char * restrict mode) {
    FILE* fname = fopen(name, mode);

    if (fname == NULL) {
        printf("Error while oppening %s\n", name);

        exit(1);
    }

    return fname;
}

void getStr(char* str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void fconvertToUpper(char* fname, char* outputfname) {
    FILE* filePtr = openFile(fname, "r");
    FILE* fileUpperPtr = openFile(outputfname, "w");

    while (true) {
        char c = fgetc(filePtr);

        if (feof(filePtr)) {
            break;
        }

        fputc(toupper(c), fileUpperPtr);
    }

    fclose(filePtr);
    fclose(fileUpperPtr);

    printf("Check %s\n", outputfname);
}

int main() {
    // Input
    char fileName[30];

    printf("Enter the file name (with extension): ");
    getStr(fileName, sizeof(fileName));

    char fileUppercaseName[30];

    printf("Enter the output file name (with extension): ");
    getStr(fileUppercaseName, sizeof(fileUppercaseName));
    
    // Main
    fconvertToUpper(fileName, fileUppercaseName);

    return 0;
}