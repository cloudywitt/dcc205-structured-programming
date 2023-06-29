// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 16. Elabore um programa para calcular e exibir o número de vezes que cada letra
ocorre dentro de um arquivo texto. Ignore as letras com acento. O usuário deverá
informar o nome do arquivo.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

FILE* openFile(char* fname, const char * restrict mode) {
    FILE* filePtr = fopen(fname, mode);

    if (filePtr == NULL) {
        printf("Error while openning %s\n", fname);

        exit(1);
    }

    return filePtr;
}

void getStr(char* str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void fcountLetters(char* fname, int* lettersCountArray) {
    FILE* filePtr = openFile(fname, "r");

    while (true) {
        char c = fgetc(filePtr);

        for (int i = 0; i < 26; i++) { 
            if (toupper(c) == 'A' + i) {
                lettersCountArray[i]++;
            }
        }

        if (feof(filePtr)) {
            break;
        }
    }

    fclose(filePtr);
}

int main() {
    // Input
    char fileName[30];

    printf("Enter the file name (with extension): ");
    getStr(fileName, sizeof(fileName));

    // Letter Counting
    int lettersCount[26]; // Numbers of letter found from A to Z

    fcountLetters(fileName, lettersCount);

    // Output
    printf("In %s...\n", fileName);
    for (int i = 0; i < 26; i++) {
        if (lettersCount[i] != 0) {
            printf("The letter %c appears %d times\n", 'A' + i, lettersCount[i]);
        }
    }

    return 0;
}