// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 13. Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação h = raiz_quadrada(a² + b²).
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula dada. Imprima o resultado*/
#include <stdio.h>
#include <math.h>

int main() {
    float catetoA, catetoB, hipotenusa;

    printf("Cateto a: ");
    scanf("%f", &catetoA);

    printf("Catetbo b: ");
    scanf("%f", &catetoB);

    hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2)); // Raiz quadrada de (a² + b²)

    printf("A hipotenusa vale: %.1f\n", hipotenusa);

    return 0;
}