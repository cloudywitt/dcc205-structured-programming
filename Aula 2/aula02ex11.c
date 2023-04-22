// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11. Elabore um programa que contenha uma constante qualquer do tipo float. Use o comando #define.
Imprima essa constante. */
#include <stdio.h>

int main() {
    #define PI 3.14

    printf("Minha constante em float (pi): %.2f\n", PI);

    return 0;
}