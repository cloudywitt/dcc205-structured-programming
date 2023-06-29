// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 2. Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie um
terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo do
primeiro seguido do conteúdo do segundo).*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void fcopy(FILE* source, FILE* detination) {
    char buffer[250];

    while (fgets(buffer, sizeof(buffer), source) != NULL) { 
        fprintf(detination, "%s", buffer);
    }
}

void fmerge(char* fname1, char* fname2) {
    // Writes the first file to the final file
    FILE* file1Ptr = openFile(fname1, "r");
    FILE* finalFilePtr = openFile("files-merged.txt", "a");

    fcopy(file1Ptr, finalFilePtr);

    fclose(file1Ptr);
    
    // Writes the second file to the final file
    FILE* file2Ptr = openFile(fname2, "r");

    fcopy(file2Ptr, finalFilePtr);

    fclose(file2Ptr);
    fclose(finalFilePtr);

    printf("Check files-merged.txt\n");
}

int main() {
    // Input
    printf("Enter the name of two files (with extension)\n");

    char firstFileName[30];

    printf("File 1: ");
    getStr(firstFileName, sizeof(firstFileName));

    char secondFileName[30];

    printf("File 2: ");
    getStr(secondFileName, sizeof(secondFileName));

    // Main
    fmerge(firstFileName, secondFileName);

    return 0;
}