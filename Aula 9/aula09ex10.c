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

FILE* openFile(char *fname, const char * restrict mode) {
    FILE* file = fopen(fname, mode);

    if (file == NULL) {
        printf("Couldn't open %s\n", fname);

        exit(1);
    }

    return file;
}

int main() {
    char matrixFileName[30];

    printf("Enter the name of the text file (with extension): ");
    fgets(matrixFileName, sizeof(matrixFileName), stdin);
    matrixFileName[strcspn(matrixFileName, "\n")] = '\0';

    FILE* matrixPtr = openFile(matrixFileName, "r");

    int matrixRow = 0;
    int matrixColumn = 0;

    fscanf(matrixPtr, "%d %d", &matrixRow, &matrixColumn);

    int m[matrixRow][matrixColumn];

    printf("Matrix:\n");
    for (int i = 0; i < matrixRow; i++) {
        for (int j = 0; j < matrixColumn; j++) {
            fscanf(matrixPtr, "%d", &m[i][j]);
            printf("%d ", m[i][j]);
        }

        printf("\n");
    }

    fclose(matrixPtr);

    return 0;
}