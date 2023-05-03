// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 6. Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor. */
#include <stdio.h>

int main() {
    int nums[10];
    int i, evenCount;

    for (i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%d", &nums[i]);

        if (nums[i] % 2 == 0) {
            evenCount++;
        }
    }

    printf("%d even numbers were entered\n", evenCount);

    return 0;
}