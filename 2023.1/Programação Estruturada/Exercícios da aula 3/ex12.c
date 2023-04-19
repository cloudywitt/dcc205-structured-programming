// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 12. Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O
volume de um cilindro circular é calculado por meio da seguinte fórmula: V =  π * raio² * altura, em que π = 3.141592.*/
#include <stdio.h>
#include <math.h>

int main() {
    float alturaCilindro, raioCilindro;
    const float PI = 3.141592;

    printf("Altura do cilindro: ");
    scanf("%f", &alturaCilindro);

    printf("Raio do cilindro: ");
    scanf("%f", &raioCilindro);

    float volumeCilindro = PI * pow(raioCilindro, 2) * alturaCilindro;

    printf("O volume do cilindro é %.1f\n", volumeCilindro);

    return 0;
}