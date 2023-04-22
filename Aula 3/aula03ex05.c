// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 5. Faça um programa que calcule o ano de nascimento de uma pessoa a partir de
sua idade e do ano atual.*/
#include <stdio.h>

int main() {
    int ano = 2023, anoDeNascimento, idade;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoDeNascimento);

    idade = ano - anoDeNascimento;

    printf("Sua idade: %d\n", idade);

    return 0;
}