// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Elabore um programa que faça a leitura de vários números inteiros até que se digite um número
negativo. O programa tem de retornar o maior e o menor número lido.*/
#include <stdio.h>

int main() {
    int numero, maiorNumeroDigitado = 0, menorNumeroDigitado = 0;

    while (1) { // Loop infinito
        printf("Digite um número inteiro (negativo para sair): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        } else if (maiorNumeroDigitado == 0 && menorNumeroDigitado == 0) {
            maiorNumeroDigitado, menorNumeroDigitado = numero;
        } else if (numero > maiorNumeroDigitado) {
            maiorNumeroDigitado = numero;
        } else if (numero < menorNumeroDigitado) {
            menorNumeroDigitado = numero;
        }
        
    }

    printf("Maior número lido: %d\n", maiorNumeroDigitado);
    printf("Menor número lido: %d\n", menorNumeroDigitado);

    return 0;
}
