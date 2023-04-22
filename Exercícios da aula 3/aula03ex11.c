// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11. Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
correspondente. A área do círculo é A = π * raio², sendo π = 3.141592.*/
#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    const float PI = 3.141592;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    float area = PI * pow(raio, 2); 

    printf("A área vale: %.2fm²\n Tipo", area);

    return 0;
}