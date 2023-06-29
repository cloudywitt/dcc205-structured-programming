// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 20. Faça um programa que leia um valor inteiro e positivo N, calcule e mostre o valor E, conforme a
fórmula a seguir: E = 1 / 1! + 1 / 2! + 1 / 3! + ... + 1 / N! */
#include <stdio.h>

int main() {
    int nTerm, counter, factorial = 1;
    float sumE;

    printf("Enter a positive integer: ");
    scanf("%d", &nTerm);

    for (counter = 1; counter <= nTerm; counter++) {
        factorial *= counter;
        sumE += 1.0 / factorial;

    }
    
    printf("E = %f\n", sumE);
        
    return 0;
}