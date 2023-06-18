// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 17. Elabore um programa que leia um arquivo binário contendo 100 números. Mostre
na tela a soma desses números.*/
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
    FILE* numbersBinPtr = openFile("numbers.bin", "rb");

    int numbers[100];

    fread(numbers, sizeof(int), 100, numbersBinPtr);

    fclose(numbersBinPtr);

    int sum = 0;

    printf("The numbers: ");
    for (int i = 0; i < 100; i++) {
        sum += numbers[i];
    }

    printf("The sum is %d\n", sum);

    return 0;
}