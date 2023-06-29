// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 25. Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em
seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, o
número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi
na prova 3.*/
#include <stdio.h>

int main() {
    float scores[10][3]; 

    for (int i = 0; i < 10; i++) { 
        printf("Enter student's %d score:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Test %d: ", j + 1);
            scanf("%f", &scores[i][j]);
        }
    }

    int worstScorePerTest[3];
    float worstScore;
    int worstScorePos;

    for (int i = 0; i < 10; i++) { 
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                worstScore = scores[i][j];
                worstScorePos = 0;
            } else if (scores[i][j] < worstScore) {
                worstScore = scores[i][j];
                worstScorePos = j;
            }
        }

        worstScorePerTest[worstScorePos]++;
    }

    printf("Number of students whose worst score was on test 1: %d\n", worstScorePerTest[0]);
    printf("Number of students whose worst score was on test 2: %d\n", worstScorePerTest[1]);
    printf("Number of students whose worst score was on test 3: %d\n", worstScorePerTest[2]);

    return 0;
}