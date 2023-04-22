// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
#include <stdio.h>

int main() {
    int somaPares, parAtual, contador;

    while (contador < 50) {
        parAtual += 2;
        somaPares += parAtual;
        contador++;
    }

    printf("Soma dos 50 primeiros pares: %d\n", somaPares);
}