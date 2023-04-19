// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 9. Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa 

---------------------------------------------------------------------
|      Altura       |                      Peso                     |
|                   | Aé 60 | Entre 60-90 (inclusive) | Acima de 90 |
|-------------------|-----------------------------------------------|
| Menor do que 1,20 |   A   |            D            |      G      | 
|     1,20-1,70     |   B   |            E            |      H      |
| Maior do que 1,70 |   C   |            F            |      I      |
---------------------------------------------------------------------
*/
#include <stdio.h>

int main() {
    float altura, peso;
    
    printf("Altura: ");
    scanf("%f", &altura);

    printf("Peso: ");
    scanf("%f", &peso);

    if (altura < 1.20) {
        if (peso < 60) {
            printf("Categoria: A\n");
        } else if ( peso >= 60 && peso <= 90) {
            printf("Categoria: D\n");
        } else {
            printf("Categoria: G\n");
        }
    }
    else if (altura >= 1.20 && altura <= 1.70) {
        if (peso < 60) {
            printf("Categoria: B\n");
        } else if (peso >= 60 && peso <= 90) {
            printf("Categoria: E\n");
        } else {
            printf("Categoria: H\n");
        }
    } 
    else {
        if (peso < 60){
            printf("Categoria: C\n");
        } else if (peso >= 60 && peso <= 90) {
            printf("Categoria: F\n");
        } else {
            printf("Categoria: I\n");
        }
    }

    return 0;
}