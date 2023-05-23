// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 4. Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular
e retorne o volume desse cilindro. O volume de um cilindro circular é calculado por
meio da seguinte fórmula: V = π * raio² * altura em que π = 3.1414592.*/
#include <stdio.h>
#include <math.h>

const float PI = 3.1414592;

float volumeOfCylinder(float radius, float height) {
    float volume;

    volume = PI * pow(radius, 2) * height;

    return volume;
}

int main() {
    float radius;
    float height;
    float volume;

    printf("Enter the radius of a cylinder: ");
    scanf("%f", &radius);

    printf("Now the height of the same cylinder: ");
    scanf("%f", &height);

    volume = volumeOfCylinder(radius, height);

    printf("The volume is %.1f\n", volume);

    return 0;
}