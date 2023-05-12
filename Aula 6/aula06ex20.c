// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 20. Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores
negativos ela possui.*/
#include <stdio.h>

int main() {
    int m[4][4];
    int negativeCount;

    printf("Enter a 4x4 matrix: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);

            if (m[i][j] < 0) {
                negativeCount++;
            }
        }
    }

    printf("There are %d negative values.\n", negativeCount);

    return 0;
}