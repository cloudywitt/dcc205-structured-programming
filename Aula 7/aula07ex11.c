// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11. Escreva um programa que contenha uma estrutura representando uma data válida.
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e
armazene nessa estrutura. Calcule e exiba o número de dias que decorreram entre as
duas datas*/
#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date dates[2];

    for (int i = 0; i < 2; i++) {
        do {
            printf("Enter a valid day: ");
            scanf("%d", &dates[i].day);
        } while (dates[i].day < 1 || dates[i].day > 31);

        do {
            printf("Enter a valid month: ");
            scanf("%d", &dates[i].month);
        } while (dates[i].month < 1 || dates[i].month > 12);

        do {
            printf("Enter a valid year: ");
            scanf("%d", &dates[i].year);
        } while (dates[i].year < 0);
    }

    int daysPassed = abs(dates[0].day - dates[1].day + (dates[0].month - dates[1].month) * 30 + (dates[0].year - dates[1].year) * 365);

    printf("---------------------------------------------\n");
    printf("Days passed from one date to another: %d\n", daysPassed);

    return 0;
}