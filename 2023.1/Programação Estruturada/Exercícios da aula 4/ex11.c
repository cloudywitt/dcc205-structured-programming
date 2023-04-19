// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 11. Faça um programa que informe o mês de acordo com o número digitado pelo
usuário. Exemplo: Entrada = 4. Saída = Abril. */
#include <stdio.h>

int main() {
    int mesNumero;

    printf("Digite o número de um mês: ");
    scanf("%d", &mesNumero);

    switch (mesNumero) {
        case 1:
            printf("Janeiro\n");

            break;
        case 2:
            printf("Fevereiro\n");

            break;
        case 3:
            printf("Março\n");

            break;
        case 4:
            printf("Abril\n");

            break;
        case 5:
            printf("Maio\n");

            break;
        case 6:
            printf("Junho\n");

            break;
        case 7:
            printf("Julho\n");

            break;
        case 8:
            printf("Agosto\n");

            break;
        case 9:
            printf("Setembro\n");

            break;
        case 10:
            printf("Outubro\n");

            break;
        case 11:
            printf("Novembro\n");

            break;   
        case 12:
            printf("Dezembro\n");

            break;
    }

    return 0;
}