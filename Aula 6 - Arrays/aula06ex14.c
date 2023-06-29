// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 14. Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números. Considere n = 10. O vetor v deve ser lido do teclado.*/
#include <stdio.h>
#include <math.h>

int main() {
    int n = 10;
    float v[n];
    float standardDeviation;
    float sum;
    float summation;
    float mean;

    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%f", &v[i]);

        sum += v[i];
    }

    mean = sum / 10;

    for (int i = 0; i < n; i++) {
        summation += pow(v[i] - mean, 2);
    }
    
    standardDeviation = sqrt(summation / (n - 1));

    printf("The standard deviation is %f\n", standardDeviation);

    return 0;
}