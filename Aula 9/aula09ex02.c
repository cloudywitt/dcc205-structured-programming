// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 2. Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie um
terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo do
primeiro seguido do conteúdo do segundo).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Get files' names
    printf("Enter the name of two text files plus their extension\n");

    char firstFileName[30];

    printf("File 1: ");
    fgets(firstFileName, sizeof(firstFileName), stdin);
    firstFileName[strcspn(firstFileName, "\n")] = '\0';

    char secondFileName[30];

    printf("File 2: ");
    fgets(secondFileName, sizeof(secondFileName), stdin);
    secondFileName[strcspn(secondFileName, "\n")] = '\0';

    // Try to open the files
    FILE* firstFilePtr = fopen(firstFileName, "r");
    FILE* secondFilePtr = fopen(secondFileName, "r");

    if (firstFilePtr == NULL || secondFilePtr == NULL) {
        printf("Could not open one of the files\n");

        exit(1);
    }

    // File headling
    FILE* filesMergePtr = fopen("files-merged.txt", "w");

    char buffer[250];

    while (fgets(buffer, sizeof(buffer), firstFilePtr) != NULL) { 
        fprintf(filesMergePtr, "%s", buffer);
    }

    fclose(firstFilePtr);
    fclose(filesMergePtr);

    filesMergePtr = fopen("files-merged.txt", "a");

    while (fgets(buffer, sizeof(buffer), secondFilePtr) != NULL) {
        fprintf(filesMergePtr, "%s", buffer);
    }

    fclose(secondFilePtr);
    fclose(filesMergePtr);

    printf("The files were merged succesfully\n");

    return 0;
}