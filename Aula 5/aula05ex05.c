// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
#include <stdio.h>

int main() {
    int sumEven, even, count;

    while (count < 50) {
        even += 2;
        sumEven += even;
        count++;
    }

    printf("The sum of the first 50 even numbers is: %d\n", sumEven);
}