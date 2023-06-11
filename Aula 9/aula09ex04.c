// Aluno: Ângelo Garcia Fernandez
// Matrícula: 2022010034
// Disciplina: Programação Estruturada
/* 4. Elabore um programa no qual o usuário informe o nome de um arquivo texto e uma
palavra, e o programa informe o número de vezes que aquela palavra aparece dentro
do arquivo.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getStr(char *str, int size) {
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

FILE* openFile(char *name, const char * restrict mode) {
    FILE* fname = fopen(name, mode);

    if (fname == NULL) {
        printf("File not found\n");

        exit(1);
    }

    return fname;
}

int main() {
    // Get user inputs
    char fileName[30];

    printf("Enter the name of a text file (with extension): ");
    getStr(fileName, sizeof(fileName));
    
    char word[20];

    printf("Enter a word: ");
    getStr(word, sizeof(word));
    
    // File operation
    FILE* filePtr = openFile(fileName, "r");

    int occurrences = 0;

    char buffer[250];

    while (fgets(buffer, sizeof(buffer), filePtr) != NULL) {
        char* wordPos = strstr(buffer, word);

        while (wordPos != NULL) {
            occurrences++;

            wordPos = strstr(wordPos + strlen(word), word);
        }
    }

    fclose(filePtr);

    // Output
    printf("The word %s appears %d times in %s\n", word, occurrences, fileName);

    return 0;
}