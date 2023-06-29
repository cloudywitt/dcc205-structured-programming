// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 2. Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X
e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a
origem das coordenadas, isto é, a posição (0,0).*/
#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point p;

    printf("Enter a point's coordinates:\n");
    printf("x: ");
    scanf("%f", &p.x);
    printf("y: ");
    scanf("%f", &p.y);

    float distance = sqrt(pow(p.x, 2) + pow(p.y, 2));

    printf("The distance between the point and the origin is %f\n", distance);

    return 0;
}