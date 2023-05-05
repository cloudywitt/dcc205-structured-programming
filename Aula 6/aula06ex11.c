// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11. Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o
quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor.
Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.*/
#include <stdio.h>
#include <math.h>

int main() {
    float a[20];
    float squaredA[20];
    int i;

    for (i = 0; i < 20; i++) {
        printf("Enter a number: ");
        scanf("%f", &a[i]);
    }

    printf("Set A: ");
    for (i = 0; i < 20; i++) {
        printf("%.1f ", a[i]);
    }

    printf("\n");

    printf("Set A squared: ");
    for (i = 0; i < 20; i++) {
        squaredA[i] = pow(a[i], 2);
        printf("%.1f ", squaredA[i]);
    }    

    printf("\n");

    return 0;
}