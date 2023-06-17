// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11. Escreva uma função que receba uma matriz e seu tamanho como parâmetros e salve-a
em um arquivo texto de nome “matriz.txt”’. Cada linha da matriz deve ser salva em uma
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

void writeMatrix(int m[][4], int row, int column) {
    FILE* matrixPtr = openFile("matriz.txt", "w");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            fprintf(matrixPtr, "%d ", m[i][j]);
        }

        fputs("\n", matrixPtr);
    }

    fclose(matrixPtr);
}

int main() {
    int m[2][4] = {
        {2, 0, 5, 4},
        {5, 5, 9, 6}
    };

    writeMatrix(m, 2, 4);
}