// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
#include <stdio.h>

int main() {
    int par = 2, somaDosPares, cont;

    for (cont = 0; cont < 50; cont++) {
        somaDosPares += par;

        par += 2;
    }

    printf("A soma dos 50 primeiros pares vale: %d\n", somaDosPares);

    return 0;
}