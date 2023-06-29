// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 17)Elabore uma função que receba como parâmetro um
valor inteiro n e gere como saída um triângulo lateral
formado por asteriscos conforme o exemplo a seguir,
em que usamos n = 4: 
*
* *
* * *
* * * *
* * *
* *
*
*/
#include <stdio.h>

void printTriangle(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("* ");
        }

        printf("\n");
    }

    for (int i = height - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("* ");
        }

        printf("\n");
    }
}

int main() {
    int triangleHeight;

    printf("Enter the height of the lateral triangle: ");
    scanf("%d", &triangleHeight);

    printTriangle(triangleHeight);

    return 0;
}