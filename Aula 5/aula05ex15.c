// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Elabore um programa que faça a leitura de vários números inteiros até que se digite um número
negativo. O programa tem de retornar o maior e o menor número lido.*/
#include <stdio.h>

int main() {
    int num, maxNum = 0, minNum = 0;

    while (1) {
        printf("Enter an integer (negative to exit): ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        } else if (maxNum == 0 && minNum == 0) {
            maxNum, minNum = num;
        } else if (num > maxNum) {
            maxNum = num;
        } else if (num < minNum) {
            minNum = num;
        }
        
    }

    printf("Max number: %d\n", maxNum);
    printf("Min number: %d\n", minNum);

    return 0;
}
