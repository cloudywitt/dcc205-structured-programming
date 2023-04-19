// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
// 3. Faça um programa que leia três valores inteiros e mostre sua soma.
#include <stdio.h>

int main() {
    int valor1, valor2, valor3, soma;

    printf("Valor 1: ");
    scanf("%d", &valor1);

    printf("Valor 2: ");
    scanf("%d", &valor2);
    
    printf("Valor 3: ");
    scanf("%d", &valor3);

    soma = valor1 + valor2 + valor3;

    printf("%d + %d + %d = %d\n", valor1, valor2, valor3, soma);

    return 0;
}