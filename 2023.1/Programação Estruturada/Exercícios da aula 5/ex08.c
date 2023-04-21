// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 8. Faça um programa que leia 10 inteiros e imprima sua média. */
#include <stdio.h>

int main() {
    float soma = 0, media, valorUsuario;
    int contador;

    for (contador = 0; contador < 10; contador++) {
        printf("Digite um número: ");
        scanf("%f", &valorUsuario);

        soma += valorUsuario;
    }

    media = soma / 10;

    printf("A média dos valores é %.1f\n", media);

    return 0;
}