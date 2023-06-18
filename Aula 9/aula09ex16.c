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

    int lettersCount[26];

    while (true) {
        char c = fgetc(filePtr);

        for (int i = 0; i < 26; i++) { 
            if (toupper(c) == 'A' + i) {
                lettersCount[i]++;
            }
        }

        if (feof(filePtr)) {
            break;
        }
    }

    fclose(filePtr);

    printf("In %s...\n", fileName);
    for (int i = 0; i < 26; i++) {
        if (lettersCount[i] != 0) {
            printf("The letter %c appears %d times\n", 'A' + i, lettersCount[i]);
        }
    }

    return 0;
}