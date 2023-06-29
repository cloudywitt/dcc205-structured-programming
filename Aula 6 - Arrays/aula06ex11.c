// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11. Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o
quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor.
Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.*/
#include <stdio.h>
#include <math.h>

int main() {
    float nums[20];
    float squaredNums[20];
    int i;

    for (i = 0; i < 20; i++) {
        printf("Enter a number: ");
        scanf("%f", &nums[i]);
    }

    printf("Set A: ");
    for (i = 0; i < 20; i++) {
        printf("%.1f ", nums[i]);
    }

    printf("\n");

    printf("Set A squared: ");
    for (i = 0; i < 20; i++) {
        squaredNums[i] = pow(nums[i], 2);
        printf("%.1f ", squaredNums[i]);
    }    

    printf("\n");

    return 0;
}