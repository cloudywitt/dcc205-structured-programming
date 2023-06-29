// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 38. Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando quantas vezes a segunda string lida está contida dentro da primeira.*/
#include <stdio.h>
#include <string.h>

int main() {
    char firstStr[50];
    char secondStr[50];
    int occurrences = 0;

    printf("Enter the first string: ");
    fgets(firstStr, sizeof(firstStr), stdin);
    firstStr[strlen(firstStr) - 1] = '\0';

    printf("Enter the second string: ");
    fgets(secondStr, sizeof(secondStr), stdin);
    secondStr[strlen(secondStr) - 1] = '\0';

    char* p = strstr(firstStr, secondStr);

    while (p != NULL) {
        occurrences++;

        p = strstr(p + strlen(secondStr), secondStr);
    }

    printf("The second string had %d occurrences in the first one.\n", occurrences);

    return 0;
}
