// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 7. Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente
o resultado na tela.*/
#include <stdio.h>

int main() {
    int count;
    float num, sum;

    printf("Enter 10 numbers:\n");
    for (count = 1; count < 11; count++) {
        printf("%d: ", count);
        scanf("%f", &num);

        sum += num;
    }

    printf("The sum is %.1f.\n", sum);
}