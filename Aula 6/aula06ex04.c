// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 4. Faça um programa que leia um vetor de oito posições. Em seguida, leia também
dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu
programa deverá exibir a soma dos valores encontrados nas respectivas posições
X e Y. */
#include <stdio.h>

int main() {
    int index, index1, index2;
    float numbers[8], choosenNumbersSum;

    printf("Enter 8 numbers:\n");
    for (index = 0; index < 8; index++) {
        scanf("%f", &numbers[index]);
    }

    printf("Now choose 2 of them by their index [0-7]: ");
    scanf("%d %d", &index1, &index2);

    choosenNumbersSum = numbers[index1] + numbers[index2];

    printf("%.1f + %.1f = %.1f\n",numbers[index1], numbers[index2], choosenNumbersSum);

    return 0;
}