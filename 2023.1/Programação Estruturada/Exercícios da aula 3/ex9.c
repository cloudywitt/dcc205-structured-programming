// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 9. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π =
3.141592.*/
#include <stdio.h>

int main() {
    float anguloGraus, anguloRadianos;
    const float PI = 3.14159;

    printf("Ângulo (em graus): ");
    scanf("%f", &anguloGraus);

    anguloRadianos = anguloGraus * PI / 180;

    printf("%.2f° equivale a %.2frad\n", anguloGraus, anguloRadianos);

    return 0;
}