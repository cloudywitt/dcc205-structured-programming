// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 29. Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule e
imprima a matriz B, sendo que B = A².*/
#include <stdio.h>
#include <math.h>

int main() {
    int a[5][5];
    int b[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);

            b[i][j] = pow(a[i][j], 2);
        }
    }

    printf("Matrix B:\n");
    for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                printf("%d ", b[i][j]);
            }

            printf("\n");
        }

    return 0;
}