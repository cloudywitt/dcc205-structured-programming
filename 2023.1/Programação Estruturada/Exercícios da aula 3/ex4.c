// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 4. Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses
valores.*/
#include <stdio.h>

int main() {
    float valor1, valor2, valor3, valor4, mediaAritmetica;

    printf("Valor 1: ");
    scanf("%f", &valor1);

    printf("Valor 2: ");
    scanf("%f", &valor2);

    printf("Valor 3: ");
    scanf("%f", &valor3);
    
    printf("Valor 4: ");
    scanf("%f", &valor4);

    mediaAritmetica = (valor1 + valor2 + valor3 + valor4) / 4;

    printf("Média aritmética: %.1f\n", mediaAritmetica);

    return 0;
}