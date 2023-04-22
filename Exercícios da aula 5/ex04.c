// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 4. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando
números maiores que 0.*/
#include <stdio.h>

int main() {
    int multiploDe3 = 3, cont;

    printf("Os 5 primeiros múltiplos de 3: ");
    for (cont = 0; cont < 5; cont++) { // verificar se é melhor colocar só "cont" ou se deixa "cont = 0".
        printf("%d ", multiploDe3);

        multiploDe3 += 3;
    }

    printf("\n");

    return 0;
}