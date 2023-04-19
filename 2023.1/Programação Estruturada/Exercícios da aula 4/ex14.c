// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois */
#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int numDivisivelPor3 = num % 3 == 0;
    int numDivisivelPor5 = num % 5 == 0;

    // "^" = "ou exclusivo", i. e., um "ou" onde só um termos pode ser verdadeiro.
    if (numDivisivelPor3 ^ numDivisivelPor5) {
        if (numDivisivelPor3) {
            printf("O número é exclusivamente divisível por 3.\n");
        }
        else {
            printf("O número é exclusivamente divisível por 5.\n");
        }
    } 
    else {
        printf("O número não é exclusivamente divisíver por 3 nem por 5.\n");
    }

    return 0;
}