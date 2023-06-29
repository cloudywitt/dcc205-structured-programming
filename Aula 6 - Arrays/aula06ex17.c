// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 17. Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o maior valor
contido nessa matriz e a sua localização (linha e coluna).*/
#include <stdio.h>

int main() {
    int m[4][4];
    int largestNum;
    int largestNumRow;
    int largestNumColumn;

    printf("Enter a 4x4 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);

            if (i == 0 && j == 0) {
                largestNum = m[i][j];
                largestNumRow = i;
                largestNumColumn = j;
            } else if (m[i][j] > largestNum) {
                largestNum = m[i][j];
                largestNumRow = i;
                largestNumColumn = j;
            }
        }
    }

    printf("The largest number is %d (Row: %d, Column: %d).\n", largestNum, largestNumRow, largestNumColumn);

    return 0;
}