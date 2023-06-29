// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 12. Crie uma enumeração representando os dias da semana. Agora, escreva um programa
que leia um valor inteiro do teclado e exiba o dia da semana correspondente.*/
#include <stdio.h>

enum Week {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Week day;
    int input;

    printf("Enter an integer to represent a day of the week (1-7): ");
    scanf("%d", &input);

    day = input;

    switch (day) {
        case 1:
            printf("Sunday\n");

            break;
        case 2:
            printf("Monday\n");

            break;
        case 3:
            printf("Tuesday\n");

            break;
        case 4:
            printf("Wednesday\n");

            break;
        case 5:
            printf("Thursday\n");

            break;
        case 6:
            printf("Friday\n");

            break;
        case 7:
            printf("Saturday\n");

            break;
    }

    return 0;
}