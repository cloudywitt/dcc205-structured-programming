// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Faça um programa que leia 100 números. Esse programa deverá, em seguida,
armazenar esses números em um arquivo binário.*/
#include <stdio.h>
#include <stdlib.h>

FILE* openFile(char *fname, const char * restrict mode) {
    FILE* file = fopen(fname, mode);

    if (file == NULL) {
        printf("Couldn't open %s\n", fname);

        exit(1);
    }

    return file;
}

int main() {
    FILE* numbersBinFilePtr = openFile("numbers.bin", "wb");
    int numbers[100];
    int numbersWritten = 0;

    for (int i = 0; i < 100; i++) {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    numbersWritten = fwrite(&numbers, sizeof(int), 100, numbersBinFilePtr);

    if (numbersWritten == 0) {
        printf("Error while writing to file\n");
    }

    fclose(numbersBinFilePtr);

    return 0;
}