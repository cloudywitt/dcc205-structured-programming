// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
// 1. Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
#include <stdio.h>

int main() {
    int numero, antecessor, sucessor;

    printf("Digite um número: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);
    
    return 0;
}