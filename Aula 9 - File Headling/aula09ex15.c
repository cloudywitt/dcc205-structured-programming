// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Faça um programa que leia 100 números. Esse programa deverá, em seguida,
armazenar esses números em um arquivo binário.*/
#include <stdio.h>
#include <stdlib.h>

FILE* openFile(char* fname, const char * restrict mode) {
    FILE* filePtr = fopen(fname, mode);

    if (filePtr == NULL) {
        printf("Error while openning %s\n", fname);

        exit(1);
    }

    return filePtr;
}

void fwriteNumBin(int* numbers, int size) {
    FILE* binPtr = openFile("Files/numbers.bin", "wb");

    int numbersWritten = fwrite(numbers, sizeof(int), size, binPtr);

    if (numbersWritten == 0) {
        printf("Error while writing to file\n");
    }

    fclose(binPtr);
}

int main() {
    // Input
    int numbers[100];

    for (int i = 0; i < 100; i++) {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    fwriteNumBin(numbers, 100);

    return 0;
}