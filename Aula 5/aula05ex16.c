// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 16. Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série
harmônica. Ou seja: Hn = 1 + 1 / 2 + 1 / 3 + 1 / 4 ... + 1 / n. Apresente um programa que calcule o valor de
qualquer Hn.*/
#include <stdio.h>

int main() {
    int enesimoDenominador, contador;
    float somaDosHarmonicos = 1;

    printf("Digite um n: ");
    scanf("%d", &enesimoDenominador);

    for (contador = 1; contador <= enesimoDenominador; contador++) {
        somaDosHarmonicos += (float) 1 / contador;
    }

    printf("Hn = %f", somaDosHarmonicos);

    return 0;
}