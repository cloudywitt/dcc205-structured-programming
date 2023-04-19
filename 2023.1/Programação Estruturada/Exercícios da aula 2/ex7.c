// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
// 7. Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Usando o operado %%d, fica: %d\n", caractere);

    return 0;
}