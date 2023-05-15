// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 36. Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um
palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de poder ser
lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo,
arara, rever, asa, osso etc.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char strBackwards[20];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strlen(str) - 1] = '\0'; // removes newline at the end of fgets

    for (int i = 0, j = strlen(str) - 1; i < strlen(str); i++, j--) {
        strBackwards[i] = str[j];
    }

    if (strcmp(str, strBackwards) == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}