// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 10. Um arquivo texto possui uma matriz de valores inteiros dentro dele. Os dois primeiros
números são as dimensões da matriz (linhas e colunas), enquanto o restante dos
números são os valores de cada elemento da matriz. Escreva uma função que receba
o nome do arquivo e retorne o ponteiro para uma matriz alocada dinamicamente
contendo os valores lidos do arquivo.*/
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

void getStr(char* str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void fprintMatrix(FILE* matrixPtr, int rows, int columns) {
    int bufferMatrix[rows][columns];

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            fscanf(matrixPtr, "%d", &bufferMatrix[i][j]);
            printf("%d ", bufferMatrix[i][j]);
        }

        printf("\n");
    }
}

int main() {
    char matrixFileName[30];

    printf("Enter the file name (with extension): ");
    getStr(matrixFileName, sizeof(matrixFileName));

    // Get matrix size
    FILE* matrixFilePtr = openFile(matrixFileName, "r");

    int matrixRow = 0;
    int matrixColumn = 0;

    fscanf(matrixFilePtr, "%d %d", &matrixRow, &matrixColumn);

    // Print the matrix
    fprintMatrix(matrixFilePtr, matrixRow, matrixColumn);
    
    fclose(matrixFilePtr);

    return 0;
}