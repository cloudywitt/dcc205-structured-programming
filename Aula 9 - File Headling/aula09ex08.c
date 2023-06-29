// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 8. Escreva uma função que receba como parâmetro o nome de um arquivo texto e retorne
quantas vogais esse arquivo possui.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

FILE* openFile(char* fname, const char * restrict mode) {
    FILE* filePtr = fopen(fname, mode);

    if (filePtr == NULL) {
        printf("Error while openning %s\n", fname);

        exit(1);
    }

    return filePtr;
}

bool isVowel(char ch) {
    bool isVowel = false;

    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    for (int c = 0; c < 5; c++) {
        if (ch == vowels[c] || ch == toupper(vowels[c])) {
            isVowel = true;

            break;
        }
    }

    return isVowel;
}

int countVowels(char* fname) {
    FILE* file = openFile(fname, "r");

    char c;
    int vowelCount = 0;

    while (true) {
        c = fgetc(file);

        if (feof(file)) {
            break;
        }

        if (isVowel(c)) {
            vowelCount++;           
        }
    }

    fclose(file);

    return vowelCount;
}

void getStr(char* str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

int main() {
    char fileName[50];

    printf("Enter a file name (with extension): ");
    getStr(fileName, sizeof(fileName));

    int vowelCount = countVowels(fileName);

    printf("There are %d vowels in %s\n", vowelCount, fileName);
}