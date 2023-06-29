// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 16. Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (utilize os operadores de deslocamento de bits). */

#include <stdio.h>

int main() {
    int num, numVezes2, numDividioPor2;

    printf("Digite um número: ");
    scanf("%d", &num);

    numVezes2 = num << 1; // equivalente a num * 2¹
    numDividioPor2 = num >> 1; // equivalente a num / 2¹

    printf("%d x 2 = %d\n", num, numVezes2);
    printf("%d / 2 = %d\n", num, numDividioPor2);

    return 0;
}