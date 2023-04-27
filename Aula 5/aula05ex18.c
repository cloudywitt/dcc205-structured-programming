// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 18. Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido
é primo ou não.*/
#include <stdio.h>

int main() {
    int num, count, numDivisors;

    printf("Enter an integer greater or equal to 1: ");
    scanf("%d", &num);

    for (count = 1; count <= num; count++) {
        if (num % count == 0) {
            numDivisors++;
        }
    }

    if (numDivisors > 2) {
        printf("%d's not prime.\n", num);
    } else {
        printf("%d's prime.\n", num);
    }

    return 0;
}