// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 5. Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e
leia uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro
do retângulo. */
#include <stdio.h>

struct Point {
    float x;
    float y;
};

struct Rectangle {
    struct Point upperLVertex;
    struct Point lowerRVertex;
};

int main() {
    struct Rectangle r;
    struct Point p;

    printf("Enter the cordinates of the upper left vertex of a rectangle:\n");
    printf("x: ");
    scanf("%f", &r.upperLVertex.x);
    printf("y: ");
    scanf("%f", &r.upperLVertex.y);

    printf("Enter the cordinates of the lower right vertex of the same rectangle:\n");
    printf("x: ");
    scanf("%f", &r.lowerRVertex.x);
    printf("y: ");
    scanf("%f", &r.lowerRVertex.y);

    printf("Now enter the cordinates of a point:\n");
    printf("x: ");
    scanf("%f", &p.x);
    printf("y: ");
    scanf("%f", &p.y);

    if ((p.x <= r.lowerRVertex.x && p.x >= r.upperLVertex.x) && (p.y >= r.lowerRVertex.y && p.y <= r.upperLVertex.y)) {
        printf("The point is inside the given rectangle.\n");
    } else {
        printf("The point is outside the given rectangle.\n");
    }

    return 0;
}