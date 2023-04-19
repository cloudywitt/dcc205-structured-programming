// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 13. Faça um programa que mostre ao usuário um menu com quatro opções de
operações matemáticas (as operações básicas, por exemplo). O usuário escolhe
uma das opções, e o seu programa pede dois valores numéricos e realiza a
operação, mostrando o resultado. */
#include <stdio.h>

int main() {
    float primeiroTermo, segundoTermo;
    int opcao;

    printf("------------------\n");
    printf("[1] Soma\n");
    printf("[2] Subtração\n");
    printf("[3] Multiplicação\n");
    printf("[4] Divisão\n");
    printf("------------------\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);
    printf("------------------\n");

    printf("Primeiro termo: ");
    scanf("%f", &primeiroTermo);

    printf("Segundo termo: ");
    scanf("%f", &segundoTermo);

    switch (opcao) {
        case 1:
            float soma = primeiroTermo + segundoTermo;

            printf("%.1f + %.1f = %.1f\n", primeiroTermo, segundoTermo, soma);

            break;
        case 2:
            float subtracao = primeiroTermo - segundoTermo;

            printf("%.1f - %.1f = %.1f\n", primeiroTermo, segundoTermo, subtracao);

            break;
        case 3:
            float multiplicacao = primeiroTermo * segundoTermo;

            printf("%.1f x %.1f = %.1f\n", primeiroTermo, segundoTermo, multiplicacao);

            break;
        case 4:
            float divisao = primeiroTermo / segundoTermo;

            printf("%.1f ÷ %.1f = %.1f\n", primeiroTermo, segundoTermo, divisao);
    }

    return 0;
}