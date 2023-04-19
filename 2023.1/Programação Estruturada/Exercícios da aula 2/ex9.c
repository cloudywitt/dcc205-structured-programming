// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 9. Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso. Em seguida,
imprima os valores lidos na ordem inversa em que eles foram lidos. */
#include <stdio.h>

int main() {
    float primeiroNum, segundoNum;

    printf("Digite dois valores do tipo float: ");
    scanf("%f %f", &primeiroNum, &segundoNum);

    printf("Invertidos, ficam: %f %f\n", segundoNum, primeiroNum);
    
    return 0;
}