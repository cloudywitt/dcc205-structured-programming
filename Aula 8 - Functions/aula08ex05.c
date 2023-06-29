// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 5. Escreva uma função para o cálculo do volume de uma esfera V = 4/3π * r³,
em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.*/
#include <stdio.h>
#include <math.h>

const float PI = 3.1414592;

float sphereVolume(float radius) {
    float volume;

    volume = 4.0 / 3 * PI * pow(radius, 3);

    return volume;
}

int main() {
    float radius;
    float volume;

    printf("Enter a radius: ");
    scanf("%f", &radius);

    volume = sphereVolume(radius);

    printf("The volume of the sphere is %.1f\n", volume);

    return 0;
}