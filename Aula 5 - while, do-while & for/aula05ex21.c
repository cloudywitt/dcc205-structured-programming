// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 21. Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas
vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo
usuário.*/
#include <stdio.h>

int main() {
    int number, maxNumber, maxCount, iterations, count;

    printf("Enter how much numbers do you wanna enter: ");
    scanf("%d", &iterations);

    for (count = 0; count < iterations; count++) {
        printf("Enter an integer: ");
        scanf("%d", &number);

        if (count == 0) {
            maxNumber = number;
            maxCount++;
        } else if (number > maxNumber) {
            maxCount = 0;
            maxNumber = number;
            maxCount++;
        } else if (number == maxNumber) {
            maxCount++;
        }
    }

    printf("Max number entered: %d\n", maxNumber);
    printf("Times entered: %d\n", maxCount);

    return 0;
}