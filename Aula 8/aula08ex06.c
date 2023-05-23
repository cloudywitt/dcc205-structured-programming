// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 6)Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa.
Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa:
IMC=peso/(altura*altura).*/
#include <stdio.h>

float imc(float weightKilograms, float heightMeters) {
    float imc;

    imc = weightKilograms / (heightMeters * heightMeters);

    return imc;
}

int main() {
    float weightKg;
    float heightM;
    float IMC;

    printf("Enter your weight (kg): ");
    scanf("%f", &weightKg);

    printf("Enter your height (m): ");
    scanf("%f", &heightM);

    IMC = imc(weightKg, heightM);

    printf("Your IMC is %.1f\n", IMC);

    return 0;
}