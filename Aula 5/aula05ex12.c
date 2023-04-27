// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse
número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 +
11 + 22 + 33 = 78.*/
#include <stdio.h>

int main() {
    int num, sumDivisors, divisor, count;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("The sum of the divisors of %d is: ", num);
    for (divisor = 1; divisor <= num; divisor++) {
        if (divisor == 1) {
            sumDivisors = (num == 1) ? 0 : 1; // If num is equal to 1, 0 because there's no other divisor instead of itself
            printf("%d", sumDivisors);
        } else if (num == divisor && sumDivisors > 1) { // If in the end there's more than 1 divisor, print "=" sing 
            printf(" = %d", sumDivisors);
        } else if (num != divisor && num % divisor == 0) { // The first condition prevents the number itself from being checked as a divisor
            printf(" + %d", divisor);
            sumDivisors += divisor;
        }
    }

    printf(".\n");

}