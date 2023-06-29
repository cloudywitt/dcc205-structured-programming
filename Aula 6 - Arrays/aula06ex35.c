// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 35. Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um
caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse
caractere. Ao ﬁnal, imprima a nova string e o número de vogais que ela possui.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char charChosen;
    int vowelCount;

    printf("Enter a string: ");
    fgets(str, 20, stdin);

    printf("Enter a character: ");
    scanf("%c", &charChosen);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = charChosen;
        }
    }

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowelCount++;
        }
    }

    printf("The new string is %s and it has %d vowels.\n", str, vowelCount);

    return 0;
}