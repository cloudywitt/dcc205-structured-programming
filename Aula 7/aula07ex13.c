// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 13. Crie uma enumeração representando os meses do ano. Agora, escreva um programa
que leia um valor inteiro do teclado e exiba o nome do mês correspondente e quantos
dias ele possui.*/
#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Month choosedMonth;
    int input;

    printf("Enter an integer to represent a month (1-12): ");
    scanf("%d", &input);

    choosedMonth = input;

    switch (choosedMonth) {
        case JANUARY:
            printf("January\n");
            printf("31 days\n");

            break;
        case FEBRUARY:
            printf("February\n");
            printf("28 or 29 days\n");

            break;
        case MARCH:
            printf("March\n");
            printf("31 days\n");

            break;
        case APRIL:
            printf("April\n");
            printf("30 days\n");

            break;
        case MAY:
            printf("May\n");
            printf("31 days\n");

            break;
        case JUNE:
            printf("June\n");
            printf("30 days\n");

            break;
        case JULY:
            printf("July\n");
            printf("31 days\n");

            break;
        case AUGUST:
            printf("August\n");
            printf("31 days\n");

            break;
        case SEPTEMBER:
            printf("September\n");
            printf("30 days\n");

            break;
        case OCTOBER:
            printf("October\n");
            printf("31 days\n");

            break;
        case NOVEMBER:
            printf("November\n");
            printf("30 days\n");

            break;
        case DECEMBER:
            printf("December\n");
            printf("31 days\n");

            break;
    }

    return 0;
}