// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 10. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/
#include <stdio.h>

int main() {
    int num, sumPositive = 0, positivesCount = 0;
    float average;

    while (positivesCount < 10) {
        printf("Enter %d positive integers: ", 10 - positivesCount);
        scanf("%d", &num);

        if (num > 0) {
            sumPositive += num;
            positivesCount++;
        }
    }

    average = (float) sumPositive / positivesCount;

    printf("The average is %.1f\n", average);

    return 0;
}