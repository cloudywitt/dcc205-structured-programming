// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 30. Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
Imprima na tela a diferença entre os dois valores.*/
#include <stdio.h>

int main() {
    int m[5][5];
    int diagonalPos;
    int secDiagonalPos = 4;
    int inDiagonalsSum;
    int outDiagonalsSum;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);

            if (j == diagonalPos || j == secDiagonalPos) {
                inDiagonalsSum += m[i][j];
            } else {
                outDiagonalsSum += m[i][j];
            }
        }

        diagonalPos++;
        secDiagonalPos--;
    }

    int inValMinusOutVal = inDiagonalsSum - outDiagonalsSum;

    printf("The sum of the values inside the diagonals minus the sum of the outside them is: %d\n", inValMinusOutVal);

    return 0;
}