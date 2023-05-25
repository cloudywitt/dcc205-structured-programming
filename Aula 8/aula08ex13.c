// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 13. Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o
somatório de 1 até n: 1 + 2 + 3 + ... + n.*/
#include <stdio.h>

int summation(int num) {
    int summation = 1;

    for (int n = 2; n <= num; n++) {
        summation += n;    
    }

    return summation;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int summationFromOneToNum = summation(num);

    printf("The sum of all integers from 1 to %d is %d\n", num, summationFromOneToNum);

    return 0;
}