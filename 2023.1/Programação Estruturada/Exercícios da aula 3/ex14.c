// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso.*/
#include <stdio.h>

int main() {
    char letraMaius, letraMin;

    printf("Digite uma letra em maúsculo: ");
    scanf("%c", &letraMaius);

    letraMin = letraMaius + 32; // Na tabela ASCII, as letras maísculas estão atrás das minúsculas em 32.

    printf("Em minúsculo: %c\n", letraMin);

    return 0;
}
