// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 17. Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas do
chamado triângulo de Floyd: 
1
2 3
4 5 6
7 8 9 10
11 12 13 14*/
#include <stdio.h>

int main() {
    int row, rowChoosed;
    int lineLenght, number = 1;

    printf("Enter how much Floyd's Triangle lines do you want to see: ");
    scanf("%d", &rowChoosed);

    for (row = 1; row <= rowChoosed; row++) {
        for (lineLenght = 1; lineLenght <= row; lineLenght++) { // Because line's lenght's equal to its row number
            printf("%d ", number);
            number++;
        }

        printf("\n");
    }

    return 0;
}