// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 26. Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma
dos elementos dessa matriz que estão acima da diagonal principal.*/
#include <stdio.h>

int main() {
    int m[5][5];
    int diagonalPos = 0;
    int aboveDiagonalSum;

    printf("Enter a 5x5 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);

            if (j > diagonalPos) {
                aboveDiagonalSum += m[i][j];
            }
        }

        diagonalPos++;
    }

    printf("Sum of the values above the main diagonal: %d\n", aboveDiagonalSum);

    return 0;
}