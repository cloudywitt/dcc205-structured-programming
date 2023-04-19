// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0
até N em ordem decrescente.*/
#include <stdio.h>

int main() {
    int num, cont;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (cont = num; cont >= 0; cont--) {
        printf("%d ", cont);
    }

    printf("\n");

    return 0;
}