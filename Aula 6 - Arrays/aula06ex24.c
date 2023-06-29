// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/*24. Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de
números inteiros. Em seguida, calcule um vetor contendo três posições, em que cada
posição deverá armazenar a soma dos números de cada coluna da matriz. Exiba na tela
esse array.
Por exemplo, a matriz 5 -8 10 deverá gerar o vetor  31 4 32
                      1  2 15
                      25 10 7*/
#include <stdio.h>

int main() {
    int m[3][3];
    int columnsSum[3];

    printf("Enter a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);

            if (j == 0) {
                columnsSum[0] += m[i][0];
            } else if (j == 1) {
                columnsSum[1] += m[i][1];
            } else if (j == 2) {
                columnsSum[2] += m[i][2];
            }
        }
    }

    printf("Columns' sum: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", columnsSum[i]);
    }

    printf("\n");

    return 0;
}