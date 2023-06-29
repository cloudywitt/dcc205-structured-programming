// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 34. Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    int middle = strlen(str) / 2;

    for (int i = 0, j = strlen(str) - 1; j >= middle; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s\n", str);

    return 0;
}
