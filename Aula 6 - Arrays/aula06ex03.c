// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 3. Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
mostre todos os valores lidos juntamente com a média dos valores.*/
#include <stdio.h>

int main() {
    int i;
    float numSum, numVector[5], average;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &numVector[i]);
        numSum += numVector[i];
    }

    average = numSum / 5;

    printf("The average is: %.1f\n", average);

    return 0;
}