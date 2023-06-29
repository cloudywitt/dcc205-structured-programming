// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 16. Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor
valor contido nessa matriz.*/
#include <stdio.h>

int main() {
    int m[3][3];
    int smallest;

    printf("Enter the elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
            
            if (i == 0 && j == 0) {
                smallest = m[i][j];
            } else if (m[i][j] < smallest) {
                smallest = m[i][j];
            }
        }
    }

    printf("Smallest number: %d\n", smallest);

    return 0;
}
