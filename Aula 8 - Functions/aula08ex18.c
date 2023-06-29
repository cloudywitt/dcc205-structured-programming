// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 18. Faça uma função que receba como parâmetro o valor de um ângulo em graus e calcule
o valor do seno desse ângulo usando a sua respectiva série de Taylor. Considere π = 3.1414592 e n variando de 0
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

float taylorSin(float angleDegrees) {
    float taylorSinResult;

    for (int n = 0; n <= 5; n++) {
        float numerator = pow(-1, n);
        float denominator = factorial(2 * n + 1);
        float angleRadians = radians(angleDegrees);

        float result = numerator / denominator * pow(angleRadians, 2 * n + 1);

        taylorSinResult += result; 
    }

    return taylorSinResult;
}

int main() {
    float angle;

    printf("Enter an angle (in degrees): ");
    scanf("%f", &angle);

    float taylorSinOfAngle = taylorSin(angle);

    printf("The taylor sin (from 0 to 5) of %.1f° is %f\n", angle, taylorSinOfAngle);

    return 0;
}