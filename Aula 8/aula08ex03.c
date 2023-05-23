// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 3. Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit
e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) *
(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
#include <stdio.h>

float convertorToCelsius(float fahrenheit) {
    float celsius;

    celsius = (fahrenheit - 32) * (5.0 / 9);

    return celsius;
}

int main() {
    float temperatureF;
    float temperatureC;

    printf("Enter a temperature (ºF): ");
    scanf("%f", &temperatureF);
    
    temperatureC = convertorToCelsius(temperatureF);

    printf("%.1f°F = %.1f°C\n", temperatureF, temperatureC);

    return 0;
}