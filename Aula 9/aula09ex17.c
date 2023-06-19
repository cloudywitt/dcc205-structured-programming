// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 17. Elabore um programa que leia um arquivo binário contendo 100 números. Mostre
na tela a soma desses números.*/
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

int sumFromBin(char* fname, int len) {
    FILE* numbersBinPtr = openFile(fname, "rb");

    int numbersBuffer[len];

    fread(numbersBuffer, sizeof(int), len, numbersBinPtr);

    int sum = 0;

    printf("The numbers: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", numbersBuffer[i]);
        sum += numbersBuffer[i];
    }

    printf("\n");

    fclose(numbersBinPtr);

    return sum;
}

int main() {
    int sum = sumFromBin("Files/numbers.bin", 100);

    printf("The sum is %d\n", sum);

    return 0;
}