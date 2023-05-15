// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/*42. Escreva um programa que recebe uma string S e dois valores inteiros não negativos
i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j da
string S.*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int i, j;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    s[strlen(s) - 1] = '\0';

    printf("Enter a positive integer: ");
    scanf("%d", &i);

    printf("Enter another positive integer: ");
    scanf("%d", &j);

    for (i; i <= j; i++) {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}