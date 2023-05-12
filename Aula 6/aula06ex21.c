// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 21. Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos
em sua diagonal principal.*/
#include <stdio.h>

int main() {
    int m[3][3];
    int mainDiagonalPos;
    int mainDiagonalSum;

    printf("Enter a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);

            if (j == mainDiagonalPos) {
                mainDiagonalSum += m[i][j];
            }
        }

        mainDiagonalPos++;
    }

    printf("The sum of the main diagonal values is %d\n", mainDiagonalSum);

    return 0;
}
