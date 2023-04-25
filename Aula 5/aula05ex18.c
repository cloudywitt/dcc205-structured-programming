// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 18. Faça um programa que receba um número inteiro maior do que 1 e verifique se o número fornecido
é primo ou não.*/
#include <stdio.h>

int main() {
    int numero, numeroAnalisado, divisoresDeNumero;

    printf("Digite um número inteiro maior do que 1: ");
    scanf("%d", &numero);

    for (numeroAnalisado = 1; numeroAnalisado <= numero; numeroAnalisado++) {
        if (numero % numeroAnalisado == 0) {
            divisoresDeNumero++;
        }
    }

    if (divisoresDeNumero > 2) {
        printf("%d não é primo.\n", numero);
    } else {
        printf("%d é primo.\n", numero);
    }

    return 0;
}