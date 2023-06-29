// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 8. Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule e
mostre na tela a quantidade de números negativos e a soma dos números positivos
desse vetor.*/
#include <stdio.h>

int main() {
    float nums[10];
    float positiveSum;
    int i, negativeCount;

    for (i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%f", &nums[i]);

        if (nums[i] > 0) {
            positiveSum += nums[i];
        } else if (nums[i] < 0) {
            negativeCount++;
        }
    }

    printf("Sum of the positives: %f\n", positiveSum);
    printf("Negative's count: %d\n", negativeCount);

    return 0;
}