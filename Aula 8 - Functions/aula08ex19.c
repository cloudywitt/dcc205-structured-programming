// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 19. Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule
o valor do cosseno desse ângulo usando a sua respectiva série de Taylor:
em que x é o valor do ângulo em radianos. Considerar π = 3.1414592 e n variando de 0
até 5.*/
#include <stdio.h>
#include <math.h>

const float PI = 3.1414592;

float radians(float degrees) {
    float radians = degrees / 180 * PI;

    return radians;
}

int factorial(int num) {
    if (num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

float taylorCos(float angleDegrees) {
    float taylorCosResult;

    for (int n = 0; n <= 5; n++) {
        float numerator = pow(-1, n);
        float denominator = factorial(2 * n);
        float angleRadians = radians(angleDegrees);

        float result = numerator / denominator * pow(angleRadians, 2 * n);

        taylorCosResult += result; 
    }

    return taylorCosResult;
}

int main() {
    float angle;

    printf("Enter an angle (in degrees): ");
    scanf("%f", &angle);

    float taylorCosOfAngle = taylorCos(angle);

    printf("The taylor cos (from 0 to 5) of %.1f° is %f\n", angle, taylorCosOfAngle);

    return 0;
}