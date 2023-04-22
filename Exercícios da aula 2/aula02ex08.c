// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
// 8. Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.
#include <stdio.h>

int main() {
    int primeiroNum, segundoNum;

    printf("Primeiro número: ");
    scanf("%d", &primeiroNum);
    
    printf("Segundo número: ");
    scanf("%d", &segundoNum);

    printf("Invertidos, ficam: %d %d\n", segundoNum, primeiroNum);

    return 0;
}