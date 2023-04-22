// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 6. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e
mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde
à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7 */
#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

    printf("Seu sexo [M/F]: ");
    scanf("%c", &sexo);

    printf("Sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * altura - 58;
        
        printf("Seu peso ideal é %.1f\n", pesoIdeal);
    }
    
    if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
        
        printf("Seu peso ideal é %.1f\n", pesoIdeal);
    }

    return 0;
}