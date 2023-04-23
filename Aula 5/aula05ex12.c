// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse
número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 +
11 + 22 + 33 = 78.*/
#include <stdio.h>

int main() {
    int numero, somaDivisoresNum, divisor, contador;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("A soma dos divisores de %d é ", numero);
    for (divisor = 1; divisor <= numero; divisor++) {
        if (divisor == 1) {
            somaDivisoresNum = (numero == 1) ? 0 : 1; // Se for 1, recebe zero, pois não há outro divisior além dele mesmo.
            printf("%d", somaDivisoresNum);
        } else if (numero == divisor && somaDivisoresNum > 1) {
            printf(" = %d", somaDivisoresNum);
        } else if (numero != divisor && numero % divisor == 0) {
            printf(" + %d", divisor);
            somaDivisoresNum += divisor;
        }
    }

    printf(".\n");

}