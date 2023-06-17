// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Crie um programa para calcular e exibir o número de palavras contido em um arquivo
texto. O usuário deverá informar o nome do arquivo.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* openFile(char *fname, const char * restrict mode) {
    FILE* file = fopen(fname, mode);

    if (file == NULL) {
        printf("Couldn't open %s\n", fname);

        exit(1);
    }

    return file;
}

int main() {
    char fileName[30];

    printf("Enter a txt file name (with extension): ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';   

    FILE* filePtr = openFile(fileName, "r");

    char buffer[250];
    int wordsCount = 0;

    while (fscanf(filePtr, "%s", buffer) != EOF) {
        wordsCount++;
    }

    fclose(filePtr);
    printf("There are %d words in %s\n", wordsCount, fileName);

    return 0;
}