// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do
número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66. */
#include <stdio.h>

int main() {
    int num, count;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("The divisors of %d are: 1", num);
    for (count = 2; count <= num; count++) {
        if (count == num) {
            printf(" and %d", count);
        } else if (num % count == 0) {
            printf(", %d", count);
        }
    }

    printf(".\n");

    return 0;
}