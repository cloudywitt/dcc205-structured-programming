// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 7. Elabore uma função que receba três números inteiros como parâmetro, representando
horas, minutos e segundos. A função deve retornar esse horário convertido em
segundos.*/
#include <stdio.h>

int convertToSeconds(int hours, int minutes, int seconds) {
    int timeSeconds;

    timeSeconds = hours * 3600 + minutes * 60 + seconds;

    return timeSeconds;
}

int main() {
    int hours, minutes, seconds;

    printf("Enter a time (hours minutes seconds): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    int timeInSeconds = convertToSeconds(hours, minutes, seconds);

    printf("The time in seconds is %d\n", timeInSeconds);

    return 0;
}