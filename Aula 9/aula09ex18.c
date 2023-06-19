// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 18. Crie um programa que leia um arquivo binário contendo uma quantidade qualquer
de números. O primeiro número lido indica quantos valores existem no arquivo.
Mostre na tela o maior e o menor valor lido.*/
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

int findMaxArray(int* array, int size) {
    int max;

    for (int i = 0; i < size; i++) {
        if (i == 0) {
            max = array[0];
        } else if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int findMinArray(int* array, int size) {
    int min;

    for (int i = 0; i < size; i++) {
        if (i == 0) {
            min = array[0];
        } else if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

int main() {
    FILE* numBinPtr = openFile("Files/numbers2.bin", "rw");

    // Find range (the first number)
    int range = 0;

    fread(&range, sizeof(int), 1, numBinPtr);

    // Reads the numbers
    int nums[range];

    fread(nums, sizeof(int), range, numBinPtr);

    fclose(numBinPtr);

    // Output
    int largest = findMaxArray(nums, range);
    int smallest = findMinArray(nums, range);

    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);

    return 0;
}