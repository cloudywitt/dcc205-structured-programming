// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 13. Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são
múltiplos de 3 ou 5.*/
#include <stdio.h>

int main() {
    int numNatural, numero, somaMultiplosDe3ou5 = 0;

    for (numNatural = 0; numNatural < 1000; numNatural++) {
        if (numNatural % 3 == 0 || numNatural % 5 == 0) {
            somaMultiplosDe3ou5 += numNatural;
        }
    }

    printf("A soma de todos os naturais múltiplos de 3 ou 5 abaixo de 1.000 é %d.\n", somaMultiplosDe3ou5);

    return 0;
}