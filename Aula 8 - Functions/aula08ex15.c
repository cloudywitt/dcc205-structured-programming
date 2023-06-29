// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 15. Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o
resultado da seguinte série S: S = 2 / 4 + 5 / 5 + 10 / 6 + ... + (N² + 1) / (N + 3)*/
#include <stdio.h>
#include <math.h>

float s(int N) {
    float result;

    for (int i = 1; i <= N; i++) {
        float numerator = pow(i, 2) + 1;
        float denominator = i + 3;

        result += numerator / denominator;
    }

    return result;
}

int main() {
    int num;

    printf("Enter a N number: ");
    scanf("%d", &num);

    printf("S = %f\n", s(num));

    return 0;
}