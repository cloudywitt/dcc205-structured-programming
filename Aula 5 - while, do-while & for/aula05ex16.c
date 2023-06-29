// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 16. Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série
harmônica. Ou seja: Hn = 1 + 1 / 2 + 1 / 3 + 1 / 4 ... + 1 / n. Apresente um programa que calcule o valor de
qualquer Hn.*/
#include <stdio.h>

int main() {
    int n, counter;
    float hn = 1;

    printf("Enter a number n: ");
    scanf("%d", &n);

    for (counter = 1; counter <= n; counter++) {
        hn += (float) 1 / counter;
    }

    printf("Hn = %f", hn);

    return 0;
}