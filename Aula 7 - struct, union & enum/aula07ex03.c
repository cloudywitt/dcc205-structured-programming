// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 3. Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.*/
#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point a;
    struct Point b;

    printf("Enter point's A coordinates:\n");
    printf("x: ");
    scanf("%f", &a.x);
    printf("y: ");
    scanf("%f", &a.y);

    printf("Enter point's B coordinates:\n");
    printf("x: ");
    scanf("%f", &b.x);
    printf("y: ");
    scanf("%f", &b.y);

    float deltaX = b.x - a.x;
    float deltaY = b.y - a.y;

    float distance = sqrt(pow(deltaX, 2) + pow(deltaY, 2));

    printf("The distance bewteen point A and B is %f\n", distance);

    return 0;
}
