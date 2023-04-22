// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 10. Faça um programa que leia três
números inteiros positivos e
efetue o cálculo de uma das
seguintes médias de acordo com
um valor numérico digitado pelo
usuário e mostrado na tabela a
seguir:
------------------------------------------------
| Número digitado |           Média            |
|----------------------------------------------|
| 1               |         Geométrica         |
|                 |         x * y * z          |
|----------------------------------------------|
| 2               |         Ponderada          |
|                 |  (x + 2 * y + 3 * z) / 6   |
|----------------------------------------------|
| 3               |         Harmônica          |
|                 | 1 / (1 / x + 1 / y + 1 / z)|
|----------------------------------------------|
| 4               |         Aritmética         |
|                 |      (x + y + z) / 3       |
------------------------------------------------
*/
#include <stdio.h>

int main() {
    int num1, num2, num3, opcao;

    printf("Digite três valores inteiros positivos: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("-------------------------\n");
    printf("Escolha qual média calcular:\n");
    printf("[1] Geométrica\n"); 
    printf("[2] Ponderada\n");
    printf("[3] Harmônica\n");
    printf("[4] Aritmética\n");
    printf("-------------------------\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);
    printf("-------------------------\n");

    switch (opcao) {
        case 1:
            int mediaGeometrica = num1 * num2 * num3;

            printf("Média geométrica: %d\n", mediaGeometrica);

            break;
        case 2:
            float mediaPonderada = (num1 + num2 * 2 + num3 * 3) / 3.0;

            printf("Média ponderada: %.1f\n", mediaPonderada);

            break;
        case 3:
            float mediaHarmonica = 1 / (1.0 / num1) + (1.0 / num2) + (1.0 / num3);

            printf("Média harmônica: %.1f\n", mediaHarmonica);

            break;
        case 4:
            float mediaAritmetica = (num1 + num2 + num3) / 3.0;

            printf("Média aritmética: %.1f\n", mediaAritmetica);

            break;
    }   

    return 0;
}