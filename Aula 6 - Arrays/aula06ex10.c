// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 10. Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
números naturais que não são múltiplos de 7. Ao ﬁnal, imprima esse vetor na tela.*/
#include <stdio.h>

int main() {
    int vector[10];
    int vectorIndex, count = 1;

    while (vectorIndex < 100) {
        if (count % 7 != 0) {
            vector[vectorIndex] = count;
            printf("%d ", vector[vectorIndex]);
            vectorIndex++;
        }

        count++;
    }

    printf("\n");

    return 0;
}