// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 13. Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são
múltiplos de 3 ou 5.*/
#include <stdio.h>

int main() {
    int nauturalNum, sumMultiplesOf3or5 = 0;

    for (nauturalNum = 0; nauturalNum < 1000; nauturalNum++) {
        if (nauturalNum % 3 == 0 || nauturalNum % 5 == 0) {
            sumMultiplesOf3or5 += nauturalNum;
        }
    }

    printf("The sum of all natural numbers, multiples of 3 or 5 less than 1000 is: %d.\n", sumMultiplesOf3or5);

    return 0;
}