// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o seu
fatorial n!: n! = n * ( – 1) * (n – 2) * ... * 1.*/
#include <stdio.h>

int factorial(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d! = %d\n", num, factorial(num));

    return 0;
}