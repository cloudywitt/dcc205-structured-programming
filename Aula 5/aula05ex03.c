// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais
ímpares.*/
#include <stdio.h>

int main() {
    int number, count, odd;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("The first %d odd numbers are: ", number);

    odd = 1;

    for (count = 0; count < number; count++) {
        printf("%d ", odd);
        
        odd += 2;
    }   

    printf("\n");

    return 0;
}