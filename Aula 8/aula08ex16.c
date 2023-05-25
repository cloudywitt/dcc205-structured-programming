// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 16. Elabore uma função que receba como parâmetro um
valor inteiro n e gere como saída n linhas com pontos
de exclamação, conforme o exemplo a seguir, em que
usamos n = 5: 
!
! !
! ! !
! ! ! !
! ! ! ! !*/
#include <stdio.h>

void printTriangle(int row) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("! ");
        }

        printf("\n");
    }
}

int main() {
    int triangleRows;

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &triangleRows);

    printTriangle(triangleRows);

    return 0;
}