// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 4. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando
números maiores que 0.*/
#include <stdio.h>

int main() {
    int multiples3 = 3, count;

    printf("The 5 first multiples of 3 are: ");
    for (count = 0; count < 5; count++) {
        printf("%d ", multiples3);

        multiples3 += 3;
    }

    printf("\n");

    return 0;
}