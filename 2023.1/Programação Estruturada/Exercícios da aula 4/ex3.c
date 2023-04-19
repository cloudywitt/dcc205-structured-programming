// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 3. Faça um programa que leia um número inteiro e verifique se esse número é par
ou ímpar. */
#include <stdio.h>

int main() {
    int num, numÉPar;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    numÉPar = num % 2 == 0;

    if (numÉPar) {
        printf("%d é par.\n", num);
    }
    else {
        printf("%d é ímpar.\n", num);
    }

    return 0;
}