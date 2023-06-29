// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 4. Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior
esquerdo e o ponto inferior direito do retângulo. Cada ponto é deﬁnido por uma
estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e leia
uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro
desse retângulo.*/
#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

struct Rectangle {
    struct Point upperLVertex;
    struct Point lowerRVertex;
};

int main() {
    struct Rectangle a;

    printf("Enter the cordinates of the upper left vertex of a rectangle:\n");
    printf("x: ");
    scanf("%f", &a.upperLVertex.x);
    printf("y: ");
    scanf("%f", &a.upperLVertex.y);

    printf("Now the cordinates of the lower right vertex of the same rectangle:\n");
    printf("x: ");
    scanf("%f", &a.lowerRVertex.x);
    printf("y: ");
    scanf("%f", &a.lowerRVertex.y);

    float lenght = a.lowerRVertex.x - a.upperLVertex.x;
    float width = a.upperLVertex.y - a.lowerRVertex.y;

    float diagonal = sqrt(pow(lenght, 2) + pow(width, 2));
    float area = lenght * width;
    float perimeter = 2 * (lenght + width);

    printf("The area is %f\n", area);
    printf("The diagonal is %f\n", diagonal);
    printf("The perimeter is %f\n", perimeter);

    return 0;
}