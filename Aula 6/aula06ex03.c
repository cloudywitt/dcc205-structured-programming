// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 3. Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
mostre todos os valores lidos juntamente com a média dos valores.*/
#include <stdio.h>

int main() {
    int index;
    float num, numSum, numVector[5], average;

    printf("Enter 5 numbers:\n");
    for (index = 0; index < 5; index++) {
        scanf("%f", &numVector[index]);
        numSum += numVector[index];
    }

    average = numSum / 5;

    printf("The average is: %.1f\n", average);

    return 0;
}