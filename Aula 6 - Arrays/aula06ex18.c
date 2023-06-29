// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 18. Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
diagonal principal e com 0 os demais elementos. Ao ﬁnal, escreva a matriz obtida na
tela.*/
#include <stdio.h>

int main() {
    int m[5][5] = {{1, 0, 0, 0, 0},
                   {0, 1, 0, 0, 0},
                   {0, 0, 1, 0, 0},
                   {0, 0, 0, 1, 0},
                   {0, 0, 0, 0, 1}};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", m[i][j]);
        }

        printf("\n");
    }

    return 0;
}