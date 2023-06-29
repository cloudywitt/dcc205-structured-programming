// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 8. Faça um programa que leia 10 inteiros e imprima sua média. */
#include <stdio.h>

int main() {
    float average;
    int sum, count, num;

    printf("Enter 10 integer:\n");
    for (count = 1; count < 11; count++) {
        printf("%d: ", count);
        scanf("%d", &num);

        sum += num;
    }

    average = (float) sum / 10;

    printf("The average is: %.1f.\n", average);

    return 0;
}