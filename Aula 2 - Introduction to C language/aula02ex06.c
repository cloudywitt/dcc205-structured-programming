// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
// 6. Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
#include <stdio.h>

int main() {
    double num;

    printf("Digite um valor do tipo double: ");
    scanf("%lf", &num);

    printf("Em notação científica, fica: %E\n", num);

    return 0;
}