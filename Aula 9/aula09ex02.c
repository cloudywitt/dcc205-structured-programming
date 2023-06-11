// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 2. Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie um
terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo do
primeiro seguido do conteúdo do segundo).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getStr(char *str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

FILE* openFile(char *name, const char * restrict mode) {
    FILE* fname = fopen(name, mode);

    if (fname == NULL) {
        printf("Error while oppening %s\n", name);

        exit(1);
    }

    return fname;
}

void copyFile(FILE *firstFile, FILE *secondFile) {
    char buffer[250];

    while (fgets(buffer, sizeof(buffer), firstFile) != NULL) { 
        fprintf(secondFile, "%s", buffer);
    }

}

int main() {
    // Get user input
    printf("Enter the name of two text files plus their extension\n");

    char firstFileName[30];

    printf("File 1: ");
    getStr(firstFileName, sizeof(firstFileName));

    char secondFileName[30];

    printf("File 2: ");
    getStr(secondFileName, sizeof(secondFileName));

    // File operation
    FILE* firstFilePtr = openFile(firstFileName, "r");
    FILE* secondFilePtr = openFile(secondFileName, "r");
    FILE* filesMergePtr = openFile("files-merged.txt", "w");

    copyFile(firstFilePtr, filesMergePtr);

    fclose(firstFilePtr);
    fclose(filesMergePtr);

    filesMergePtr = openFile("files-merged.txt", "a");
    copyFile(secondFilePtr, filesMergePtr);

    fclose(secondFilePtr);
    fclose(filesMergePtr);

    // Output
    printf("The files were merged succesfully!\n");

    return 0;
}