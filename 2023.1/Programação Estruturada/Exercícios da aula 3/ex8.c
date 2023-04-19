// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 8. Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/
#include <stdio.h>

int main() {
    float tempCelsius, tempFahrenheit;
    
    printf("Digite uma temperatura em escala centígrada (°C): ");
    scanf("%f", &tempCelsius);
    
    tempFahrenheit = tempCelsius * (9.0 / 5.0) + 32.0;

    printf("%.1f °C equivale a %.1f °F\n", tempCelsius, tempFahrenheit);
    
    return 0;
}