// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 2. Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
Entrada = 4. Saída = abril.*/
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

void printMonth(int month) {
    switch (month) {
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
}

int main() {
    int choosedMonth;

    printf("Enter a month (1-12): ");
    scanf("%d", &choosedMonth);

    printMonth(choosedMonth);

    return 0;
}