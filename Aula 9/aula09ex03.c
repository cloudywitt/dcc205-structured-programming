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

int main() {
    // Get files' names from the user
    char fileName[30];

    printf("Enter the text file name (with extension): ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';

    char fileUppercaseName[30];

    printf("Enter the output text file name (with extension): ");
    fgets(fileUppercaseName, sizeof(fileUppercaseName), stdin);
    fileUppercaseName[strcspn(fileUppercaseName, "\n")] = '\0';

    // Open files
    FILE* filePtr = fopen(fileName, "r");

    if (filePtr == NULL) {
        printf("File not found\n");

        exit(1);
    }

    FILE* fileUppercasePtr = fopen(fileUppercaseName, "w");

    if (fileUppercasePtr == NULL) {
        printf("Couldn't create output file\n");

        exit(1);
    }

    // File operation
    while (true) {
        char c = fgetc(filePtr);

        if (feof(filePtr)) {
            break;
        }

        fputc(toupper(c), fileUppercasePtr);
    }

    fclose(filePtr);
    fclose(fileUppercasePtr);
    
    return 0;
}