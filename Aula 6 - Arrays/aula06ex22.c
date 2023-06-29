// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 22. Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos
em sua diagonal secundária. */
#include <stdio.h>

int main() {
    int m[3][3];
    int secondaryDiagonalPos = 2;
    int secondaryDiagonalSum;

    printf("Enter a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);

            if (j == secondaryDiagonalPos) {
                secondaryDiagonalSum += m[i][j];
            }
        }

        secondaryDiagonalPos--;
    }

    printf("The sum of the secondary diagonal values is %d\n", secondaryDiagonalSum);

    return 0;
}