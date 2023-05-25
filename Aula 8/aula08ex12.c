// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 12. Escreva uma função que receba um número inteiro positivo e retorne o maior fator
primo desse número.*/
#include <stdio.h>

int isPrime(int num) {
    int isPrime = 0;
    int divisorsCount = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisorsCount++;
        }
    }

    if (divisorsCount > 2) {
        isPrime = 0;
    } else {
        isPrime = 1;
    }

    return isPrime;
}

int findLargestPrimeFactor(int num) {
    int largestPrimeFactor = 0;

    for (int n = 1; n <= num; n++) {
        if (num % n == 0 && isPrime(n)) {
            largestPrimeFactor = n;
        }

    }

    return largestPrimeFactor;
}

int main() {
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int largestPrimeFactor = findLargestPrimeFactor(num);

    printf("The largest prime factor of %d is %d\n", num, largestPrimeFactor);

    return 0;
}