// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 12. Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante. */
#include <stdio.h>

int main() {
    int diaDaSemana;

    printf("Digite um inteiro de 1 a 7: ");
    scanf("%d", &diaDaSemana);

    switch (diaDaSemana) {
        case 1:
            printf("Domingo.\n");

            break;
        case 2:
            printf("Segunda-feita.\n");

            break;
        case 3:
            printf("Terça-feira.\n");

            break;
        case 4:
            printf("Quarta-feira.\n");

            break;
        case 5:
            printf("Quinta-feira.\n");

            break;
        case 6:
            printf("Sexta-feira.\n");

            break;
        case 7:
            printf("Sábado.\n");

            break;
    }

    return 0;
}