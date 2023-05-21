// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 7. Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.*/
#include <stdio.h>

struct Clock {
    int hour;
    int minute;
    int second;
};

int main() {
    struct Clock clocks[5];
    struct Clock longestHour = {0, 0, 0};

    for (int i = 0; i < 5; i++) {
        printf("Enter a time (hour/minute/second):");
        scanf("%d %d %d", &clocks[i].hour, &clocks[i].minute, &clocks[i].second);

        if (clocks[i].hour > longestHour.hour) {
            longestHour = clocks[i];
        } else if (clocks[i].minute > longestHour.minute) {
            longestHour = clocks[i];
        } else if (clocks[i].second > longestHour.second) {
            longestHour = clocks[i];
        }
    }

    printf("The longest hour is %02d:%02d:%02d\n", longestHour.hour, longestHour.minute, longestHour.second);

    return 0;
}