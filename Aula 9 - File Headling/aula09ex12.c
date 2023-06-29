// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 12. Escreva uma função que receba um vetor e seu tamanho como parâmetros e salve-a
em um arquivo texto de nome “vetor.txt”. Cada valor do vetor deve ser salvo em uma
linha do arquivo.*/
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

void writeArray(int a[], int size) {
    FILE* arrayPtr = openFile("vetor.txt", "w");

    for (int i = 0; i < size; i++) {
        fprintf(arrayPtr, "%d\n", a[i]);
    }

    fclose(arrayPtr);
}

int main() {
    int array[5] = {4, 10, 5, -1, 0};

    int arraySize = sizeof(array) / sizeof(array[0]);

    writeArray(array, arraySize);

    return 0;
}