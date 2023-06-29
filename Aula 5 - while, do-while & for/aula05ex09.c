// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 9. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/
#include <stdio.h>

int main() {
    int count;
    float num, maxNum, minNum;

    printf("Enter 10 numbers:\n");
    for (count = 1; count < 11; count++) {
        printf("%d: ", count);
        scanf("%f", &num);

        if (count == 0) {
            maxNum = num;
            minNum = num;
        } else if (num > maxNum) {
            maxNum = num;
        } else if (num < minNum) {
            minNum = num;
        }
    }

    printf("The highest number is: %.1f\n", maxNum);
    printf("The smallest number is: %.1f\n", minNum);

    return 0;
}