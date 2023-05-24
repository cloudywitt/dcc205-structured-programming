// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 9. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra.
Se a letra for “A”, a função deverá calcular a média aritmética das notas do aluno; se for
“P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada
para o programa principal.*/
#include <stdio.h>

float average(float score1, float score2, float score3, char averageType) {
    float average;

    if (averageType == 'A') {
        float arithmeticMean = (score1 + score2 + score3) / 3;
        
        average = arithmeticMean;
    } else if (averageType == 'P') {
        float weightedMean = (score1 * 5 + score2 * 3 + score3 * 2) / 3;

        average = weightedMean;
    }

    return average;
}

int main() {
    float score1, score2, score3;
    char averageType;

    printf("Enter the student's 3 scores: ");
    scanf("%f %f %f", &score1, &score2, &score3);
    getchar();

    printf("Enter the kind of average (A or P): ");
    scanf("%c", &averageType);

    float avg = average(score1, score2, score3, averageType);

    printf("The average is %.1f\n", avg);

    return 0;
}