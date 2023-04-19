// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 17. Escreva um programa que leia um número inteiro e mostre o seu complemento
bit a bit */
#include <stdio.h>

int main() {
    int num, complementoDeNum;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    complementoDeNum = ~num;

    printf("Complemento bit a bit: %d\n",complementoDeNum);

    return 0;
}