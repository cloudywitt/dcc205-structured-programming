// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 9. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/
#include <stdio.h>

int main() {
    int contador;
    float numeroLido, maiorNumeroLido, menorNumeroLido;

    for (contador = 0; contador < 10; contador++) {
        printf("Digite um número: ");
        scanf("%f", &numeroLido);

        if (contador == 0) {
            maiorNumeroLido = numeroLido;
            menorNumeroLido = numeroLido;
        } else if (numeroLido > maiorNumeroLido) {
            maiorNumeroLido = numeroLido;
        } else if (numeroLido < menorNumeroLido) {
            menorNumeroLido = numeroLido;
        }
    }

    printf("Maior valor lido: %.1f\n", maiorNumeroLido);
    printf("Menor valor lido: %.1f\n", menorNumeroLido);

    return 0;
}