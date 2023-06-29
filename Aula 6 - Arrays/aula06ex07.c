// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 7. Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida
deverão ser impressos o maior e o menor elemento desse vetor.*/
#include <stdio.h>

int main() {
    float nums[10];
    float max, min;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%f", &nums[i]);

        if (i == 0) {
            max, min = nums[i];
        } else if (nums[i] > max) {
            max = nums[i];
        } else if (nums[i] < min) {
            min = nums[i];
        }
    }

    printf("Max: %.1f\n", max);
    printf("Min: %.1f\n", min);

    return 0;
}