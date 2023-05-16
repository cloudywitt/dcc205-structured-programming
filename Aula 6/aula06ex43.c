// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 43. O código de César é uma das técnicas de criptograﬁa mais simples e conhecidas. É
um tipo de substituição no qual cada letra do texto é substituída por outra, que se
apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de três
posições, a letra A seria substituída por D, B se tornaria E e assim por diante.
Escreva um programa que faça uso desse código de César para três posições. Entre
com uma string e imprima a string codiﬁcada. Exemplo:

String: a ligeira raposa marrom saltou sobre o cachorro cansado.

Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if ((int) str[i] >= 65 && (int) str[i] <= 90 || (int) str[i] >= 97 && (int) str[i] <= 122) {
            printf("%c", str[i] + 3);
        } else {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}