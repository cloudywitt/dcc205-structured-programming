// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 17. Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do
chamado triângulo de Floyd: 
1
2 3
4 5 6
7 8 9 10
11 12 13 14*/
#include <stdio.h>

int main() {
    int linhaAtual, linhaDesejada;
    int baseAtual, baseDesejada, preenchimentoDaBase;

    printf("Quantidade de linhas para o Triângulo de Floyd: ");
    scanf("%d", &linhaDesejada);

    baseDesejada = 1;
    preenchimentoDaBase = 1;

    for (linhaAtual = 1; linhaAtual <= linhaDesejada; linhaAtual++) {
        for (baseAtual = 1; baseAtual <= baseDesejada; baseAtual++) {
            printf("%d ", preenchimentoDaBase);
            preenchimentoDaBase++;
        }

        printf("\n");
        baseDesejada++;
    }

    return 0;
}