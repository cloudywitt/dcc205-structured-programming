// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras
diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha. Use um único comando printf()
para cada operação de escrita das três variáveis. */
#include <stdio.h>

int main() {
    char caractere;
    int numInt;
    float numFloat;

    printf("Digite um caractere, um número inteiro e um número de ponto flutuante: ");
    scanf("%c %d %f", &caractere, &numInt, &numFloat);

    printf("\nAqui estão seus valores...\n");
    printf("Separados por espaços: %c %d %f\n", caractere, numInt, numFloat);
    printf("Separados por uma tabulação horizontal: %c\t%d\t%f\t\n", caractere, numInt, numFloat);
    printf("Um em cada linha:\n%c\n%d\n%f\n", caractere, numInt, numFloat);

    return 0;
}