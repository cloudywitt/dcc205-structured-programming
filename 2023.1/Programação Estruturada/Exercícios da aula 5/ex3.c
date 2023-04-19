// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais
ímpares.*/
#include <stdio.h>

int main() {
    int num, cont, impar = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Os %d primeiros números naturais ímpares: ", num);

    for (cont; cont < num; cont++) {
        printf("%d ", impar);
        
        impar += 2;
    }   

    printf("\n");

    return 0;
}