// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Crie um programa para calcular e exibir o número de palavras contido em um arquivo
texto. O usuário deverá informar o nome do arquivo.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* openFile(char* fname, const char * restrict mode) {
    FILE* filePtr = fopen(fname, mode);

    if (filePtr == NULL) {
        printf("Error while openning %s\n", fname);

        exit(1);
    }

    return filePtr;
}

int fcountWords(char* fname) {
    FILE* filePtr = openFile(fname, "r");

    char buffer[250];
    int wordCount = 0;

    while (fscanf(filePtr, "%s", buffer) != EOF) {
        wordCount++;

        if (feof(filePtr)) {
            break;
        }
    }

    fclose(filePtr);

    return wordCount;
}

int main() {
    // Input
    char fileName[30];

    printf("Enter the file name (with extension): ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';   

    // File operations
    int wordsCount = fcountWords(fileName);

    // Output
    printf("There are %d words in %s\n", wordsCount, fileName);

    return 0;
}