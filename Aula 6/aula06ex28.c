// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 28. Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma
dos elementos dessa matriz que não pertencem à diagonal principal nem à diagonal
secundária.*/
#include <stdio.h>

int main() {
    int m[5][5];
    int mainDiagonal = 0;
    int secondaryDiagonal = 4;
    int sum;

    printf("Enter a 5x5 matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &m[i][j]);

            if (j != mainDiagonal && j != secondaryDiagonal) {
                sum += m[i][j];
            }
        }

        mainDiagonal++;
        secondaryDiagonal--;
    }

    printf("The sum of the elements that do not belong to the main diagonal and the secondary diagonal is: %d\n", sum);

    return 0;
}