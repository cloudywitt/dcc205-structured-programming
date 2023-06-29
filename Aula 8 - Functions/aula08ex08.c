// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 8. Elabore uma função para veriﬁcar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Exemplos: 1, 4, 9.*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isSquare(int num) {
    int isSquare;

    if (sqrt(num) == (int) sqrt(num)) {
        isSquare = true;
    } else {
        isSquare = false;
    }

    return isSquare;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isSquare(num)) {
        printf("The number is a square.\n");
    } else {
        printf("The number is not a square.\n");
    }

    return 0;
}