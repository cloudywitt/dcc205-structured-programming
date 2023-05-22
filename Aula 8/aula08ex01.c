// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 1. Escreva uma função que receba por parâmetro dois números e retorne o maior deles.*/
#include <stdio.h>

int larger(int a, int b) {
    int g;

    if (a > b) {
        g = a;
    } else {
        g = b;
    }

    return g;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The largest is %d\n", larger(num1, num2));

    return 0;
}