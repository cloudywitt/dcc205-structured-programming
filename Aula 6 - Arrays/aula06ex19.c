// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 19. Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores
maiores do que 10 ela possui.*/
#include <stdio.h>

int main() {
    int m[4][4];
    int greaterThanTenCount;

    printf("Enter a 4x4 matrix: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);

            if (m[i][j] > 10) {
                greaterThanTenCount++;
            }
        }
    }

    printf("There are %d values greater than 10.\n", greaterThanTenCount);

    return 0;
}