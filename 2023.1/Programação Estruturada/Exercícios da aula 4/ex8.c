// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 8. Escreva um programa que, dada a idade de um nadador, classifique-o em uma
das seguintes categorias:
---------------------
| Categoria | Idade |
---------------------
| Infantil A| 5-7   |
| Infantil B| 8-10  |
|  Juvenil A| 11-13 |
|  Juvenil B| 14-17 |
|   Sênior  | >18   |
---------------------
*/
#include <stdio.h>

int main() {
    int idadeNadador;

    printf("Idade do nadador: ");
    scanf("%d", &idadeNadador);

    if (idadeNadador >= 5 && idadeNadador <= 7) {
        printf("Categoria: Infantil A.\n");
    }
    else if (idadeNadador >= 8 && idadeNadador <= 10) {
        printf("Categoria: Infantil B.\n");
    }
    else if (idadeNadador >= 11 && idadeNadador <= 13) {
        printf("Categoria: Juvenil A.\n");
    }
    else if (idadeNadador >= 14 && idadeNadador <= 17) {
        printf("Categoria: Juvenil B.\n");
    }
    else if (idadeNadador >= 18) {
        printf("Categoria: Sênior.\n");
    }

    return 0;
}