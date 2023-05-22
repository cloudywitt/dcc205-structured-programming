// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 12. Crie uma enumeração representando os dias da semana. Agora, escreva um programa
que leia um valor inteiro do teclado e exiba o dia da semana correspondente.*/
#include <stdio.h>

enum week {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    enum week day;
    int input;

    printf("Enter an integer which represents a day of the week from Sunday to Saturday: ");
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