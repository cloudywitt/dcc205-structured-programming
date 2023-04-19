// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 6. Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a
velocidade em km/h e M em m/s.*/
#include <stdio.h>

int main() {
    float kmPorHora, mPorSegundo;

    printf("Digite uma velocidade (Km/h): ");
    scanf("%f", &kmPorHora);

    mPorSegundo = kmPorHora / 3.6;

    printf("%.1fKm/h equivale a %.1fm/s\n", kmPorHora, mPorSegundo);

    return 0;
}