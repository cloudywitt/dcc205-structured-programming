// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 27. Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a soma
dos elementos dessa matriz que estão abaixo da diagonal principal.*/
#include <stdio.h>

int main() {
    int m[6][6];
    int diagonalPos = 0;
    int belowDiagonalSum;

    printf("Enter a 6x6 matrix:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &m[i][j]);

            if (j < diagonalPos) {
                belowDiagonalSum += m[i][j];
            }
        }

        diagonalPos++;
    }

    printf("Sum of the values below the main diagonal: %d\n", belowDiagonalSum);

    return 0;
}