// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 19. Elabore um programa que leia dois números inteiros e exiba o resultado das
operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles. */
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);
    
    printf("---------------------------------\n");

    printf("Operações bit a bit de...\n");
    printf("OU Exclusivo (XOR): %d\n", num1 ^ num2);
    printf("OU (OR): %d\n", num1 | num2);
    printf("E (AND): %d\n", num1 & num2);

    return 0;
}