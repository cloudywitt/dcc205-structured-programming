// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 18. Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
esquerda e à direita, do primeiro número pelo segundo. */
#include <stdio.h>

int main() {
    int operador1, operador2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &operador1, &operador2);

    printf("Deslocamento de %d por %d...\n", operador1, operador2);
    printf("À esquerda: %d\n", operador1 << operador2);
    printf("À direita: %d\n", operador1 >> operador2);
    
    return 0;
}